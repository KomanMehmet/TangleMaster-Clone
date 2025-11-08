using System.Collections.Generic;
using System.Threading;
using _Project.Scripts.Core.EventChannels;
using _Project.Scripts.Core.Interfaces;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

namespace _Project.Scripts.UI.Managers
{
    public class UIManager : MonoBehaviour, IManager
    {
        public static UIManager Instance { get; private set; }

        [Header("Screens")]
        [SerializeField] private List<UIScreen> allScreens = new List<UIScreen>();

        [Header("Event Channels")]
        [SerializeField] private VoidEventChannel onLevelStarted;
        [SerializeField] private VoidEventChannel onLevelCompleted;
        [SerializeField] private VoidEventChannel onLevelFailed;
        [SerializeField] private VoidEventChannel onGamePaused;
        [SerializeField] private VoidEventChannel onGameResumed;

        private Dictionary<string, UIScreen> screenDictionary = new Dictionary<string, UIScreen>();
        private Stack<UIScreen> screenStack = new Stack<UIScreen>();
        private UIScreen currentScreen;
        private CancellationTokenSource transitionCts;

        #region Properties

        public UIScreen CurrentScreen => currentScreen;
        public bool IsTransitioning => transitionCts != null && !transitionCts.IsCancellationRequested;

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
            Initialize();
        }

        private void OnEnable()
        {
            SubscribeToEvents();
        }

        private void OnDisable()
        {
            UnsubscribeFromEvents();
        }

        private void OnDestroy()
        {
            if (Instance == this)
            {
                Cleanup();
                Instance = null;
            }
        }

        #endregion

        #region IManager Implementation

        public void Initialize()
        {
            screenDictionary.Clear();
            foreach (var screen in allScreens)
            {
                if (screen != null)
                {
                    screenDictionary[screen.ScreenName] = screen;
                }
            }

            Debug.Log($"[UIManager] Initialized with {screenDictionary.Count} screens.");
        }

        public void Cleanup()
        {
            if (transitionCts != null && !transitionCts.IsCancellationRequested)
            {
                transitionCts.Cancel();
            }
            transitionCts?.Dispose();
            transitionCts = null;

            screenStack.Clear();
            screenDictionary.Clear();

            Debug.Log("[UIManager] Cleaned up.");
        }

        #endregion

        #region Event Subscription

        private void SubscribeToEvents()
        {
            onLevelStarted?.AddListener(OnLevelStarted);
            onLevelCompleted?.AddListener(OnLevelCompleted);
            onLevelFailed?.AddListener(OnLevelFailed);
            onGamePaused?.AddListener(OnGamePaused);
            onGameResumed?.AddListener(OnGameResumed);
        }

        private void UnsubscribeFromEvents()
        {
            onLevelStarted?.RemoveListener(OnLevelStarted);
            onLevelCompleted?.RemoveListener(OnLevelCompleted);
            onLevelFailed?.RemoveListener(OnLevelFailed);
            onGamePaused?.RemoveListener(OnGamePaused);
            onGameResumed?.RemoveListener(OnGameResumed);
        }

        #endregion

        #region Event Handlers

        private void OnLevelStarted()
        {
            ShowScreen("GameplayScreen").Forget();
        }

        private void OnLevelCompleted()
        {
            ShowScreen("WinScreen").Forget();
        }

        private void OnLevelFailed()
        {
            ShowScreen("FailScreen").Forget();
        }

        private void OnGamePaused()
        {
            PushScreen("PauseScreen").Forget();
        }

        private void OnGameResumed()
        {
            PopScreen().Forget();
        }

        #endregion

        #region Screen Management
        
        public async UniTask ShowScreen(string screenName, bool immediate = false)
        {
            if (IsTransitioning)
            {
                Debug.LogWarning($"[UIManager] Cannot show {screenName} - transition in progress");
                return;
            }

            if (!screenDictionary.TryGetValue(screenName, out UIScreen screen))
            {
                Debug.LogError($"[UIManager] Screen '{screenName}' not found!");
                return;
            }

            transitionCts = new CancellationTokenSource();

            try
            {
                if (currentScreen != null && currentScreen != screen)
                {
                    if (immediate)
                        currentScreen.HideImmediate();
                    else
                        await currentScreen.Hide(transitionCts.Token);
                }
                
                currentScreen = screen;

                if (immediate)
                    currentScreen.ShowImmediate();
                else
                    await currentScreen.Show(transitionCts.Token);
                
                screenStack.Clear();

                Debug.Log($"[UIManager] Showing screen: {screenName}");
            }
            finally
            {
                transitionCts?.Dispose();
                transitionCts = null;
            }
        }

        public async UniTask PushScreen(string screenName, bool immediate = false)
        {
            if (IsTransitioning)
            {
                Debug.LogWarning($"[UIManager] Cannot push {screenName} - transition in progress");
                return;
            }

            if (!screenDictionary.TryGetValue(screenName, out UIScreen screen))
            {
                Debug.LogError($"[UIManager] Screen '{screenName}' not found!");
                return;
            }

            transitionCts = new CancellationTokenSource();

            try
            {
                if (currentScreen != null)
                {
                    screenStack.Push(currentScreen);
                }
                
                currentScreen = screen;

                if (immediate)
                    currentScreen.ShowImmediate();
                else
                    await currentScreen.Show(transitionCts.Token);

                Debug.Log($"[UIManager] Pushed screen: {screenName}");
            }
            finally
            {
                transitionCts?.Dispose();
                transitionCts = null;
            }
        }
        
        public async UniTask PopScreen(bool immediate = false)
        {
            if (IsTransitioning)
            {
                Debug.LogWarning("[UIManager] Cannot pop - transition in progress");
                return;
            }

            if (screenStack.Count == 0)
            {
                Debug.LogWarning("[UIManager] Screen stack is empty!");
                return;
            }

            transitionCts = new CancellationTokenSource();

            try
            {
                if (currentScreen != null)
                {
                    if (immediate)
                        currentScreen.HideImmediate();
                    else
                        await currentScreen.Hide(transitionCts.Token);
                }

                currentScreen = screenStack.Pop();

                if (!currentScreen.IsVisible)
                {
                    if (immediate)
                        currentScreen.ShowImmediate();
                    else
                        await currentScreen.Show(transitionCts.Token);
                }

                Debug.Log($"[UIManager] Popped to screen: {currentScreen.ScreenName}");
            }
            finally
            {
                transitionCts?.Dispose();
                transitionCts = null;
            }
        }
        
        public void HideAllScreens(bool immediate = true)
        {
            foreach (var screen in allScreens)
            {
                if (screen != null)
                {
                    if (immediate)
                        screen.HideImmediate();
                    else
                        screen.Hide().Forget();
                }
            }

            currentScreen = null;
            screenStack.Clear();
        }
        
        public UIScreen GetScreen(string screenName)
        {
            screenDictionary.TryGetValue(screenName, out UIScreen screen);
            return screen;
        }
        
        public T GetScreen<T>() where T : UIScreen
        {
            foreach (var screen in allScreens)
            {
                if (screen is T typedScreen)
                    return typedScreen;
            }
            return null;
        }

        #endregion
    }
}