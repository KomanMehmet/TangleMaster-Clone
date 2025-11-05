using System.Collections.Generic;
using _Project.Scripts.Core.Interfaces;
using _Project.Scripts.Data.ScriptableObjects;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    /// <summary>
    /// Manages all ropes in the scene
    /// Handles rope creation, collision detection, and cleanup
    /// </summary>
    public class RopeManager : MonoBehaviour, IManager
    {
        public static RopeManager Instance { get; private set; }

        [Header("Configuration")]
        [SerializeField] private RopeData defaultRopeData;
        [SerializeField] private Transform ropeParent;

        [Header("Prefabs")]
        [SerializeField] private GameObject ropePrefab;
        [SerializeField] private GameObject endpointPrefab;

        [Header("Settings")]
        [SerializeField] private bool autoCheckCollisions = true;
        [SerializeField] private float collisionCheckInterval = 0.1f;

        private List<Rope> activeRopes = new List<Rope>();
        private float lastCollisionCheckTime;

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

        private void Update()
        {
            if (autoCheckCollisions)
            {
                CheckAllCollisions();
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
            foreach (var rope in activeRopes)
            {
                if (rope != null)
                {
                    Destroy(rope.gameObject);
                }
            }

            activeRopes.Clear();
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

            GameObject ropeObj = Instantiate(ropePrefab, ropeParent);
            ropeObj.name = $"Rope_A{anchor.AnchorId}_to_P{pin.PinId}";

            Rope rope = ropeObj.GetComponent<Rope>();
            if (rope == null)
            {
                rope = ropeObj.AddComponent<Rope>();
            }

            // Assign rope data
            if (defaultRopeData != null)
            {
                var field = typeof(Rope).GetField("ropeData",
                    System.Reflection.BindingFlags.NonPublic |
                    System.Reflection.BindingFlags.Instance);
                field?.SetValue(rope, defaultRopeData);
            }

            rope.Initialize(anchor, pin, endpointPrefab, sortingOrder);
            activeRopes.Add(rope);

            return rope;
        }
        
        public void RemoveRope(Rope rope)
        {
            if (rope == null) return;

            activeRopes.Remove(rope);
            Destroy(rope.gameObject);
        }
        
        public void ClearAllRopes()
        {
            foreach (var rope in activeRopes)
            {
                if (rope != null)
                {
                    Destroy(rope.gameObject);
                }
            }

            activeRopes.Clear();
        }

        #endregion

        #region Collision Detection

        private void CheckAllCollisions()
        {
            if (Time.time - lastCollisionCheckTime < collisionCheckInterval)
                return;

            lastCollisionCheckTime = Time.time;

            // Reset all collision states
            foreach (var rope in activeRopes)
            {
                rope.SetHighlight(false);
            }

            for (int i = 0; i < activeRopes.Count; i++)
            {
                for (int j = i + 1; j < activeRopes.Count; j++)
                {
                    bool collision = activeRopes[i].CheckCollision(activeRopes[j]);
            
                    if (collision)
                    {
                        Debug.Log($"[RopeManager] COLLISION! Rope {i} <-> Rope {j}"); // ← 
                        activeRopes[i].SetHighlight(true);
                        activeRopes[j].SetHighlight(true);
                    }
                }
            }
        }
        
        public bool AnyRopesColliding()
        {
            foreach (var rope in activeRopes)
            {
                if (rope.IsColliding)
                    return true;
            }

            return false;
        }


        public List<Rope> GetAllRopes()
        {
            return new List<Rope>(activeRopes);
        }

        #endregion
    }
}