using System.Collections.Generic;
using _Project.Scripts.Core.Interfaces;
using _Project.Scripts.Data.ScriptableObjects;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    public class RopeManager : MonoBehaviour, IManager
    {
        public static RopeManager Instance { get; private set; }
        
        [Header("Configuration")]
        [SerializeField] private RopeData defaultRopeData;
        [SerializeField] private Transform ropeParent;
        
        [Header("Prefabs")]
        [SerializeField] private GameObject ropePrefab;
        
        [Header("Settings")]
        [SerializeField] private bool autoCheckCollisions = true;
        [SerializeField] private float collisionCheckInterval = 0.1f;
        
        private List<IRope> activeRopes = new List<IRope>();
        private float lastCollisionCheckTime;
        
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
                if (rope != null && rope is MonoBehaviour mb)
                {
                    Destroy(mb.gameObject);
                }
            }

            activeRopes.Clear();
            Debug.Log("[RopeManager] Cleaned up.");
        }

        #endregion

        #region Rope Creation
        
        public IRope CreateRope(IPin startPin, IPin endPin)
        {
            if (startPin == null || endPin == null)
            {
                Debug.LogError("[RopeManager] Cannot create rope: pins are null!");
                return null;
            }

            GameObject ropeObj = Instantiate(ropePrefab, ropeParent);
            ropeObj.name = $"Rope_{startPin.PinId}_to_{endPin.PinId}";

            Rope rope = ropeObj.GetComponent<Rope>();
            if (rope == null)
            {
                rope = ropeObj.AddComponent<Rope>();
            }
            
            if (defaultRopeData != null)
            {
                var field = typeof(Rope).GetField("ropeData", 
                    System.Reflection.BindingFlags.NonPublic | 
                    System.Reflection.BindingFlags.Instance);
                field?.SetValue(rope, defaultRopeData);
            }

            rope.Initialize(startPin, endPin);
            activeRopes.Add(rope);

            return rope;
        }
        
        public void RemoveRope(IRope rope)
        {
            if (rope == null) return;

            activeRopes.Remove(rope);

            if (rope is MonoBehaviour mb)
            {
                Destroy(mb.gameObject);
            }
        }
        
        public void ClearAllRopes()
        {
            foreach (var rope in activeRopes)
            {
                if (rope is MonoBehaviour mb)
                {
                    Destroy(mb.gameObject);
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

            foreach (var rope in activeRopes)
            {
                rope.SetHighlight(false);
            }
            
            for (int i = 0; i < activeRopes.Count; i++)
            {
                for (int j = i + 1; j < activeRopes.Count; j++)
                {
                    if (activeRopes[i].CheckCollision(activeRopes[j]))
                    {
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

        public List<IRope> GetAllRopes()
        {
            return new List<IRope>(activeRopes);
        }

        #endregion
    }
}