using System;
using _Project.Scripts.Core.Enums;
using _Project.Scripts.Core.EventChannels;
using _Project.Scripts.Core.Interfaces;
using UnityEngine;

namespace _Project.Scripts.Core.Managers
{
    public class GameManager : MonoBehaviour, IManager
    {
        public static GameManager Instance { get; private set; }

        [Header("Event Channels")] 
        [SerializeField] private VoidEventChannel OnGameStarted;
        [SerializeField] private VoidEventChannel onGamePaused;
        [SerializeField] private VoidEventChannel onGameResumed;
        [SerializeField] private VoidEventChannel onGameOver;
        
        [Header("Settings")]
        [SerializeField] private bool initializeOnAwake = true;
        
        private GameState currentState = GameState.Menu;

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
            DontDestroyOnLoad(gameObject);
            
            if (initializeOnAwake)
            {
                Initialize();
            }
        }

        private void OnDestroy()
        {
            if (Instance == this)
            {
                Cleanup();
                Instance = null;
            }
        }

        public void Initialize()
        {
            Debug.Log("[GameManager] Initializing...");
            
            Debug.Log("[GameManager] Initialization complete.");
        }

        public void Cleanup()
        {
            Debug.Log("[GameManager] Cleaning up...");
            
            OnGameStarted?.ClearAllListeners();
            onGamePaused?.ClearAllListeners();
            onGameResumed?.ClearAllListeners();
            onGameOver?.ClearAllListeners();
            
            Debug.Log("[GameManager] Cleanup complete.");
        }

        public void StartGame()
        {
            if (currentState == GameState.Playing)
            {
                Debug.LogWarning("[GameManager] Game is already playing.");
                return;
            }

            currentState = GameState.Playing;
            OnGameStarted?.RaiseEvent();
            
            Debug.Log("[GameManager] Game started.");
        }

        public void PauseGame()
        {
            if (currentState != GameState.Playing)
            {
                Debug.LogWarning("[GameManager] Cannot pause - game is not playing.");
                return;
            }

            currentState = GameState.Paused;
            Time.timeScale = 0f;
            onGamePaused?.RaiseEvent();
            
            Debug.Log("[GameManager] Game paused.");
        }

        public void ResumeGame()
        {
            if (currentState != GameState.Paused)
            {
                Debug.LogWarning("[GameManager] Cannot resume - game is not paused.");
                return;
            }

            currentState = GameState.Playing;
            Time.timeScale = 1f;
            onGameResumed?.RaiseEvent();
            
            Debug.Log("[GameManager] Game resumed.");
        }

        public void EndGame()
        {
            if (currentState != GameState.Playing)
            {
                Debug.LogWarning("[GameManager] Cannot end - game is not playing.");
                return;
            }

            currentState = GameState.GameOver;
            onGameOver?.RaiseEvent();
            
            Debug.Log("[GameManager] Game over.");
        }

        public void ReturnToMenu()
        {
            currentState = GameState.Menu;
            Time.timeScale = 1f;
            
            Debug.Log("[GameManager] Returned to menu.");
        }
        
        public GameState GetCurrentState() => currentState;
    }
}