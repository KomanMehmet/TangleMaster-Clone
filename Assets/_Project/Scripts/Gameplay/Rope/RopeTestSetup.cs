using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    public class RopeTestSetup : MonoBehaviour
    {
        [Header("Test Configuration")]
        [SerializeField] private bool createRopesOnStart = true;
        [SerializeField] private Pin.Pin[] testPins;
        
        private void Start()
        {
            if (!createRopesOnStart) return;

            CreateTestRopes();
        }

        [ContextMenu("Create Test Ropes")]
        private void CreateTestRopes()
        {
            if (RopeManager.Instance == null)
            {
                Debug.LogError("[RopeTestSetup] RopeManager not found!");
                return;
            }

            if (testPins == null || testPins.Length < 2)
            {
                Debug.LogError("[RopeTestSetup] Need at least 2 pins!");
                return;
            }

            // Çapraz rope'lar oluştur (tangle için)
            // Pin 1 -> Pin 3
            RopeManager.Instance.CreateRope(testPins[0], testPins[2]);
            
            // Pin 2 -> Pin 4
            RopeManager.Instance.CreateRope(testPins[1], testPins[3]);

            Debug.Log("[RopeTestSetup] Created test ropes!");
        }

        [ContextMenu("Clear All Ropes")]
        private void ClearRopes()
        {
            if (RopeManager.Instance != null)
            {
                RopeManager.Instance.ClearAllRopes();
                Debug.Log("[RopeTestSetup] Cleared all ropes!");
            }
        }
    }
}