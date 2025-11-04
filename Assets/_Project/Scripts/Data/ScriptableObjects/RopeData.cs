using UnityEngine;

namespace _Project.Scripts.Data.ScriptableObjects
{
    [CreateAssetMenu(fileName = "New Rope Data", menuName = "TangleMaster/Data/Rope Data")]
    public class RopeData : ScriptableObject
    {
        [Header("Visual Settings")]
        [Tooltip("Width of the rope")]
        [SerializeField] private float ropeWidth = 0.1f;
        
        [Tooltip("Color of the rope")]
        [SerializeField] private Color ropeColor = Color.white;
        
        [Tooltip("Material for the rope")]
        [SerializeField] private Material ropeMaterial;
        
        [Header("Physics Settings")]
        [Tooltip("Number of segments in the rope")]
        [SerializeField] private int segmentCount = 10;
        
        [Tooltip("Smoothness of the rope curve")]
        [SerializeField] private float smoothness = 0.5f;
        
        [Header("Interaction Settings")]
        [Tooltip("Minimum distance to detect collision with other ropes")]
        [SerializeField] private float collisionRadius = 0.15f;
        
        #region Properties

        public float RopeWidth => ropeWidth;
        public Color RopeColor => ropeColor;
        public Material RopeMaterial => ropeMaterial;
        public int SegmentCount => segmentCount;
        public float Smoothness => smoothness;
        public float CollisionRadius => collisionRadius;

        #endregion

        #region Validation

        private void OnValidate()
        {
            ropeWidth = Mathf.Max(0.01f, ropeWidth);
            segmentCount = Mathf.Max(2, segmentCount);
            smoothness = Mathf.Clamp01(smoothness);
            collisionRadius = Mathf.Max(0.01f, collisionRadius);
        }
        
        #endregion
    }
}