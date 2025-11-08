using _Project.Scripts.Gameplay.Input;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    /// <summary>
    /// Handles dragging rope endpoints with mouse/touch input
    /// </summary>
    public class RopeEndpointDragController : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private Camera mainCamera;
        [SerializeField] private LayerMask endpointLayer = -1;
        [SerializeField] private float dragHeight = 0.5f;

        private RopeEndpoint currentDraggedEndpoint;
        private Vector3 dragOffset;

        #region Unity Lifecycle

        private void Awake()
        {
            if (mainCamera == null)
            {
                mainCamera = Camera.main;
            }
        }

        private void Update()
        {
            if (InputManager.Instance == null) return;

            HandleInput();
        }

        #endregion

        #region Input Handling

        private void HandleInput()
        {
            // Input started
            if (InputManager.Instance.IsInputActive && currentDraggedEndpoint == null)
            {
                TrySelectEndpoint();
            }

            // Input continuing
            if (InputManager.Instance.IsInputActive && currentDraggedEndpoint != null)
            {
                DragCurrentEndpoint();
            }

            // Input ended
            if (!InputManager.Instance.IsInputActive && currentDraggedEndpoint != null)
            {
                ReleaseEndpoint();
            }
        }

        private void TrySelectEndpoint()
        {
            if (InputManager.Instance.RaycastFromInput(out RaycastHit hit, endpointLayer))
            {
                RopeEndpoint endpoint = hit.collider.GetComponent<RopeEndpoint>();

                if (endpoint != null)
                {
                    currentDraggedEndpoint = endpoint;

                    // Calculate offset
                    Vector3 hitWorldPos = hit.point;
                    dragOffset = currentDraggedEndpoint.transform.position - hitWorldPos;

                    // Notify endpoint
                    currentDraggedEndpoint.StartDrag(hitWorldPos);

                    Debug.Log($"[RopeEndpointDragController] Selected endpoint from Pin {endpoint.CurrentPin?.PinId}");
                }
            }
        }

        private void DragCurrentEndpoint()
        {
            if (currentDraggedEndpoint == null) return;

            // Get world position
            Vector3 worldPos = GetWorldPositionOnDragPlane();

            // Apply offset
            Vector3 targetPos = worldPos + dragOffset;
            targetPos.y = dragHeight;

            // Update endpoint
            currentDraggedEndpoint.DragTo(targetPos);
        }

        private void ReleaseEndpoint()
        {
            if (currentDraggedEndpoint == null) return;

            Debug.Log($"[RopeEndpointDragController] Released endpoint");

            currentDraggedEndpoint.EndDrag();
            currentDraggedEndpoint = null;
        }

        #endregion

        #region Helper Methods

        private Vector3 GetWorldPositionOnDragPlane()
        {
            Plane dragPlane = new Plane(Vector3.up, new Vector3(0, dragHeight, 0));

            Ray ray = InputManager.Instance.GetInputRay();

            if (dragPlane.Raycast(ray, out float distance))
            {
                Vector3 pos = ray.GetPoint(distance);
                pos.z = 0f;
                return pos;
            }
            
            Vector3 fallback = currentDraggedEndpoint != null ? currentDraggedEndpoint.transform.position : Vector3.zero;
            fallback.z = 0f;
            return fallback;
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            // Draw drag plane
            Gizmos.color = new Color(1, 1, 0, 0.3f);
            Gizmos.DrawCube(Vector3.up * dragHeight, new Vector3(20, 0.01f, 20));

            // Draw currently dragged endpoint
            if (Application.isPlaying && currentDraggedEndpoint != null)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawWireSphere(currentDraggedEndpoint.transform.position, 0.4f);
            }
        }

        #endregion
    }
}