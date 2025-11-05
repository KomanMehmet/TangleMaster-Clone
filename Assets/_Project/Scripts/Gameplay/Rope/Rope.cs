using System.Collections.Generic;
using _Project.Scripts.Core.Managers;
using _Project.Scripts.Data.ScriptableObjects;
using _Project.Scripts.Gameplay.Pin;
using _Project.Scripts.Gameplay.Rope;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    /// <summary>
    /// Rope connecting an anchor to a pin
    /// Renders using LineRenderer with natural sag
    /// </summary>
    [RequireComponent(typeof(LineRenderer))]
    public class Rope : MonoBehaviour
    {
        [Header("Configuration")]
        [SerializeField] private int ropeId;
        [SerializeField] private RopeData ropeData;

        [Header("Collision Settings")]
        [SerializeField] private bool checkCollisions = true;
        
        [Header("Visual Settings")]
        [SerializeField] private float zOffset = 0f;
        [SerializeField] private int sortingOrder = 0;

        private LineRenderer lineRenderer;
        private Anchor anchor;  // Top (fixed)
        private Pin.Pin currentPin; // Bottom (changeable)
        private RopeEndpoint endpoint;
        
        private Vector3 smoothedEndPos;
        private Vector3 endVelocity;
        
        private bool isColliding;
        private Color originalColor;
        private Color collisionColor = Color.red;
        private List<Vector3> ropePoints;
        private Tween colorTween;
        
        private MaterialPropertyBlock materialPropertyBlock;

        #region Properties

        public int RopeId => ropeId;
        public Anchor Anchor => anchor;
        public Pin.Pin CurrentPin => currentPin;
        public bool IsColliding => isColliding;
        public Vector3 StartPosition => anchor != null ? anchor.Position : Vector3.zero;
        public Vector3 EndPosition => endpoint != null ? endpoint.transform.position : (currentPin != null ? currentPin.Position : Vector3.zero);

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            lineRenderer = GetComponent<LineRenderer>();
            ropePoints = new List<Vector3>();
            materialPropertyBlock = new MaterialPropertyBlock();

            if (ropeData == null)
            {
                Debug.LogError($"[Rope {ropeId}] RopeData is not assigned!", this);
            }
        }

        private void OnDestroy()
        {
            colorTween?.Kill();
        }

        private void Update()
        {
            if (anchor != null && endpoint != null)
            {
                UpdateRope();
            }
        }

        private void OnValidate()
        {
            if (ropeId == 0 && gameObject.scene.IsValid())
            {
                ropeId = GetInstanceID();
            }
        }

        #endregion

        #region Initialization
        
        public void Initialize(Anchor anchor, Pin.Pin pin, GameObject endpointPrefab, int sortingOrder = 0)
        {
            this.anchor = anchor;
            this.currentPin = pin;
            this.sortingOrder = sortingOrder;
    
            zOffset = sortingOrder * 0.1f;

            if (ropeData != null)
            {
                SetupLineRenderer();
                if (originalColor == default || originalColor == Color.clear)
                    originalColor = ropeData.RopeColor;
                Debug.Log($"[Rope {ropeId}] Initialized. Original color from RopeData: {originalColor}"); // ← LOG
            }

            // Create endpoint
            if (endpointPrefab != null)
            {
                GameObject endpointObj = Instantiate(endpointPrefab, transform);
                endpointObj.name = "Endpoint";
                endpoint = endpointObj.GetComponent<RopeEndpoint>();
        
                if (endpoint != null)
                {
                    endpoint.Initialize(this, pin);
                }
            }

            UpdateRope();
        }

        #endregion

        #region Rope Update

        public void UpdateRope()
        {
            if (anchor == null || endpoint == null || lineRenderer == null) return;

            CalculateRopePoints();

            lineRenderer.positionCount = ropePoints.Count;
            lineRenderer.SetPositions(ropePoints.ToArray());
        }

        #endregion

        #region Endpoint Movement
        
        public void OnEndpointMoved(Pin.Pin newPin, Pin.Pin oldPin)
        {
            currentPin = newPin;
            
            if (LevelManager.Instance != null)
            {
                LevelManager.Instance.IncrementMoveCount();
            }

            UpdateRope();

            Debug.Log($"[Rope {ropeId}] Moved from Pin {oldPin?.PinId} to Pin {newPin.PinId}");
        }

        #endregion

        #region Collision Detection

        public bool CheckCollision(Rope otherRope)
        {
            if (!checkCollisions || otherRope == null || otherRope == this) return false;

            bool collision = LineSegmentsIntersect(
                StartPosition,
                EndPosition,
                otherRope.StartPosition,
                otherRope.EndPosition
            );

            return collision;
        }

        public void SetHighlight(bool highlighted)
        {
            isColliding = highlighted;
        }
        
        public void SetColorImmediate(Color color)
        {
            if (lineRenderer == null) return;
    
            Debug.Log($"[Rope {ropeId}] SetColorImmediate: {color}");
    
            // Update original color
            if (!isColliding)
            {
                originalColor = color;
                Debug.Log($"[Rope {ropeId}] Original color updated to: {originalColor}");
            }
    
            // Kill any ongoing animation
            colorTween?.Kill();
    
            // Set color immediately
            lineRenderer.startColor = color;
            lineRenderer.endColor = color;
    
            if (materialPropertyBlock == null)
                materialPropertyBlock = new MaterialPropertyBlock();
        
            lineRenderer.GetPropertyBlock(materialPropertyBlock);
            materialPropertyBlock.SetColor("_BaseColor", color);
            materialPropertyBlock.SetColor("_Color", color);
            lineRenderer.SetPropertyBlock(materialPropertyBlock);
        }

        private bool LineSegmentsIntersect(Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
        {
            // 3D line-line distance check
            // If minimum distance between two line segments is less than threshold, they collide
    
            Vector3 u = p2 - p1;
            Vector3 v = p4 - p3;
            Vector3 w = p1 - p3;
    
            float a = Vector3.Dot(u, u);
            float b = Vector3.Dot(u, v);
            float c = Vector3.Dot(v, v);
            float d = Vector3.Dot(u, w);
            float e = Vector3.Dot(v, w);
    
            float D = a * c - b * b;
            float sc, tc;
    
            // Check if lines are parallel
            if (D < 0.00001f)
            {
                sc = 0.0f;
                tc = (b > c ? d / b : e / c);
            }
            else
            {
                sc = (b * e - c * d) / D;
                tc = (a * e - b * d) / D;
            }
    
            // Clamp to segment
            sc = Mathf.Clamp01(sc);
            tc = Mathf.Clamp01(tc);
    
            // Get closest points
            Vector3 closestPoint1 = p1 + sc * u;
            Vector3 closestPoint2 = p3 + tc * v;
    
            // Calculate distance
            float distance = Vector3.Distance(closestPoint1, closestPoint2);
    
            // Collision threshold (rope width)
            float collisionThreshold = ropeData != null ? ropeData.CollisionRadius : 0.2f;
    
            return distance < collisionThreshold;
        }

        #endregion

        #region Visual

        private void SetupLineRenderer()
        {
            if (lineRenderer == null || ropeData == null) return;

            lineRenderer.startWidth = ropeData.RopeWidth;
            lineRenderer.endWidth = ropeData.RopeWidth;
            lineRenderer.material = ropeData.RopeMaterial;
    
            // İLK RENK: RopeData'dan (ama hemen override edilecek)
            lineRenderer.startColor = ropeData.RopeColor;
            lineRenderer.endColor = ropeData.RopeColor;
    
            lineRenderer.numCapVertices = 5;
            lineRenderer.numCornerVertices = 5;
            lineRenderer.useWorldSpace = true;

            lineRenderer.generateLightingData = true;
            lineRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            lineRenderer.receiveShadows = false;
        }

        private void CalculateRopePoints()
        {
            ropePoints.Clear();

            if (ropeData == null || ropeData.SegmentCount < 2)
            {
                ropePoints.Add(StartPosition);
                ropePoints.Add(EndPosition);
                return;
            }

            Vector3 start = StartPosition;
            Vector3 end = EndPosition;

            float distance = Vector3.Distance(start, end);
            float sagAmount = distance * ropeData.Smoothness * 0.2f;

            for (int i = 0; i <= ropeData.SegmentCount; i++)
            {
                float t = i / (float)ropeData.SegmentCount;

                Vector3 point = Vector3.Lerp(start, end, t);

                float sag = Mathf.Sin(t * Mathf.PI) * sagAmount;
                point.y -= sag;
        
                // Z-offset ekle (depth için)
                point.z += zOffset;

                ropePoints.Add(point);
            }
        }

        public void SetColor(Color color)
        {
            if (lineRenderer == null) return;

            Debug.Log($"[Rope {ropeId}] SetColor (animated) called with: {color}");

            // Update original color if not in collision
            if (!isColliding)
            {
                originalColor = color;
            }

            colorTween?.Kill();

            Color currentColor = lineRenderer.startColor;

            colorTween = DOVirtual.Color(
                currentColor,
                color,
                0.3f,
                c =>
                {
                    if (lineRenderer != null)
                    {
                        lineRenderer.startColor = c;
                        lineRenderer.endColor = c;
                
                        if (materialPropertyBlock == null)
                            materialPropertyBlock = new MaterialPropertyBlock();
                    
                        lineRenderer.GetPropertyBlock(materialPropertyBlock);
                        materialPropertyBlock.SetColor("_BaseColor", c);
                        materialPropertyBlock.SetColor("_Color", c);
                        lineRenderer.SetPropertyBlock(materialPropertyBlock);
                    }
                }
            ).SetEase(Ease.OutQuad);
        }
        
        #endregion

        #region Animations

        public void PlaySuccessAnimation()
        {
            Sequence sequence = DOTween.Sequence();

            sequence.Append(DOVirtual.Color(
                lineRenderer.startColor,
                Color.green,
                0.2f,
                c =>
                {
                    if (lineRenderer != null)
                    {
                        lineRenderer.startColor = c;
                        lineRenderer.endColor = c;
                    }
                }
            ));

            sequence.Append(DOVirtual.Float(
                1f,
                0f,
                0.3f,
                alpha =>
                {
                    if (lineRenderer != null)
                    {
                        Color c = lineRenderer.startColor;
                        c.a = alpha;
                        lineRenderer.startColor = c;
                        lineRenderer.endColor = c;
                    }
                }
            ));

            sequence.OnComplete(() => gameObject.SetActive(false));
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            if (anchor != null && currentPin != null)
            {
                Gizmos.color = isColliding ? Color.red : Color.green;
                Gizmos.DrawLine(anchor.Position, currentPin.Position);
            }
        }

        private void OnDrawGizmosSelected()
        {
            if (anchor != null && currentPin != null)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawWireSphere(anchor.Position, 0.1f);
                Gizmos.DrawWireSphere(currentPin.Position, 0.1f);
                Gizmos.DrawLine(anchor.Position, currentPin.Position);
            }
        }

        #endregion
    }
}