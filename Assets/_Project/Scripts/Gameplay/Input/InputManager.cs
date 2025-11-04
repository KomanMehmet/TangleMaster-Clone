using _Project.Scripts.Core.EventChannels;
using _Project.Scripts.Core.Interfaces;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Input
{
    public class InputManager : MonoBehaviour, IInputProvider, IManager
    {
        public static InputManager Instance { get; private set; }
        
        [Header("Event Channels")]
        [SerializeField] private VoidEventChannel onInputStarted;
        [SerializeField] private VoidEventChannel onInputEnded;
        
        [Header("Settings")]
        [SerializeField] private Camera mainCamera;
        [SerializeField] private LayerMask raycastLayers = -1;
        [SerializeField] private float dragThreshold = 0.1f;
        
        private GameInputActions inputActions;
        
        private bool isInputActive;
        private Vector2 currentInputPosition;
        private Vector2 inputStartPosition;
        private Vector2 currentDelta;
        
        #region Properties

        public bool IsInputActive => isInputActive;
        public Vector2 InputPosition => currentInputPosition;
        public Vector2 InputDelta => currentDelta;
        public Vector2 InputStartPosition => inputStartPosition;
        
        public bool IsDragging => isInputActive && 
                                  Vector2.Distance(inputStartPosition, currentInputPosition) > dragThreshold;

        #endregion
        
        private void Awake()
        {
            if (Instance != null && Instance != this)
            {
                Destroy(gameObject);
                return;
            }

            Instance = this;
            
            if (mainCamera == null)
            {
                mainCamera = Camera.main;
            }

            Initialize();
        }
        
        private void OnEnable()
        {
            Enable();
        }

        private void OnDisable()
        {
            Disable();
        }
        
        private void OnDestroy()
        {
            if (Instance == this)
            {
                Cleanup();
                Instance = null;
            }
        }

        private void Update()
        {
            if (isInputActive)
            {
                UpdateInputPosition();
                UpdateDelta();
            }
        }
        
        public void Initialize()
        {
            inputActions = new GameInputActions();
            
            inputActions.Gameplay.TouchPress.started += OnTouchStarted;
            inputActions.Gameplay.TouchPress.canceled += OnTouchEnded;

            Debug.Log("[InputManager] Initialized successfully with touch and mouse support.");
        }
        
        public void Cleanup()
        {
            if (inputActions != null)
            {
                inputActions.Gameplay.TouchPress.started -= OnTouchStarted;
                inputActions.Gameplay.TouchPress.canceled -= OnTouchEnded;
                inputActions.Dispose();
            }

            onInputStarted?.ClearAllListeners();
            onInputEnded?.ClearAllListeners();

            Debug.Log("[InputManager] Cleaned up.");
        }
        
        public Vector3 GetWorldPosition(Camera camera)
        {
            if (camera == null)
            {
                camera = mainCamera;
            }

            if (camera == null)
            {
                Debug.LogWarning("[InputManager] No camera available for world position conversion.");
                return Vector3.zero;
            }

            Ray ray = camera.ScreenPointToRay(currentInputPosition);
            
            if (Physics.Raycast(ray, out RaycastHit hit, 1000f, raycastLayers))
            {
                return hit.point;
            }
            
            return ray.GetPoint(10f);
        }

        public void Enable()
        {
            inputActions?.Enable();
            Debug.Log("[InputManager] Input enabled.");
        }

        public void Disable()
        {
            inputActions?.Disable();
            isInputActive = false;
            Debug.Log("[InputManager] Input disabled.");
        }
        
        private void OnTouchStarted(UnityEngine.InputSystem.InputAction.CallbackContext context)
        {
            isInputActive = true;
            inputStartPosition = inputActions.Gameplay.TouchPosition.ReadValue<Vector2>();
            currentInputPosition = inputStartPosition;
            currentDelta = Vector2.zero;
            
            onInputStarted?.RaiseEvent();

#if UNITY_EDITOR
            Debug.Log($"[InputManager] Input started at {currentInputPosition}");
#endif
        }

        private void OnTouchEnded(UnityEngine.InputSystem.InputAction.CallbackContext context)
        {
            isInputActive = false;
            currentDelta = Vector2.zero;
            
            onInputEnded?.RaiseEvent();

#if UNITY_EDITOR
            Debug.Log("[InputManager] Input ended");
#endif
        }
        
        private void UpdateInputPosition()
        {
            currentInputPosition = inputActions.Gameplay.TouchPosition.ReadValue<Vector2>();
        }

        private void UpdateDelta()
        {
            currentDelta = inputActions.Gameplay.Delta.ReadValue<Vector2>();
        }
        
        public bool RaycastFromInput(out RaycastHit hit, float maxDistance = 1000f)
        {
            if (mainCamera == null)
            {
                hit = default;
                return false;
            }

            Ray ray = mainCamera.ScreenPointToRay(currentInputPosition);
            return Physics.Raycast(ray, out hit, maxDistance, raycastLayers);
        }
        
        public bool RaycastFromInput(out RaycastHit hit, LayerMask layers, float maxDistance = 1000f)
        {
            if (mainCamera == null)
            {
                hit = default;
                return false;
            }

            Ray ray = mainCamera.ScreenPointToRay(currentInputPosition);
            return Physics.Raycast(ray, out hit, maxDistance, layers);
        }
        
        public Ray GetInputRay()
        {
            if (mainCamera == null)
            {
                return new Ray(Vector3.zero, Vector3.forward);
            }

            return mainCamera.ScreenPointToRay(currentInputPosition);
        }
        
        public Vector2 GetDragDirection()
        {
            if (!IsDragging)
                return Vector2.zero;

            return (currentInputPosition - inputStartPosition).normalized;
        }
        
        public float GetDragDistance()
        {
            if (!isInputActive)
                return 0f;

            return Vector2.Distance(inputStartPosition, currentInputPosition);
        }
    }
}