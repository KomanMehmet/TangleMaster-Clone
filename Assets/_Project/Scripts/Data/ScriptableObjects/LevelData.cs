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
        [SerializeField] private List<AnchorConfiguration> anchors = new List<AnchorConfiguration>();
        [SerializeField] private List<PinConfiguration> pins = new List<PinConfiguration>();
        [SerializeField] private List<RopeConnection> ropes = new List<RopeConnection>();

        [Header("Win Condition")]
        [SerializeField] private float winCheckDelay = 0.5f;
        [SerializeField] private bool requireNoCollisions = true;
        [SerializeField] private bool allowTangledRopes = false;

        [Header("Optional Settings")]
        [SerializeField] private int moveLimit = 0; // 0 = unlimited
        [SerializeField] private float timeLimit = 0f; // 0 = no limit

        #region Properties

        public int LevelNumber => levelNumber;
        public string LevelName => levelName;
        public Difficulty Difficulty => difficulty;
        public List<AnchorConfiguration> Anchors => anchors;
        public List<PinConfiguration> Pins => pins;
        public List<RopeConnection> Ropes => ropes;
        public float WinCheckDelay => winCheckDelay;
        public bool RequireNoCollisions => requireNoCollisions;
        public bool AllowTangledRopes => allowTangledRopes;
        public int MoveLimit => moveLimit;
        public float TimeLimit => timeLimit;

        #endregion

        #region Validation

        private void OnValidate()
        {
            // Auto-set level name
            if (string.IsNullOrEmpty(levelName) || levelName == "Level")
            {
                levelName = $"Level {levelNumber}";
            }

            // Ensure valid data
            levelNumber = Mathf.Max(1, levelNumber);
            winCheckDelay = Mathf.Max(0.1f, winCheckDelay);
            moveLimit = Mathf.Max(0, moveLimit);
            timeLimit = Mathf.Max(0f, timeLimit);
        }

        #endregion

        #region Editor Helpers

        [ContextMenu("Add Sample Anchor")]
        private void AddSampleAnchor()
        {
            anchors.Add(new AnchorConfiguration
            {
                anchorId = anchors.Count,
                position = new Vector3(0, 5, 0)
            });
        }

        [ContextMenu("Add Sample Pin")]
        private void AddSamplePin()
        {
            pins.Add(new PinConfiguration
            {
                pinId = pins.Count,
                position = Vector3.zero
            });
        }

        [ContextMenu("Add Sample Rope")]
        private void AddSampleRope()
        {
            if (anchors.Count < 1 || pins.Count < 1)
            {
                Debug.LogWarning("Need at least 1 anchor and 1 pin to create a rope!");
                return;
            }

            ropes.Add(new RopeConnection
            {
                anchorIndex = 0,
                pinIndex = 0
            });
        }

        #endregion

        #region Nested Classes

        /// <summary>
        /// Configuration for a fixed anchor at the top
        /// </summary>
        [System.Serializable]
        public class AnchorConfiguration
        {
            [Tooltip("Unique ID for this anchor")]
            public int anchorId;

            [Tooltip("World position of the anchor (top, fixed)")]
            public Vector3 position;

            [Tooltip("Custom color for this anchor (optional)")]
            public Color customColor = Color.clear;
        }

        /// <summary>
        /// Configuration for a fixed pin at the bottom
        /// </summary>
        [System.Serializable]
        public class PinConfiguration
        {
            [Tooltip("Unique ID for this pin")]
            public int pinId;

            [Tooltip("World position of the pin (bottom, fixed)")]
            public Vector3 position;

            [Tooltip("Custom color for this pin (optional)")]
            public Color customColor = Color.clear;
        }
        
        
        [System.Serializable]
        public class RopeConnection
        {
            [Tooltip("Index of anchor in the anchors list (top point)")]
            public int anchorIndex;

            [Tooltip("Index of pin in the pins list (bottom point, initial)")]
            public int pinIndex;
            
            [Tooltip("KAZANMA KOŞULU: İpin bu index'teki pine bağlı olması gerekir")]
            public int targetPinIndex;
            
            [Tooltip("Sorting order for visual layering (higher = in front)")]
            public int sortingOrder = 0;
            
            public int depthLayer = 0;

            [Tooltip("Custom color for this rope (optional)")]
            public Color customColor = Color.clear;
        }

        #endregion
    }
}