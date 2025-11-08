using System.Collections.Generic;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    public class RopeCollisionManager : MonoBehaviour
    {
        public static RopeCollisionManager Instance { get; private set; }

        [Header("Settings")]
        [Tooltip("Enable rope-to-rope collision")]
        [SerializeField] private bool enableCollisions = true; // ← AÇIK!

        private List<RopePhysics> activeRopes = new List<RopePhysics>();

        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }
            
            Instance = this;
        }

        public void RegisterRope(RopePhysics rope)
        {
            if (rope != null && !activeRopes.Contains(rope))
            {
                activeRopes.Add(rope);
                Debug.Log($"[RopeCollisionManager] Registered rope. Total: {activeRopes.Count}");
            }
        }

        public void UnregisterRope(RopePhysics rope)
        {
            if (rope != null && activeRopes.Contains(rope))
            {
                activeRopes.Remove(rope);
            }
        }

        private void FixedUpdate()
        {
            if (!enableCollisions || activeRopes.Count < 2) return;

            CheckAllCollisions();
        }

        private void CheckAllCollisions()
        {
            for (int i = 0; i < activeRopes.Count; i++)
            {
                RopePhysics ropeA = activeRopes[i];
                if (ropeA == null || !ropeA.enabled) continue;

                for (int j = i + 1; j < activeRopes.Count; j++)
                {
                    RopePhysics ropeB = activeRopes[j];
                    if (ropeB == null || !ropeB.enabled) continue;

                    ropeA.CheckCollisionWith(ropeB);
                }
            }
        }

        /// <summary>
        /// Check if ANY ropes are colliding
        /// </summary>
        public bool AnyRopesColliding()
        {
            for (int i = 0; i < activeRopes.Count; i++)
            {
                RopePhysics ropeA = activeRopes[i];
                if (ropeA == null || !ropeA.enabled) continue;

                for (int j = i + 1; j < activeRopes.Count; j++)
                {
                    RopePhysics ropeB = activeRopes[j];
                    if (ropeB == null || !ropeB.enabled) continue;

                    if (ropeA.IsCollidingWith(ropeB))
                    {
                        return true; // Found collision!
                    }
                }
            }

            return false; // No collisions
        }

        [ContextMenu("Check Collisions Now")]
        private void DebugCheckCollisions()
        {
            bool colliding = AnyRopesColliding();
            Debug.Log($"[RopeCollisionManager] Any collisions: {colliding}");
        }
    }
}