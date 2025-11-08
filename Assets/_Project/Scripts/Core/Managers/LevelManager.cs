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
        
        private bool hasPlayerMoved;


        private List<Anchor> spawnedAnchors = new List<Anchor>();
        private List<Pin> spawnedPins = new List<Pin>();
        private List<Rope> spawnedRopes = new List<Rope>();
        private CancellationTokenSource winCheckCts;
        

        private int movesRemaining = -1; 
        private float levelStartTime;

        #region Properties

        public LevelData CurrentLevel => currentLevelData;
        public int CurrentLevelIndex => currentLevelIndex;
        
        public int MovesRemaining => movesRemaining; 
        
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
            // ... (içeriği aynı, dokunmadım)
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
            // ... (içeriği aynı, dokunmadım)
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

        // ... (Bu bölge aynı, dokunmadım)
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

        public void LoadMainMenu()
        {
            //TO DO
            //Load Main Menu
        }

        #endregion

        #region Level Spawning

        private void SpawnLevel()
        {
            if (currentLevelData == null) return;
            
            // ❌ ropeWinConditions.Clear() sildik, artık yok.

            // ... (Anchor ve Pin spawn kodları aynı) ...
            foreach (var anchorConfig in currentLevelData.Anchors) SpawnAnchor(anchorConfig);
            foreach (var pinConfig in currentLevelData.Pins) SpawnPin(pinConfig);

            // Spawn ropes
            foreach (var ropeConfig in currentLevelData.Ropes)
            {
                SpawnRope(ropeConfig);
            }
            
            // Oyunu "dolaşık" (çarpışarak) başlat
            if (RopeManager.Instance != null)
            {
                foreach (var rope in spawnedRopes)
                {
                    var physics = rope.GetComponent<RopePhysics>();
                    if (physics != null)
                    {
                        physics.ActivatePhysics(); // PreSimulate YOK, sadece Activate.
                    }
                }
            }

            Debug.Log($"[LevelManager] Spawned {spawnedAnchors.Count} anchors, {spawnedPins.Count} pins, and {spawnedRopes.Count} ropes.");
        }
        
        // ... (SpawnAnchor ve SpawnPin aynı) ...
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
            // ... (RopeManager, anchor, pin bulma kodları aynı) ...
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
                
                // ❌ "targetPinIndex" ve "ropeWinConditions" ile ilgili her şey kaldırıldı.
                
                // Custom color varsa uygula
                if (config.customColor != Color.clear)
                {
                    rope.SetColorImmediate(config.customColor);
                }
            }
        }

        private void ClearLevel()
        {
            // ... (cts cancel kodu aynı) ...
            if (winCheckCts != null)
            {
                if (!winCheckCts.IsCancellationRequested)
                {
                    winCheckCts.Cancel();
                }
                winCheckCts.Dispose();
                winCheckCts = null;
            }
            
            // ... (diğer clear kodları aynı) ...
            if (RopeManager.Instance != null) RopeManager.Instance.ClearAllRopes();
            spawnedRopes.Clear();
            foreach (var anchor in spawnedAnchors) if (anchor != null) Destroy(anchor.gameObject);
            spawnedAnchors.Clear();
            foreach (var pin in spawnedPins) if (pin != null) Destroy(pin.gameObject);
            spawnedPins.Clear();

            IsLevelActive = false;
            
            // 🔽 "movesRemaining"i sıfırla 🔽
            movesRemaining = -1;
        }

        #endregion

        #region Level Flow

        private void StartLevel()
        {
            IsLevelActive = true;
            
            // 🔽 "movesRemaining"i LevelData'dan ayarla 🔽
            if (currentLevelData.MoveLimit > 0)
            {
                movesRemaining = currentLevelData.MoveLimit;
            }
            else
            {
                movesRemaining = -1; // -1 = sonsuz hamle
            }
            
            levelStartTime = Time.time;
            hasPlayerMoved = false;

            onLevelStarted?.RaiseEvent();
            onLevelNumberChanged?.RaiseEvent(currentLevelData.LevelNumber);

            winCheckCts = new CancellationTokenSource();
            StartWinConditionCheck(winCheckCts.Token).Forget();

            Debug.Log($"[LevelManager] Started {currentLevelData.LevelName}. Moves allowed: {(movesRemaining == -1 ? "Unlimited" : movesRemaining.ToString())}");
        }

        // 🔽 METOD GÜNCELLENDİ: Artık artırmıyor, azaltıyor 🔽
        public void IncrementMoveCount() // Adını aynı tuttuk ki Rope.cs'i değiştirmeyelim
        {
            if (!IsLevelActive) return;

            hasPlayerMoved = true;
            
            // Sonsuz hamle değilse
            if (movesRemaining != -1)
            {
                movesRemaining--;
                Debug.Log($"[LevelManager] Move recorded. Moves remaining: {movesRemaining}");
                
                // Not: Hamle bitince fail etmeyi 'CheckWinCondition' yapacak.
            }
            else
            {
                Debug.Log($"[LevelManager] Move recorded. (Unlimited moves)");
            }
        }

        private void LevelCompleted()
        {
            if (!IsLevelActive) return;

            IsLevelActive = false;
            winCheckCts?.Cancel();

            onLevelCompleted?.RaiseEvent();

            Debug.Log($"[LevelManager] ✅ Level {currentLevelData.LevelNumber} COMPLETED! Moves left: {movesRemaining}, Time: {ElapsedTime:F2}s");

            PlaySuccessAnimations().Forget();
        }

        private void LevelFailed()
        {
            if (!IsLevelActive) return;

            IsLevelActive = false;
            winCheckCts?.Cancel();

            onLevelFailed?.RaiseEvent();

            Debug.Log($"[LevelManager] ❌ Level {currentLevelData.LevelNumber} FAILED! Out of moves.");
        }

        #endregion

        #region Win Condition

        private async UniTaskVoid StartWinConditionCheck(CancellationToken cancellationToken)
        {
            // İlk 1 saniye bekle (level başlangıcı)
            await UniTask.Delay(TimeSpan.FromSeconds(1f), cancellationToken: cancellationToken);

            while (!cancellationToken.IsCancellationRequested)
            {
                // IsLevelActive false ise (LevelCompleted/Failed çağrıldıysa) döngü dursun
                if (!IsLevelActive)
                {
                    return;
                }
                
                if (CheckWinCondition())
                {
                    // Win condition sağlandı, biraz bekle (stability check)
                    await UniTask.Delay(
                        TimeSpan.FromSeconds(currentLevelData.WinCheckDelay),
                        cancellationToken: cancellationToken
                    );

                    // Tekrar kontrol et, hala kazanıyor mu?
                    if (IsLevelActive && CheckWinCondition()) // IsLevelActive'i tekrar kontrol et
                    {
                        LevelCompleted();
                        return;
                    }
                }

                await UniTask.Yield(cancellationToken);
            }
        }

        // 🔽 KAZANMA VE KAYBETME KONTROLÜ BURADA BİRLEŞTİ 🔽
        private bool CheckWinCondition()
        {
            // Bu metod artık 'true' = KAZANDIN, 'false' = DEVAM ET (veya KAYBET)
            
            if (!IsLevelActive) return false;
            if (RopeManager.Instance == null) return false;
            
            // Oyuncu ilk hamleyi yapana kadar kazanma (PreSimulate koruması)
            if (!hasPlayerMoved)
            {
                return false;
            }
            
            // 1. KAZANMA KOŞULU: Çarpışma var mı?
            bool anyCollisions = RopeCollisionManager.Instance.AnyRopesColliding();

            if (currentLevelData.RequireNoCollisions && anyCollisions)
            {
                // Çarpışma var, KAZANAMADIN.
                
                // 2. KAYBETME KOŞULU: Kazanamadın, peki hamlen bitti mi?
                if (movesRemaining == 0)
                {
                    // Hamle bitti VE çarpışma var.
                    LevelFailed(); // Kaybettin
                }
                
                return false; // Devam et (veya kaybettin)
            }

            // Çarpışma yoksa, KAZANDIN!
            return true;
        }

        // ❌ AreAllRopesInCorrectPositions() metodu tamamen kaldırıldı.

        #endregion

        #region Animations
        // ... (Bu bölge aynı, dokunmadım)
        private async UniTaskVoid PlaySuccessAnimations()
        {
            foreach (var pin in spawnedPins)
            {
                if (pin != null)
                {
                    pin.PlayPulseAnimation();
                    await UniTask.Delay(TimeSpan.FromSeconds(0.1f));
                }
            }
        }
        #endregion

        #region Public Helpers
        // ... (Bu bölge aynı, dokunmadım)
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
        
        public List<Rope> GetAllRopes()
        {
            return new List<Rope>(spawnedRopes);
        }
        #endregion

        #region Debug Helpers
        // ... (DebugCheckRopePositions kaldırıldı) ...
        [ContextMenu("Check Win Condition Now")]
        private void DebugCheckWinCondition()
        {
            bool result = CheckWinCondition();
            Debug.Log($"[LevelManager] Win condition check result: {result}");
        }
        
        [ContextMenu("Check Collisions")]
        private void DebugCheckCollisions()
        {
            if (RopeCollisionManager.Instance != null)
            {
                bool colliding = RopeCollisionManager.Instance.AnyRopesColliding();
                Debug.Log($"[LevelManager] Any collisions: {colliding}");
            }
        }
        #endregion
    }
}