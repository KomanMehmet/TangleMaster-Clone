using _Project.Scripts.Core.Managers;
using _Project.Scripts.UI.Managers;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Project.Scripts.UI.Screens
{
    public class FailScreen : UIScreen
    {
        [Header("UI References")]
        [SerializeField] private TMP_Text failLevelText;
        [SerializeField] private TMP_Text failMovesText;
        [SerializeField] private TMP_Text failTimeText;
        
        [Header("Win Panel")]
        [SerializeField] private Button mainMenuButton;
        [SerializeField] private Button restartButton;
        
        [Header("Animation")]
        [SerializeField] private CanvasGroup statsGroup;
        [SerializeField] private float statsAnimationDelay = 0.3f;
        
        protected override void Awake()
        {
            base.Awake();
            screenName = "FailScreen";
        }

        protected override void OnBeforeShow()
        {
            base.OnBeforeShow();
            
            UpdateFailData();
            
            if (statsGroup != null)
            {
                statsGroup.alpha = 0f;
            }
        }

        protected override void OnAfterShow()
        {
            base.OnAfterShow();

            AnimateStatsIn();
        }

        private void UpdateFailData()
        {
            if (LevelManager.Instance == null) return;

            if (failLevelText != null)
            {
                failLevelText.text = $"Level {LevelManager.Instance.CurrentLevel.LevelNumber}\nFailed!";
            }

            if (failMovesText != null)
            {
                failMovesText.text = $"Moves: {LevelManager.Instance.MovesRemaining}";
            }

            if (failTimeText != null)
            {
                failTimeText.text = $"Time: {LevelManager.Instance.ElapsedTime:F2}s";
            }
        }

        private void AnimateStatsIn()
        {
            if (statsGroup == null) return;

            DOTween.Sequence()
                .AppendInterval(statsAnimationDelay)
                .Append(statsGroup.DOFade(1f, 0.5f).SetEase(Ease.OutQuad));
        }

        #region Button Handlers

        public void OnRestartButtonClicked()
        {
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.ReloadLevel();
            }
        }

        public void OnMainMenuButtonClicked()
        {
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.LoadMainMenu();
            }
        }

        #endregion
    }
}