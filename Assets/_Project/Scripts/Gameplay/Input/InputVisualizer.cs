using UnityEngine;

namespace _Project.Scripts.Gameplay.Input
{
    public class InputVisualizer : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private bool showInBuild = false;
        [SerializeField] private Color gizmoColor = Color.green;
        [SerializeField] private float gizmoRadius = 0.1f;
        
        private Camera _mainCamera;

        private void Awake()
        {
            _mainCamera = Camera.main;
        }
        
        private void OnDrawGizmos()
        {
#if UNITY_EDITOR
            if (!Application.isPlaying) return;
            DrawInputGizmo();
#else
            if (showInBuild)
            {
                DrawInputGizmo();
            }
#endif
        }

        private void DrawInputGizmo()
        {
            if (InputManager.Instance == null || _mainCamera == null)
                return;

            if (InputManager.Instance.IsInputActive)
            {
                Vector3 worldPos = InputManager.Instance.GetWorldPosition(_mainCamera);
                
                Gizmos.color = gizmoColor;
                Gizmos.DrawSphere(worldPos, gizmoRadius);
                
                // Draw line from camera to touch point
                Gizmos.DrawLine(_mainCamera.transform.position, worldPos);
            }
        }
    }
}