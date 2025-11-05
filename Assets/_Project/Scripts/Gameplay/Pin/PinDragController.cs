using _Project.Scripts.Core.Managers;
using _Project.Scripts.Gameplay.Input;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Pin
{
    public class PinDragController : MonoBehaviour
    {
        [Header("Settings")]
        [SerializeField] private Camera mainCamera;
        [SerializeField] private LayerMask pinLayer = -1;
        [SerializeField] private float dragHeight = 0f;
        
        private Pin currentDraggedPin;
        private Vector3 dragOffset;
        
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
        
        private void HandleInput()
        {
            // Input başladı
            if (InputManager.Instance.IsInputActive && currentDraggedPin == null)
            {
                TrySelectPin();
            }

            // Input devam ediyor
            if (InputManager.Instance.IsInputActive && currentDraggedPin != null)
            {
                DragCurrentPin();
            }

            // Input bitti
            if (!InputManager.Instance.IsInputActive && currentDraggedPin != null)
            {
                ReleasePin();
            }
        }

        private void TrySelectPin()
        {
            if (InputManager.Instance.RaycastFromInput(out RaycastHit hit, pinLayer))
            {
                Pin pin = hit.collider.GetComponent<Pin>();
                
                if (pin != null && pin.IsDraggable)
                {
                    currentDraggedPin = pin;
                    
                    // Tıklanan noktadan pin pozisyonuna offset hesapla
                    Vector3 hitWorldPos = hit.point;
                    dragOffset = currentDraggedPin.Position - hitWorldPos;
                    
                    // Pin'e drag başladığını bildir
                    currentDraggedPin.StartDrag();
                    
                    Debug.Log($"[PinDragController] Selected Pin {pin.PinId}");
                }
            }
        }

        private void DragCurrentPin()
        {
            if (currentDraggedPin == null) return;

            // Mouse/touch pozisyonundan world pozisyonunu al
            Vector3 worldPos = GetWorldPositionOnDragPlane();
            
            // Offset ekleyerek pin'in doğru pozisyonda kalmasını sağla
            Vector3 targetPos = worldPos + dragOffset;
            targetPos.y = dragHeight; // Y sabit kalsın
            
            currentDraggedPin.DragTo(targetPos);
        }

        private void ReleasePin()
        {
            if (currentDraggedPin == null) return;

            Debug.Log($"[PinDragController] Released Pin {currentDraggedPin.PinId}");
    
            currentDraggedPin.EndDrag();
            currentDraggedPin = null;
            
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.IncrementMoveCount();
            }
        }

        private Vector3 GetWorldPositionOnDragPlane()
        {
            // Pin'in bulunduğu yükseklikte bir plane oluştur
            Plane dragPlane = new Plane(Vector3.up, new Vector3(0, dragHeight, 0));
            
            Ray ray = InputManager.Instance.GetInputRay();
            
            if (dragPlane.Raycast(ray, out float distance))
            {
                return ray.GetPoint(distance);
            }

            // Fallback
            return currentDraggedPin != null ? currentDraggedPin.Position : Vector3.zero;
        }

        private void OnDrawGizmos()
        {
            // Drag plane'i görselleştir
            Gizmos.color = new Color(0, 1, 0, 0.3f);
            Gizmos.DrawCube(Vector3.up * dragHeight, new Vector3(20, 0.01f, 20));
            
            // Şu an draglanan pin varsa göster
            if (Application.isPlaying && currentDraggedPin != null)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawWireSphere(currentDraggedPin.Position, 0.4f);
            }
        }
    }
}