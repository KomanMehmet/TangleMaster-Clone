using System;
using System.Collections.Generic;
using System.Threading;
using _Project.Scripts.Core.EventChannels;
using _Project.Scripts.Core.Interfaces;
using _Project.Scripts.Data.ScriptableObjects;
using _Project.Scripts.Gameplay.Pin;
using _Project.Scripts.Gameplay.Rope;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace _Project.Scripts.Core.Managers
{
    /// <summary>
    /// Manages level loading, win condition checking, and level progression
    /// Spawns anchors, pins, and ropes based on LevelData
    /// </summary>
    public class LevelManager : MonoBehaviour, IManager
    {
        public static LevelManager Instance { get; private set; }

        [Header("Current Level")]
        [SerializeField] private LevelData currentLevelData;
        [SerializeField] private int currentLevelIndex = 0;

        [Header("Level Collection")]
        [SerializeField] private List<LevelData> allLevels = new List<LevelData>();

        [Header("Prefabs")]
        [SerializeField] private GameObject anchorPrefab;
        [SerializeField] private GameObject pinPrefab;

        [Header("Spawning")]
        [SerializeField] private Transform anchorsParent;
        [SerializeField] private Transform pinsParent;
        [SerializeField] private Transform levelRoot;

        [Header("Event Channels")]
        [SerializeField] private VoidEventChannel onLevelStarted;
        [SerializeField] private VoidEventChannel onLevelCompleted;
        [SerializeField] private VoidEventChannel onLevelFailed;
        [SerializeField] private IntEventChannel onLevelNumberChanged;

        private List<Anchor> spawnedAnchors = new List<Anchor>();
        private List<Pin> spawnedPins = new List<Pin>();
        private List<Rope> spawnedRopes = new List<Rope>();
        private CancellationTokenSource winCheckCts;
        private int moveCount = 0;
        private float levelStartTime;

        #region Properties

        public LevelData CurrentLevel => currentLevelData;
        public int CurrentLevelIndex => currentLevelIndex;
        public int MoveCount => moveCount;
        public float ElapsedTime => Time.time - levelStartTime;
        public bool IsLevelActive { get; private set; }

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

        private void Start()
        {
            if (currentLevelData != null)
            {
                LoadCurrentLevel();
            }
            else if (allLevels.Count > 0)
            {
                LoadLevel(0);
            }
            else
            {
                Debug.LogWarning("[LevelManager] No levels assigned!");
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

        #endregion

        #region IManager Implementation

        public void Initialize()
        {
            if (anchorsParent == null)
            {
                GameObject parent = new GameObject("Anchors");
                anchorsParent = parent.transform;
                anchorsParent.SetParent(transform);
            }

            if (pinsParent == null)
            {
                GameObject parent = new GameObject("Pins");
                pinsParent = parent.transform;
                pinsParent.SetParent(transform);
            }

            if (levelRoot == null)
            {
                levelRoot = transform;
            }

            Debug.Log("[LevelManager] Initialized.");
        }

        public void Cleanup()
        {
            if (winCheckCts != null && !winCheckCts.IsCancellationRequested)
            {
                winCheckCts.Cancel();
            }
            winCheckCts?.Dispose();
            winCheckCts = null;

            ClearLevel();

            onLevelStarted?.ClearAllListeners();
            onLevelCompleted?.ClearAllListeners();
            onLevelFailed?.ClearAllListeners();
            onLevelNumberChanged?.ClearAllListeners();

            Debug.Log("[LevelManager] Cleaned up.");
        }

        #endregion

        #region Level Loading

        public void LoadLevel(int levelIndex)
        {
            if (levelIndex < 0 || levelIndex >= allLevels.Count)
            {
                Debug.LogError($"[LevelManager] Level index {levelIndex} is out of range!");
                return;
            }

            currentLevelIndex = levelIndex;
            currentLevelData = allLevels[levelIndex];
            LoadCurrentLevel();
        }

        public void LoadCurrentLevel()
        {
            if (currentLevelData == null)
            {
                Debug.LogError("[LevelManager] No level data assigned!");
                return;
            }

            ClearLevel();
            SpawnLevel();
            StartLevel();
        }

        public void ReloadLevel()
        {
            LoadCurrentLevel();
        }

        public void LoadNextLevel()
        {
            int nextIndex = currentLevelIndex + 1;

            if (nextIndex >= allLevels.Count)
            {
                Debug.Log("[LevelManager] All levels completed!");
                return;
            }

            LoadLevel(nextIndex);
        }

        #endregion

        #region Level Spawning

        private void SpawnLevel()
        {
            if (currentLevelData == null) return;

            // Spawn anchors
            foreach (var anchorConfig in currentLevelData.Anchors)
            {
                SpawnAnchor(anchorConfig);
            }

            // Spawn pins
            foreach (var pinConfig in currentLevelData.Pins)
            {
                SpawnPin(pinConfig);
            }

            // Spawn ropes
            foreach (var ropeConfig in currentLevelData.Ropes)
            {
                SpawnRope(ropeConfig);
            }

            Debug.Log($"[LevelManager] Spawned {spawnedAnchors.Count} anchors, {spawnedPins.Count} pins, and {spawnedRopes.Count} ropes.");
        }

        private void SpawnAnchor(LevelData.AnchorConfiguration config)
        {
            if (anchorPrefab == null)
            {
                Debug.LogError("[LevelManager] Anchor prefab is not assigned!");
                return;
            }

            GameObject anchorObj = Instantiate(anchorPrefab, config.position, Quaternion.identity, anchorsParent);
            anchorObj.name = $"Anchor_{config.anchorId}";

            Anchor anchor = anchorObj.GetComponent<Anchor>();
            if (anchor == null)
            {
                Debug.LogError($"[LevelManager] Anchor prefab doesn't have Anchor component!");
                Destroy(anchorObj);
                return;
            }

            // Set anchor ID via reflection
            var anchorIdField = typeof(Anchor).GetField("anchorId",
                System.Reflection.BindingFlags.NonPublic |
                System.Reflection.BindingFlags.Instance);
            anchorIdField?.SetValue(anchor, config.anchorId);

            spawnedAnchors.Add(anchor);
        }

        private void SpawnPin(LevelData.PinConfiguration config)
        {
            if (pinPrefab == null)
            {
                Debug.LogError("[LevelManager] Pin prefab is not assigned!");
                return;
            }

            GameObject pinObj = Instantiate(pinPrefab, config.position, Quaternion.identity, pinsParent);
            pinObj.name = $"Pin_{config.pinId}";

            Pin pin = pinObj.GetComponent<Pin>();
            if (pin == null)
            {
                Debug.LogError($"[LevelManager] Pin prefab doesn't have Pin component!");
                Destroy(pinObj);
                return;
            }

            // Set pin ID via reflection
            var pinIdField = typeof(Pin).GetField("pinId",
                System.Reflection.BindingFlags.NonPublic |
                System.Reflection.BindingFlags.Instance);
            pinIdField?.SetValue(pin, config.pinId);

            spawnedPins.Add(pin);
        }

        private void SpawnRope(LevelData.RopeConnection config)
        {
            if (RopeManager.Instance == null)
            {
                Debug.LogError("[LevelManager] RopeManager not found!");
                return;
            }

            if (config.anchorIndex < 0 || config.anchorIndex >= spawnedAnchors.Count)
            {
                Debug.LogError($"[LevelManager] Invalid anchor index: {config.anchorIndex}");
                return;
            }

            if (config.pinIndex < 0 || config.pinIndex >= spawnedPins.Count)
            {
                Debug.LogError($"[LevelManager] Invalid pin index: {config.pinIndex}");
                return;
            }

            Anchor anchor = spawnedAnchors[config.anchorIndex];
            Pin pin = spawnedPins[config.pinIndex];

            Rope rope = RopeManager.Instance.CreateRope(anchor, pin, config.sortingOrder);

            if (rope != null)
            {
                spawnedRopes.Add(rope);
                
                if (config.customColor != Color.clear)
                {
                    Debug.Log($"[LevelManager] Applying custom color to rope: {config.customColor}");
            
                    // Animasyon yerine direkt set et
                    rope.SetColorImmediate(config.customColor); // ← YENİ METOD
                }
            }
        }

        private void ClearLevel()
        {
            if (winCheckCts != null)
            {
                if (!winCheckCts.IsCancellationRequested)
                {
                    winCheckCts.Cancel();
                }
                winCheckCts.Dispose();
                winCheckCts = null;
            }

            // Clear ropes
            if (RopeManager.Instance != null)
            {
                RopeManager.Instance.ClearAllRopes();
            }
            spawnedRopes.Clear();

            // Clear anchors
            foreach (var anchor in spawnedAnchors)
            {
                if (anchor != null)
                {
                    Destroy(anchor.gameObject);
                }
            }
            spawnedAnchors.Clear();

            // Clear pins
            foreach (var pin in spawnedPins)
            {
                if (pin != null)
                {
                    Destroy(pin.gameObject);
                }
            }
            spawnedPins.Clear();

            IsLevelActive = false;
            moveCount = 0;
        }

        #endregion

        #region Level Flow

        private void StartLevel()
        {
            IsLevelActive = true;
            moveCount = 0;
            levelStartTime = Time.time;

            onLevelStarted?.RaiseEvent();
            onLevelNumberChanged?.RaiseEvent(currentLevelData.LevelNumber);

            winCheckCts = new CancellationTokenSource();
            StartWinConditionCheck(winCheckCts.Token).Forget();

            Debug.Log($"[LevelManager] Started {currentLevelData.LevelName}");
        }

        public void IncrementMoveCount()
        {
            if (!IsLevelActive) return;

            moveCount++;

            if (currentLevelData.MoveLimit > 0 && moveCount >= currentLevelData.MoveLimit)
            {
                LevelFailed();
            }
        }

        private void LevelCompleted()
        {
            if (!IsLevelActive) return;

            IsLevelActive = false;
            winCheckCts?.Cancel();

            onLevelCompleted?.RaiseEvent();

            Debug.Log($"[LevelManager] Level {currentLevelData.LevelNumber} completed! Moves: {moveCount}, Time: {ElapsedTime:F2}s");

            PlaySuccessAnimations().Forget();
        }

        private void LevelFailed()
        {
            if (!IsLevelActive) return;

            IsLevelActive = false;
            winCheckCts?.Cancel();

            onLevelFailed?.RaiseEvent();

            Debug.Log($"[LevelManager] Level {currentLevelData.LevelNumber} failed!");
        }

        #endregion

        #region Win Condition

        private async UniTaskVoid StartWinConditionCheck(CancellationToken cancellationToken)
        {
            await UniTask.Delay(TimeSpan.FromSeconds(1f), cancellationToken: cancellationToken);

            while (!cancellationToken.IsCancellationRequested)
            {
                if (CheckWinCondition())
                {
                    await UniTask.Delay(
                        TimeSpan.FromSeconds(currentLevelData.WinCheckDelay),
                        cancellationToken: cancellationToken
                    );

                    if (CheckWinCondition())
                    {
                        LevelCompleted();
                        return;
                    }
                }

                await UniTask.Yield(cancellationToken);
            }
        }

        private bool CheckWinCondition()
        {
            if (!IsLevelActive) return false;
            if (RopeManager.Instance == null) return false;

            if (currentLevelData.RequireNoCollisions)
            {
                bool anyColliding = RopeManager.Instance.AnyRopesColliding();
                return !anyColliding;
            }

            return true;
        }

        #endregion

        #region Animations

        private async UniTaskVoid PlaySuccessAnimations()
        {
            foreach (var rope in spawnedRopes)
            {
                rope.PlaySuccessAnimation();
            }

            await UniTask.Delay(TimeSpan.FromSeconds(0.3f));

            foreach (var pin in spawnedPins)
            {
                pin.PlayPulseAnimation();
                await UniTask.Delay(TimeSpan.FromSeconds(0.1f));
            }
        }

        #endregion

        #region Public Helpers

        public Anchor GetAnchorById(int anchorId)
        {
            return spawnedAnchors.Find(a => a.AnchorId == anchorId);
        }

        public Pin GetPinById(int pinId)
        {
            return spawnedPins.Find(p => p.PinId == pinId);
        }

        public List<Anchor> GetAllAnchors()
        {
            return new List<Anchor>(spawnedAnchors);
        }

        public List<Pin> GetAllPins()
        {
            return new List<Pin>(spawnedPins);
        }

        #endregion
    }
}