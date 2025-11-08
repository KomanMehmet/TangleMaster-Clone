using _Project.Scripts.Core.EventChannels;
using _Project.Scripts.Core.Managers;
using _Project.Scripts.UI.Managers;
using TMPro;
using UnityEngine;

namespace _Project.Scripts.UI.Screens
{
    public class GameplayScreen : UIScreen
    {
        [Header("UI References")]
        [SerializeField] private TMP_Text levelNumberText;
        [SerializeField] private TMP_Text moveCountText;
        
        [Header("Event Channels")]
        [SerializeField] private IntEventChannel onLevelNumberChanged;
        
        protected override void Awake()
        {
            base.Awake();
            screenName = "GameplayScreen";
        }
        
        private void OnEnable()
        {
            if (onLevelNumberChanged != null)
            {
                onLevelNumberChanged.AddListener(UpdateLevelNumber);
            }
        }

        private void OnDisable()
        {
            if (onLevelNumberChanged != null)
            {
                onLevelNumberChanged.RemoveListener(UpdateLevelNumber);
            }
        }
        
        private void Update()
        {
            if (LevelManager.Instance != null && LevelManager.Instance.IsLevelActive)
            {
                UpdateMoveCount(LevelManager.Instance.MovesRemaining);
            }
        }
        
        private void UpdateGameplayUI()
        {
            if (LevelManager.Instance == null) return;

            // Level number
            if (levelNumberText != null)
            {
                levelNumberText.text = $"Level {LevelManager.Instance.CurrentLevelIndex + 1}";
            }

            // Moves remaining
            if (moveCountText != null)
            {
                int moves = LevelManager.Instance.MovesRemaining;
                if (moves == -1)
                {
                    moveCountText.text = "Moves: ∞";
                }
                else
                {
                    moveCountText.text = $"Moves: {moves}";
                    
                    // Color coding
                    if (moves <= 1)
                        moveCountText.color = Color.red;
                    else if (moves <= 3)
                        moveCountText.color = Color.yellow;
                    else
                        moveCountText.color = Color.white;
                }
            }
        }
        
        protected override void OnAfterShow()
        {
            base.OnAfterShow();

            // Initialize UI when screen shows
            if (LevelManager.Instance != null)
            {
                UpdateLevelNumber(LevelManager.Instance.CurrentLevel?.LevelNumber ?? 1);
                UpdateMoveCount(LevelManager.Instance.MovesRemaining);
            }
        }

        private void UpdateLevelNumber(int levelNumber)
        {
            if (levelNumberText != null)
            {
                levelNumberText.text = $"Level {levelNumber}";
            }
        }

        private void UpdateMoveCount(int moves)
        {
            if (moveCountText != null)
            {
                moveCountText.text = $"Moves: {moves}";
            }
        }

        #region Button Handlers

        public void OnPauseButtonClicked()
        {
            if (GameManager.Instance != null)
            {
                GameManager.Instance.PauseGame();
            }
        }

        #endregion
    }
}