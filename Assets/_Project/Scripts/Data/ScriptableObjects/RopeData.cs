using UnityEngine;

namespace _Project.Scripts.Data.ScriptableObjects
{
    [CreateAssetMenu(fileName = "New Rope Data", menuName = "TangleMaster/Data/Rope Data")]
    public class RopeData : ScriptableObject
    {
        [Header("Visual Settings")]
        [Tooltip("Width of the rope (diameter)")]
        [SerializeField] private float ropeWidth = 0.15f;

        [Tooltip("Color of the rope")]
        [SerializeField] private Color ropeColor = Color.white;

        [Tooltip("Material for the rope (3D mesh)")]
        [SerializeField] private Material ropeMaterial;

        [Header("Rope Length")]
        [Tooltip("Automatically calculate rope length based on start/end distance?")]
        [SerializeField] private bool autoCalculateLength = true;

        [Tooltip("If auto-calculate is OFF, this is the fixed rope length")]
        [SerializeField] private float manualRopeLength = 5f;

        [Tooltip("Extra length multiplier when auto-calculating (1.2 = 20% extra for sag)")]
        [SerializeField] private float lengthMultiplier = 1.2f;

        [Header("Verlet Physics")]
        [Tooltip("Number of rope segments (higher = smoother but slower)")]
        [SerializeField] private int visualSegments = 50;

        [Tooltip("Gravity strength (0 = no gravity, 9.81 = realistic)")]
        [SerializeField] private float gravity = 9.81f;

        [Tooltip("Damping - energy loss (0.95 = bouncy, 0.99 = stable)")]
        [SerializeField] private float damping = 0.98f;

        [Tooltip("Constraint iterations - higher = more rigid rope (10-30)")]
        [SerializeField] private int constraintIterations = 15;

        [Header("Collision Settings")]
        [Tooltip("How many segments to check for collision (lower = faster)")]
        [SerializeField] private int physicsSegments = 10;

        [Tooltip("Use rope width for collision radius?")]
        [SerializeField] private bool useWidthForCollision = true;

        [Tooltip("Manual collision radius (if useWidthForCollision is OFF)")]
        [SerializeField] private float manualCollisionRadius = 0.075f;
        
        [Tooltip("Extra collision padding (add to radius for safety)")]
        [SerializeField] private float collisionPadding = 0.02f;

        [Tooltip("Collision response strength (0.5 = soft, 1.0 = hard)")]
        [SerializeField] private float collisionStiffness = 1f;
        
        [Tooltip("Velocity damping on collision (higher = less bounce)")]
        [SerializeField] private float collisionDamping = 0.9f;
        
        [Tooltip("Max collision iterations per frame")]
        [SerializeField] private int collisionIterations = 2;
        
        [Tooltip("Minimum distance before collision activates")]
        [SerializeField] private float collisionThreshold = 0.001f;

        [Header("3D Mesh Settings")]
        [Tooltip("How many sides the rope cylinder has (6-12 recommended)")]
        [SerializeField] private int meshRadialSegments = 8;

        [Header("Performance")]
        [Tooltip("Update mesh every N frames (1 = every frame, 2 = every other frame)")]
        [SerializeField] private int meshUpdateInterval = 1;

        [Tooltip("Enable this if ropes are lagging the game")]
        [SerializeField] private bool useLowQualityMode = false;

        #region Properties
        
        public float CollisionDamping => collisionDamping;
        public float CollisionThreshold => collisionThreshold;

        public float RopeWidth => ropeWidth;
        public Color RopeColor => ropeColor;
        public Material RopeMaterial => ropeMaterial;

        public bool AutoCalculateLength => autoCalculateLength;
        public float ManualRopeLength => manualRopeLength;
        public float LengthMultiplier => lengthMultiplier;

        public int VisualSegments => useLowQualityMode ? Mathf.Max(20, visualSegments / 2) : visualSegments;
        public float Gravity => gravity;
        public float Damping => damping;
        public int ConstraintIterations => useLowQualityMode ? Mathf.Max(5, constraintIterations / 2) : constraintIterations;

