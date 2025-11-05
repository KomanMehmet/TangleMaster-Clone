using System.Collections.Generic;
using _Project.Scripts.Core.Enums;
using _Project.Scripts.Gameplay.Enums;
using UnityEngine;

namespace _Project.Scripts.Data.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Level_00", menuName = "TangleMaster/Data/Level Data")]
    public class LevelData : ScriptableObject
    {
        [Header("Level Info")] 
        [SerializeField] private int levelNumber;
        [SerializeField] private string levelName = "Level";
        [SerializeField] private Difficulty difficulty = Difficulty.Easy;
        
        [Header("Level Configuration")]
        [SerializeField] private List<PinConfiguration> pins = new List<PinConfiguration>();
        [SerializeField] private List<RopeConnection> ropes = new List<RopeConnection>();

        [Header("Win Condition")]
        [SerializeField] private float winCheckDelay = 0.5f;
        [SerializeField] private bool requireNoCollisions = true;
        
        [Header("Optional Settings")]
        [SerializeField] private int moveLimit = 0;
        [SerializeField] private float timeLimit = 0f;
        
        #region Properties

        public int LevelNumber => levelNumber;
        public string LevelName => levelName;
        public Difficulty Difficulty => difficulty;
        public List<PinConfiguration> Pins => pins;
        public List<RopeConnection> Ropes => ropes;
        public float WinCheckDelay => winCheckDelay;
        public bool RequireNoCollisions => requireNoCollisions;
        public int MoveLimit => moveLimit;
        public float TimeLimit => timeLimit;

        #endregion
        
        #region Validation

        private void OnValidate()
        {
            if (string.IsNullOrEmpty(levelName) || levelName == "Level")
            {
                levelName = $"Level {levelNumber}";
            }
            
            levelNumber = Mathf.Max(1, levelNumber);
            winCheckDelay = Mathf.Max(0.1f, winCheckDelay);
            moveLimit = Mathf.Max(0, moveLimit);
            timeLimit = Mathf.Max(0f, timeLimit);
        }

        #endregion
        
        #region Editor Helper

        [ContextMenu("Add Sample Pin")]
        private void AddSamplePin()
        {
            pins.Add(new PinConfiguration
            {
                pinId = pins.Count,
                position = Vector3.zero,
                isDraggable = true
            });
        }

        [ContextMenu("Add Sample Rope")]
        private void AddSampleRope()
        {
            if (pins.Count < 2)
            {
                Debug.LogWarning("Need at least 2 pins to create a rope!");
                return;
            }

            ropes.Add(new RopeConnection
            {
                startPinIndex = 0,
                endPinIndex = 1
            });
        }

        #endregion
        
        [System.Serializable]
        public class PinConfiguration
        {
            [Tooltip("Unique ID for this pin")]
            public int pinId;
        
            [Tooltip("World position of the pin")]
            public Vector3 position;
        
            [Tooltip("Can this pin be dragged?")]
            public bool isDraggable = true;
        
            [Tooltip("Custom color for this pin (optional)")]
            public Color customColor = Color.clear; // clear = use default
        }
        
        [System.Serializable]
        public class RopeConnection
        {
            [Tooltip("Index of start pin in the pins list")]
            public int startPinIndex;
        
            [Tooltip("Index of end pin in the pins list")]
            public int endPinIndex;
        
            [Tooltip("Custom color for this rope (optional)")]
            public Color customColor = Color.clear; // clear = use default
        }
    }
}