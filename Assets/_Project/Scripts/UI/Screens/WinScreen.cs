using _Project.Scripts.Core.Managers;
using _Project.Scripts.UI.Managers;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace _Project.Scripts.UI.Screens
{
    public class WinScreen : UIScreen
    {
        [Header("UI References")]
        [SerializeField] private TMP_Text winLevelText;
        [SerializeField] private TMP_Text winMovesText;
        [SerializeField] private TMP_Text winTimeText;
        
        [Header("Animation")]
        [SerializeField] private CanvasGroup statsGroup;
        [SerializeField] private float statsAnimationDelay = 0.3f;
        
        protected override void Awake()
        {
            base.Awake();
            screenName = "WinScreen";
        }

        protected override void OnBeforeShow()
        {
            base.OnBeforeShow();
            
            UpdateWinData();
            
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

        private void UpdateWinData()
        {
            if (LevelManager.Instance == null) return;

            if (winLevelText != null)
            {
                winLevelText.text = $"Level {LevelManager.Instance.CurrentLevel.LevelNumber}\nComplete!";
            }

            if (winMovesText != null)
            {
                winMovesText.text = $"Moves: {LevelManager.Instance.MoveCount}";
            }

            if (winTimeText != null)
            {
                winTimeText.text = $"Time: {LevelManager.Instance.ElapsedTime:F2}s";
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

        public void OnNextLevelButtonClicked()
        {
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.LoadNextLevel();
            }
        }

        public void OnRestartButtonClicked()
        {
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.ReloadLevel();
            }
        }

        #endregion
    }
}