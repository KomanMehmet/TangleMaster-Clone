using System.Collections.Generic;
using _Project.Scripts.Core.Interfaces;
using _Project.Scripts.Data.ScriptableObjects;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    public class RopeManager : MonoBehaviour, IManager
    {
        public static RopeManager Instance { get; private set; }

        [Header("Configuration")] [SerializeField]
        private RopeData defaultRopeData; // Kullanılacak varsayılan rope ayarları

        [SerializeField] private Transform ropeParent;

        [Header("Prefabs")] [SerializeField] private GameObject ropePrefab;
        [SerializeField] private GameObject endpointPrefab;

        // ❌ Eski 2D çarpışma sistemi kaldırıldı
        // [Header("Settings")] [SerializeField] private bool autoCheckCollisions = true;
        // [SerializeField] private float collisionCheckInterval = 0.1f;
        // private float lastCollisionCheckTime;

        private List<Rope> activeRopes = new List<Rope>();

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

        private void FixedUpdate()
        {
            // ❌ CheckRopePhysicsCollisions() kaldırıldı.
            // Bu iş artık SADECE RopeCollisionManager'da yapılıyor.
            // Burası manager'ların manager'ı olmasın.
        }

        private void Update()
        {
            // ❌ autoCheckCollisions sistemi kaldırıldı.
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
            if (ropeParent == null)
            {
                GameObject parent = new GameObject("Ropes");
                ropeParent = parent.transform;
                ropeParent.SetParent(transform);
            }

            Debug.Log("[RopeManager] Initialized.");
        }

        public void Cleanup()
        {
            ClearAllRopes(); // Sadece ClearAllRopes'u çağırmak yeterli
            Debug.Log("[RopeManager] Cleaned up.");
        }

        #endregion

        #region Rope Creation

        public Rope CreateRope(Anchor anchor, Pin.Pin pin, int sortingOrder = 0)
        {
            if (anchor == null || pin == null)
            {
                Debug.LogError("[RopeManager] Cannot create rope: anchor or pin is null!");
                return null;
            }
            if (ropePrefab == null)
            {
                Debug.LogError("[RopeManager] Rope prefab is not assigned!");
                return null;
            }
            if (endpointPrefab == null)
            {
                Debug.LogError("[RopeManager] Endpoint prefab is not assigned!");
                return null;
            }
            if (defaultRopeData == null)
            {
                Debug.LogError("[RopeManager] Default Rope Data is not assigned!");
                return null;
            }


            GameObject ropeObj = Instantiate(ropePrefab, ropeParent);
            ropeObj.name = $"Rope_A{anchor.AnchorId}_to_P{pin.PinId}";

            Rope rope = ropeObj.GetComponent<Rope>();
            // Rope component'ı prefab'da olmalı, yoksa AddComponent yapsak bile
            // [RequireComponent] yüzünden MeshFilter/Renderer eklenmez.
            
            // 🔽 TEMİZLENDİ: Reflection yerine Initialize'a data yolla
            rope.Initialize(defaultRopeData, anchor, pin, endpointPrefab, sortingOrder);
            
            activeRopes.Add(rope);

            return rope;
        }

        public void PreSimulateAllRopes(int steps = 150)
        {
            Debug.Log($"[RopeManager] Pre-simulating {activeRopes.Count} ropes for {steps} steps...");

            float deltaTime = 0.02f;

            for (int step = 0; step < steps; step++)
            {
                // 1. Her ipin kendi fiziğini simüle et
                foreach (var rope in activeRopes)
                {
                    var physics = rope.GetComponent<RopePhysics>();
                    if (physics != null)
                    {
                        physics.PreSimulateStep(deltaTime);
                    }
                }

                // 2. ÖNEMLİ: İplerin BİRBİRLERİYLE çarpışmasını simüle et
                for (int i = 0; i < activeRopes.Count; i++)
                {
                    var ropeA = activeRopes[i];
                    var physicsA = ropeA.GetComponent<RopePhysics>();

                    if (physicsA == null) continue;

                    for (int j = i + 1; j < activeRopes.Count; j++)
                    {
                        var ropeB = activeRopes[j];
                        var physicsB = ropeB.GetComponent<RopePhysics>();

                        if (physicsB != null)
                        {
                            physicsA.CheckCollisionWith(physicsB); // ← GERİ EKLENDİ!
                        }
                    }
                }
            }

            // Pre-simulation bitti, mesh'leri güncelle ve aktifleştir
            foreach (var rope in activeRopes)
            {
                var physics = rope.GetComponent<RopePhysics>();
                if (physics != null)
                {
                    physics.ForceUpdateMesh();
                    physics.ActivatePhysics();
                }
            }

            Debug.Log("[RopeManager] Pre-simulation complete! Ropes separated.");
        }

        public void RemoveRope(Rope rope)
        {
            if (rope == null) return;

            activeRopes.Remove(rope);
            Destroy(rope.gameObject);
        }

        public void ClearAllRopes()
        {
            // Listeyi kopyalayıp (ToList()) dolaşmak daha güvenli
            foreach (var rope in new List<Rope>(activeRopes))
            {
                if (rope != null)
                {
                    RemoveRope(rope); // RemoveRope'u çağırmak daha temiz
                }
            }
            activeRopes.Clear();
        }

        #endregion

        #region Collision Detection

        // ❌ CheckAllCollisions() ve AnyRopesColliding() kaldırıldı.
        // Bu artık bir oyun kazanma koşulu, o yüzden LevelManager'ın
        // "tüm iplerin pinleri doğru yerde mi?" diye sorması lazım.
        // Fiziksel çarpışma olup olmadığını sormak artık anlamsız,
        // çünkü fizik motoru zaten çarpışmalarını engelliyor.

        public List<Rope> GetAllRopes()
        {
            return new List<Rope>(activeRopes);
        }

        #endregion
    }
}