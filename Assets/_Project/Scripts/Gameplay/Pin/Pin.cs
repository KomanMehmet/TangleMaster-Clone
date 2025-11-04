using _Project.Scripts.Core.Interfaces;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Pin
{
    [RequireComponent(typeof(Collider))]
    public class Pin : MonoBehaviour, IPin
    {
        [Header("Ping Settings")] 
        [SerializeField] private int pinId;
        [SerializeField] private bool isDraggable = true;
        [SerializeField] private float dragHeight = 0.1f;
        
        [Header("Visual Feedback")]
        [SerializeField] private Color normalColor = Color.white;
        [SerializeField] private Color selectedColor  = Color.yellow;
        [SerializeField] private Color dragColor  = Color.green;

        [Header("Animation")] 
        [SerializeField] private float scaleMultiplier = 1.2f;
        [SerializeField] private float animationDuration = 0.2f;
        [SerializeField] private Ease scaleEase = Ease.OutBack;
        
        private Renderer pinRenderer;
        private MaterialPropertyBlock propertyBlock;
        private Vector3 originalScale;
        private Vector3 dragOffset;
        private bool isDragging;
        private Plane dragPlane;
        private Tween scaleTween;
        private Tween colorTween;
        
        
        #region IPin Implementation

        public int PinId => pinId;
        public Vector3 Position => transform.position;
        public Transform Transform => transform;
        public bool IsDragging => isDragging;
        public bool IsDraggable => isDraggable;

        #endregion

        private void Awake()
        {
            pinRenderer = GetComponent<Renderer>();

            if (pinRenderer == null)
            {
                pinRenderer = GetComponentInChildren<Renderer>();
            }
            
            propertyBlock = new MaterialPropertyBlock();
            originalScale = transform.localScale;

            dragPlane = new Plane(Vector3.up, transform.position);
        }

        private void OnDestroy()
        {
            scaleTween.Kill();
            colorTween.Kill();
        }

        private void OnValidate()
        {
            if (pinId == 0 && gameObject.scene.IsValid())
            {
                pinId = GetInstanceID();
            }
        }
        
        #region IPin Methods

        public void OnSelected()
        {
            if (!isDraggable) return;

            SetColor(selectedColor);
            AnimateScale(originalScale * scaleMultiplier);
        }

        public void OnDeselected()
        {
            SetColor(normalColor);
            AnimateScale(originalScale);
        }

        public void UpdatePosition(Vector3 newPosition)
        {
            transform.position = newPosition;
        }
        
        #endregion
        
        #region Drag System

        public void StartDrag()
        {
            if (!isDraggable) return;

            isDragging = true;
            SetColor(dragColor);
            AnimateScale(originalScale * scaleMultiplier);

#if UNITY_EDITOR
            Debug.Log($"[Pin {pinId}] Started dragging");
#endif
        }

        public void DragTo(Vector3 targetWorldPosition)
        {
            if (!isDragging) return;

            UpdatePosition(targetWorldPosition);
        }

        public void EndDrag()
        {
            if (!isDragging) return;

            isDragging = false;
            SetColor(normalColor);
            AnimateScale(originalScale);

#if UNITY_EDITOR
            Debug.Log($"[Pin {pinId}] Ended dragging");
#endif
        }
        
        #endregion
        
        #region Visual Feedback

        private void SetColor(Color targetColor)
        {
            if (pinRenderer == null) return;
            
            colorTween?.Kill();
            
            pinRenderer.GetPropertyBlock(propertyBlock);
            
            Color currentColor = propertyBlock.GetColor("_BaseColor");
            
            if (currentColor == Color.clear)
            {
                currentColor = propertyBlock.GetColor("_Color");
            }

            colorTween = DOVirtual.Color(
                currentColor,
                targetColor,
                animationDuration,
                color =>
                {
                    if (pinRenderer == null) return;
                    
                    propertyBlock.SetColor("_Color", color);
                    propertyBlock.SetColor("_BaseColor", color);
                    pinRenderer.SetPropertyBlock(propertyBlock);
                }
            ).SetEase(Ease.OutQuad);
        }

        private void AnimateScale(Vector3 targetScale)
        {
            scaleTween?.Kill();
            
            scaleTween = transform
                .DOScale(targetScale, animationDuration)
                .SetEase(scaleEase);
        }
        
        public void PlayBounceAnimation()
        {
            scaleTween?.Kill();
            
            Sequence bounceSequence = DOTween.Sequence();
            bounceSequence.Append(transform.DOScale(originalScale * 1.3f, 0.1f).SetEase(Ease.OutQuad));
            bounceSequence.Append(transform.DOScale(originalScale, 0.2f).SetEase(Ease.OutBounce));
        }
        
        public void PlayShakeAnimation()
        {
            transform.DOShakePosition(0.3f, strength: 0.1f, vibrato: 20, randomness: 90f);
        }
        
        #endregion
        
        #region Gizmos

        private void OnDrawGizmos()
        {
            Gizmos.color = isDraggable ? Color.green : Color.red;
            Gizmos.DrawWireSphere(transform.position, 0.2f);
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.yellow;
            Gizmos.DrawWireSphere(transform.position, 0.3f);
        }

        #endregion
    }
}