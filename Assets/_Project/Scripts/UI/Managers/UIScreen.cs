using System;
using System.Threading;
using _Project.Scripts.Core.Enums;
using _Project.Scripts.UI.Enums;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.UI.Managers
{
    [RequireComponent(typeof(CanvasGroup))]
    public abstract class UIScreen : MonoBehaviour
    {
        [Header("Screen Settings")]
        [SerializeField] protected string screenName = "Screen";
        [SerializeField] protected bool hideOnAwake = true;
        
        [Header("Animation Settings")]
        [SerializeField] protected float showDuration = 0.3f;
        [SerializeField] protected float hideDuration = 0.2f;
        [SerializeField] protected Ease showEase = Ease.OutBack;
        [SerializeField] protected Ease hideEase = Ease.InBack;
        
        [Header("Animation Type")]
        [SerializeField] protected ScreenAnimationType animationType = ScreenAnimationType.Fade;
        [SerializeField] protected Vector3 slideDirection = new Vector3(0, 1000, 0);

        protected CanvasGroup canvasGroup;
        protected RectTransform rectTransform;
        protected Vector3 originalPosition;
        protected bool isVisible;
        
        private Sequence currentAnimation;
        private CancellationTokenSource animationCts;

        
        #region Properties

        public string ScreenName => screenName;
        public bool IsVisible => isVisible;
        public bool IsAnimating => currentAnimation != null && currentAnimation.IsActive();

        #endregion
        
        protected virtual void Awake()
        {
            canvasGroup = GetComponent<CanvasGroup>();
            rectTransform = GetComponent<RectTransform>();
            originalPosition = rectTransform.anchoredPosition;

            if (hideOnAwake)
            {
                HideImmediate();
            }
        }
        
        protected virtual void OnDestroy()
        {
            currentAnimation?.Kill();
            animationCts?.Cancel();
            animationCts?.Dispose();
        }
        
        #region Show/Hide Methods
        
        public async UniTask Show(CancellationToken cancellationToken = default)
        {
            if (isVisible) return;

            gameObject.SetActive(true);
            isVisible = true;

            OnBeforeShow();

            await PlayShowAnimation(cancellationToken);

            OnAfterShow();

            Debug.Log($"[UIScreen] {screenName} shown.");
        }
        
        public async UniTask Hide(CancellationToken cancellationToken = default)
        {
            if (!isVisible) return;

            isVisible = false;

            OnBeforeHide();

            await PlayHideAnimation(cancellationToken);

            OnAfterHide();

            gameObject.SetActive(false);

            Debug.Log($"[UIScreen] {screenName} hidden.");
        }
        
        public void ShowImmediate()
        {
            currentAnimation?.Kill();
            
            gameObject.SetActive(true);
            isVisible = true;

            canvasGroup.alpha = 1f;
            canvasGroup.interactable = true;
            canvasGroup.blocksRaycasts = true;
            rectTransform.anchoredPosition = originalPosition;
            rectTransform.localScale = Vector3.one;

            OnAfterShow();
        }
        
        public void HideImmediate()
        {
            currentAnimation?.Kill();
            
            isVisible = false;

            canvasGroup.alpha = 0f;
            canvasGroup.interactable = false;
            canvasGroup.blocksRaycasts = false;

            gameObject.SetActive(false);

            OnAfterHide();
        }
        
        #endregion
        
        #region Animation Methods

        private async UniTask PlayShowAnimation(CancellationToken cancellationToken)
        {
            currentAnimation?.Kill();

            // Disable interaction during animation
            canvasGroup.interactable = false;

            currentAnimation = DOTween.Sequence();

            switch (animationType)
            {
                case ScreenAnimationType.Fade:
                    PlayFadeInAnimation();
                    break;

                case ScreenAnimationType.Scale:
                    PlayScaleInAnimation();
                    break;

                case ScreenAnimationType.Slide:
                    PlaySlideInAnimation();
                    break;

                case ScreenAnimationType.FadeAndScale:
                    PlayFadeAndScaleInAnimation();
                    break;

                case ScreenAnimationType.FadeAndSlide:
                    PlayFadeAndSlideInAnimation();
                    break;
            }

            currentAnimation.OnComplete(() =>
            {
                canvasGroup.interactable = true;
                canvasGroup.blocksRaycasts = true;
            });

            try
            {
                await currentAnimation.AsyncWaitForCompletion().AsUniTask().AttachExternalCancellation(cancellationToken);
            }
            catch (OperationCanceledException)
            {
                currentAnimation?.Kill();
            }
        }
        
        private async UniTask PlayHideAnimation(CancellationToken cancellationToken)
        {
            currentAnimation?.Kill();

            // Disable interaction immediately
            canvasGroup.interactable = false;
            canvasGroup.blocksRaycasts = false;

            currentAnimation = DOTween.Sequence();

            switch (animationType)
            {
                case ScreenAnimationType.Fade:
                    PlayFadeOutAnimation();
                    break;

                case ScreenAnimationType.Scale:
                    PlayScaleOutAnimation();
                    break;

                case ScreenAnimationType.Slide:
                    PlaySlideOutAnimation();
                    break;

                case ScreenAnimationType.FadeAndScale:
                    PlayFadeAndScaleOutAnimation();
                    break;

                case ScreenAnimationType.FadeAndSlide:
                    PlayFadeAndSlideOutAnimation();
                    break;
            }

            try
            {
                await currentAnimation.AsyncWaitForCompletion().AsUniTask().AttachExternalCancellation(cancellationToken);
            }
            catch (OperationCanceledException)
            {
                currentAnimation?.Kill();
            }
        }

        #endregion
        
        #region Specific Animations

        private void PlayFadeInAnimation()
        {
            canvasGroup.alpha = 0f;
            currentAnimation.Append(canvasGroup.DOFade(1f, showDuration).SetEase(showEase));
        }

        private void PlayFadeOutAnimation()
        {
            currentAnimation.Append(canvasGroup.DOFade(0f, hideDuration).SetEase(hideEase));
        }

        private void PlayScaleInAnimation()
        {
            rectTransform.localScale = Vector3.zero;
            currentAnimation.Append(rectTransform.DOScale(Vector3.one, showDuration).SetEase(showEase));
        }

        private void PlayScaleOutAnimation()
        {
            currentAnimation.Append(rectTransform.DOScale(Vector3.zero, hideDuration).SetEase(hideEase));
        }

        private void PlaySlideInAnimation()
        {
            rectTransform.anchoredPosition = originalPosition + slideDirection;
            currentAnimation.Append(rectTransform.DOAnchorPos(originalPosition, showDuration).SetEase(showEase));
        }

        private void PlaySlideOutAnimation()
        {
            currentAnimation.Append(rectTransform.DOAnchorPos(originalPosition + slideDirection, hideDuration).SetEase(hideEase));
        }

        private void PlayFadeAndScaleInAnimation()
        {
            canvasGroup.alpha = 0f;
            rectTransform.localScale = Vector3.zero;

            currentAnimation.Append(canvasGroup.DOFade(1f, showDuration).SetEase(showEase));
            currentAnimation.Join(rectTransform.DOScale(Vector3.one, showDuration).SetEase(showEase));
        }

        private void PlayFadeAndScaleOutAnimation()
        {
            currentAnimation.Append(canvasGroup.DOFade(0f, hideDuration).SetEase(hideEase));
            currentAnimation.Join(rectTransform.DOScale(Vector3.zero, hideDuration).SetEase(hideEase));
        }

        private void PlayFadeAndSlideInAnimation()
        {
            canvasGroup.alpha = 0f;
            rectTransform.anchoredPosition = originalPosition + slideDirection;

            currentAnimation.Append(canvasGroup.DOFade(1f, showDuration).SetEase(showEase));
            currentAnimation.Join(rectTransform.DOAnchorPos(originalPosition, showDuration).SetEase(showEase));
        }

        private void PlayFadeAndSlideOutAnimation()
        {
            currentAnimation.Append(canvasGroup.DOFade(0f, hideDuration).SetEase(hideEase));
            currentAnimation.Join(rectTransform.DOAnchorPos(originalPosition + slideDirection, hideDuration).SetEase(hideEase));
        }

        #endregion
        
        #region Lifecycle Hooks
        
        protected virtual void OnBeforeShow() { }
        
        protected virtual void OnAfterShow() { }
        
        protected virtual void OnBeforeHide() { }
        
        protected virtual void OnAfterHide() { }
        
        #endregion

    }
}