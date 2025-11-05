using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    public class Anchor : MonoBehaviour
    {
        [Header("Anchor Settings")]
        [SerializeField] private int anchorId;
        
        [Header("Visual")]
        [SerializeField] private Color anchorColor = new Color(0.5f, 0.5f, 0.5f);
        
        private Renderer anchorRenderer;
        private MaterialPropertyBlock propertyBlock;

        #region Properties

        public int AnchorId => anchorId;
        public Vector3 Position => transform.position;
        public Transform Transform => transform;

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            anchorRenderer = GetComponent<Renderer>();
            if (anchorRenderer == null)
            {
                anchorRenderer = GetComponentInChildren<Renderer>();
            }

            propertyBlock = new MaterialPropertyBlock();
            SetColor(anchorColor);
        }

        private void OnValidate()
        {
            if (anchorId == 0 && gameObject.scene.IsValid())
            {
                anchorId = GetInstanceID();
            }
        }

        #endregion

        #region Visual

        private void SetColor(Color color)
        {
            if (anchorRenderer == null) return;

            anchorRenderer.GetPropertyBlock(propertyBlock);
            propertyBlock.SetColor("_Color", color);
            propertyBlock.SetColor("_BaseColor", color);
            anchorRenderer.SetPropertyBlock(propertyBlock);
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            Gizmos.color = Color.blue;
            Gizmos.DrawWireCube(transform.position, Vector3.one * 0.3f);
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.cyan;
            Gizmos.DrawWireCube(transform.position, Vector3.one * 0.5f);
            
            #if UNITY_EDITOR
            UnityEditor.Handles.Label(transform.position + Vector3.up * 0.5f, $"Anchor {anchorId}");
            #endif
        }

        #endregion
    }
}