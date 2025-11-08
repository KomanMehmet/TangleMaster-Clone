using UnityEngine;
using DG.Tweening;
using System.Collections.Generic;

namespace _Project.Scripts.Gameplay.Rope
{
    [RequireComponent(typeof(Collider))]
    public class RopeEndpoint : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private float dragHeight = 0.5f;
        [SerializeField] private float snapDistance = 1.5f;
        
        [Header("Visual")]
        [SerializeField] private Color normalColor = Color.white;
        [SerializeField] private Color dragColor = Color.yellow;
        [SerializeField] private float scaleMultiplier = 1.3f;

        private Rope parentRope;
        private Pin.Pin currentPin;
        private bool isDragging;
        private Vector3 dragOffset;
        private Vector3 originalScale;
        
        private Renderer endpointRenderer;
        private MaterialPropertyBlock propertyBlock;
        private Tween scaleTween;
        private float zOffset = 0f;

        #region Properties

        public bool IsDragging => isDragging;
        public Pin.Pin CurrentPin => currentPin;

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            endpointRenderer = GetComponent<Renderer>();
            if (endpointRenderer == null)
            {
                endpointRenderer = GetComponentInChildren<Renderer>();
            }

            propertyBlock = new MaterialPropertyBlock();
            originalScale = transform.localScale;
        }

        private void OnDestroy()
        {
            scaleTween?.Kill();
        }

        #endregion

        #region Initialization

        public void Initialize(Rope rope, Pin.Pin initialPin)
        {
            parentRope = rope;
            currentPin = initialPin;
    
            transform.position = initialPin.Position; // Z offset yok
            initialPin.AttachRope(rope);
        }

        #endregion

        #region Drag Handling

        public void StartDrag(Vector3 worldPosition)
        {
            if (parentRope == null || currentPin == null) return;

            isDragging = true;
            dragOffset = transform.position - worldPosition;
            
            currentPin.DetachRope();

            SetColor(dragColor);
            AnimateScale(originalScale * scaleMultiplier);

            HighlightNearbyPins(true);

            Debug.Log($"[RopeEndpoint] Started dragging from Pin {currentPin.PinId}");
        }

        public void DragTo(Vector3 worldPosition)
        {
            if (!isDragging) return;

            Vector3 targetPos = worldPosition + dragOffset;
            targetPos.y = dragHeight;
    
            transform.position = targetPos;
    
            Pin.Pin closestPin = FindClosestAvailablePin();
            HighlightNearbyPins(true, closestPin);
        }

        public void EndDrag()
        {
            if (!isDragging) return;

            isDragging = false;
            
            Pin.Pin nearestPin = FindClosestAvailablePin();
            
            if (nearestPin != null && Vector3.Distance(transform.position, nearestPin.Position) < snapDistance)
            {
                AttachToPin(nearestPin);
            }
            else
            {
                AttachToPin(currentPin);
                Debug.Log($"[RopeEndpoint] No valid pin nearby, returning to Pin {currentPin.PinId}");
            }
            
            SetColor(normalColor);
            AnimateScale(originalScale);
            
            HighlightNearbyPins(false);
        }

        #endregion

        #region Pin Attachment

        private void AttachToPin(Pin.Pin pin)
        {
            if (pin == null) return;

            if (currentPin != null && currentPin != pin)
            {
                currentPin.DetachRope();
            }

            Pin.Pin oldPin = currentPin;
            currentPin = pin;

            pin.AttachRope(parentRope);

            Vector3 targetPos = pin.Position;
            transform.DOMove(targetPos, 0.2f).SetEase(Ease.OutBack);

            if (parentRope != null)
            {
                parentRope.OnEndpointMoved(pin, oldPin);
            }
        }

        #endregion

        #region Pin Finding

        private Pin.Pin FindClosestAvailablePin()
        {
            Pin.Pin[] allPins = FindObjectsOfType<Pin.Pin>();
            
            Pin.Pin closest = null;
            float closestDistance = float.MaxValue;

            foreach (Pin.Pin pin in allPins)
            {
                if (pin != currentPin && !pin.CanAcceptRope())
                    continue;

                float distance = Vector3.Distance(transform.position, pin.Position);
                
                if (distance < closestDistance)
                {
                    closestDistance = distance;
                    closest = pin;
                }
            }

            return closest;
        }

        private List<Pin.Pin> GetNearbyPins(float radius = 3f)
        {
            Pin.Pin[] allPins = FindObjectsOfType<Pin.Pin>();
            List<Pin.Pin> nearby = new List<Pin.Pin>();

            foreach (Pin.Pin pin in allPins)
            {
                if (pin == currentPin) continue;
                
                float distance = Vector3.Distance(transform.position, pin.Position);
                if (distance < radius)
                {
                    nearby.Add(pin);
                }
            }

            return nearby;
        }

        #endregion

        #region Visual Feedback

        private void HighlightNearbyPins(bool highlight, Pin.Pin specificPin = null)
        {
            if (specificPin != null)
            {
                Pin.Pin[] allPins = FindObjectsOfType<Pin.Pin>();
                foreach (Pin.Pin pin in allPins)
                {
                    pin.Highlight(pin == specificPin && highlight);
                }
            }
            else
            {
                List<Pin.Pin> nearbyPins = GetNearbyPins(snapDistance * 2f);
                foreach (Pin.Pin pin in nearbyPins)
                {
                    if (pin.CanAcceptRope() || pin == currentPin)
                    {
                        pin.Highlight(highlight);
                    }
                }
            }
        }

        private void SetColor(Color color)
        {
            if (endpointRenderer == null) return;

            endpointRenderer.GetPropertyBlock(propertyBlock);
            propertyBlock.SetColor("_Color", color);
            propertyBlock.SetColor("_BaseColor", color);
            endpointRenderer.SetPropertyBlock(propertyBlock);
        }

        private void AnimateScale(Vector3 targetScale)
        {
            scaleTween?.Kill();
            scaleTween = transform.DOScale(targetScale, 0.2f).SetEase(Ease.OutBack);
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            if (isDragging)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawWireSphere(transform.position, snapDistance);
            }
        }

        #endregion
    }
}