        public int PhysicsSegments => physicsSegments;
        public bool UseWidthForCollision => useWidthForCollision;
        public float CollisionStiffness => collisionStiffness;
        public float CollisionRadius => (useWidthForCollision ? (ropeWidth * 0.5f) : manualCollisionRadius) + collisionPadding;
        public int CollisionIterations => collisionIterations;

        public int MeshRadialSegments => useLowQualityMode ? Mathf.Max(4, meshRadialSegments / 2) : meshRadialSegments;
        public int MeshUpdateInterval => meshUpdateInterval;

        public bool UseLowQualityMode => useLowQualityMode;

        /// <summary>
        /// Calculate total rope length based on distance and multiplier
        /// </summary>
        public float CalculateRopeLength(float distance)
        {
            if (autoCalculateLength)
            {
                return distance * lengthMultiplier;
            }
            return manualRopeLength;
        }

        #endregion

        #region Validation

        private void OnValidate()
        {
            // Visual settings
            ropeWidth = Mathf.Max(0.01f, ropeWidth);

            // Length settings
            manualRopeLength = Mathf.Max(0.1f, manualRopeLength);
            lengthMultiplier = Mathf.Clamp(lengthMultiplier, 1.0f, 2.0f);

            // Physics settings
            //visualSegments = Mathf.Clamp(visualSegments, 10, 100);
            gravity = Mathf.Max(0f, gravity);
            damping = Mathf.Clamp(damping, 0.9f, 0.999f);
            //constraintIterations = Mathf.Clamp(constraintIterations, 5, 50);

            // Collision settings
            //physicsSegments = Mathf.Clamp(physicsSegments, 5, 30);
            manualCollisionRadius = Mathf.Max(0.01f, manualCollisionRadius);
            collisionStiffness = Mathf.Clamp01(collisionStiffness);
            collisionPadding = Mathf.Max(0f, collisionPadding);
            collisionIterations = Mathf.Clamp(collisionIterations, 1, 5);
            collisionDamping = Mathf.Clamp(collisionDamping, 0.5f, 0.99f);
            collisionThreshold = Mathf.Max(0.0001f, collisionThreshold);

            // Mesh settings
            meshRadialSegments = Mathf.Clamp(meshRadialSegments, 3, 16);

            // Performance settings
            meshUpdateInterval = Mathf.Max(1, meshUpdateInterval);

            // Warning checks
            if (visualSegments > 60)
            {
                Debug.LogWarning($"[{name}] Visual segments ({visualSegments}) is high! May cause performance issues.", this);
            }

            if (constraintIterations > 30)
            {
                Debug.LogWarning($"[{name}] Constraint iterations ({constraintIterations}) is high! May cause performance issues.", this);
            }
        }

        #endregion

        #region Editor Helpers

        [ContextMenu("Set Low Quality (Mobile)")]
        private void SetLowQuality()
        {
            visualSegments = 30;
            constraintIterations = 10;
            meshRadialSegments = 6;
            meshUpdateInterval = 2;
            useLowQualityMode = true;
            Debug.Log($"[{name}] Set to LOW QUALITY mode (mobile-friendly)");
        }

        [ContextMenu("Set Medium Quality (Default)")]
        private void SetMediumQuality()
        {
            visualSegments = 50;
            constraintIterations = 15;
            meshRadialSegments = 8;
            meshUpdateInterval = 1;
            useLowQualityMode = false;
            Debug.Log($"[{name}] Set to MEDIUM QUALITY mode (default)");
        }

        [ContextMenu("Set High Quality (PC)")]
        private void SetHighQuality()
        {
            visualSegments = 80;
            constraintIterations = 25;
            meshRadialSegments = 12;
            meshUpdateInterval = 1;
            useLowQualityMode = false;
            Debug.Log($"[{name}] Set to HIGH QUALITY mode (PC)");
        }

        [ContextMenu("Print Current Settings")]
        private void PrintSettings()
        {
            Debug.Log($"=== {name} Settings ===\n" +
                      $"Visual Segments: {VisualSegments}\n" +
                      $"Constraint Iterations: {ConstraintIterations}\n" +
                      $"Mesh Radial Segments: {MeshRadialSegments}\n" +
                      $"Collision Radius: {CollisionRadius:F3}\n" +
                      $"Low Quality Mode: {useLowQualityMode}");
        }

        #endregion
    }
}