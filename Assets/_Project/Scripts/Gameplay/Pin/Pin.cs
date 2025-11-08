using _Project.Scripts.Gameplay.Rope;
using UnityEngine;
using DG.Tweening;

namespace _Project.Scripts.Gameplay.Pin
{
    /// <summary>
    /// Fixed pin at the bottom where ropes can be attached
    /// Pins don't move - only rope endpoints move between pins
    /// </summary>
    [RequireComponent(typeof(Collider))]
    public class Pin : MonoBehaviour
    {
        [Header("Pin Settings")]
        [SerializeField] private int pinId;
        
        [Header("Visual")]
        [SerializeField] private Color normalColor = Color.white;
        [SerializeField] private Color occupiedColor = Color.yellow;
        [SerializeField] private Color highlightColor = Color.green;
        
        [Header("Animation")]
        [SerializeField] private float highlightScaleMultiplier = 1.2f;
        [SerializeField] private float animationDuration = 0.2f;

        private Renderer pinRenderer;
        private MaterialPropertyBlock propertyBlock;
        private Vector3 originalScale;
        private Tween scaleTween;
        private Tween colorTween;
        
        private Rope.Rope attachedRope;
        private bool isOccupied;

        #region Properties

        public int PinId => pinId;
        public Vector3 Position => transform.position;
        public Transform Transform => transform;
        public bool IsOccupied => isOccupied;
        public Rope.Rope AttachedRope => attachedRope;

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            pinRenderer = GetComponent<Renderer>();
            if (pinRenderer == null)
            {
                pinRenderer = GetComponentInChildren<Renderer>();
            }

            propertyBlock = new MaterialPropertyBlock();
            originalScale = transform.localScale;
            
            SetColor(normalColor);
        }

        private void OnDestroy()
        {
            scaleTween?.Kill();
            colorTween?.Kill();
        }

        private void OnValidate()
        {
            if (pinId == 0 && gameObject.scene.IsValid())
            {
                pinId = GetInstanceID();
            }
        }

        #endregion

        #region Rope Attachment

        /// <summary>
        /// Attach a rope to this pin
        /// </summary>
        public void AttachRope(Rope.Rope rope)
        {
            if (isOccupied && attachedRope != rope)
            {
                Debug.LogWarning($"[Pin {pinId}] Already occupied by another rope!");
                return;
            }

            attachedRope = rope;
            isOccupied = true;
            
            SetColor(occupiedColor);
            PlayPulseAnimation();

            Debug.Log($"[Pin {pinId}] Rope attached");
        }

        /// <summary>
        /// Detach rope from this pin
        /// </summary>
        public void DetachRope()
        {
            if (attachedRope != null)
            {
                attachedRope = null;
                isOccupied = false;
                
                SetColor(normalColor);
                
                Debug.Log($"[Pin {pinId}] Rope detached");
            }
        }

        /// <summary>
        /// Check if this pin can accept a rope
        /// </summary>
        public bool CanAcceptRope()
        {
            return !isOccupied;
        }

        #endregion

        #region Visual Feedback

        public void Highlight(bool highlight)
        {
            if (highlight)
            {
                SetColor(highlightColor);
                AnimateScale(originalScale * highlightScaleMultiplier);
            }
            else
            {
                SetColor(isOccupied ? occupiedColor : normalColor);
                AnimateScale(originalScale);
            }
        }

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
            scaleTween = transform.DOScale(targetScale, animationDuration).SetEase(Ease.OutBack);
        }

        public void PlayPulseAnimation()
        {
            scaleTween?.Kill();
            
            Sequence pulseSequence = DOTween.Sequence();
            pulseSequence.Append(transform.DOScale(originalScale * 1.3f, 0.1f));
            pulseSequence.Append(transform.DOScale(originalScale, 0.2f).SetEase(Ease.OutBounce));
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            Gizmos.color = isOccupied ? Color.red : Color.green;
            Gizmos.DrawWireSphere(transform.position, 0.2f);
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.yellow;
            Gizmos.DrawWireSphere(transform.position, 0.3f);
            
            #if UNITY_EDITOR
            UnityEditor.Handles.Label(transform.position + Vector3.up * 0.5f, $"Pin {pinId}");
            #endif
        }

        #endregion
    }
}