using System.Collections.Generic;
using _Project.Scripts.Core.Interfaces;
using _Project.Scripts.Data.ScriptableObjects;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    [RequireComponent(typeof(LineRenderer))]
    public class Rope : MonoBehaviour, IRope
    {
        [Header("Configuration")] 
        [SerializeField] private int ropeId;
        [SerializeField] private RopeData ropeData;

        [Header("Collision Settings")] 
        [SerializeField] private bool checkCollisions = true;
        [SerializeField] private LayerMask collisionLayers = -1;

        private LineRenderer lineRenderer;
        private IPin startPin;
        private IPin endPin;
        private bool isColliding;
        private Color originalColor;
        private Color collisionColor = Color.red;
        private List<Vector3> ropePoints;
        private Tween colorTween;

        #region Rope Implementation
        
        public int RopeId => ropeId;
        public IPin StartPin => startPin;
        public IPin EndPin => endPin;
        public bool IsColliding => isColliding;

        #endregion

        private void Awake()
        {
            lineRenderer = GetComponent<LineRenderer>();
            ropePoints = new List<Vector3>();

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
            if (startPin != null && endPin != null)
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
        
        #region IRope Methods

        public void Initialize(IPin startPin, IPin endPin)
        {
            this.startPin = startPin;
            this.endPin = endPin;

            if (ropeData != null)
            {
                SetupLineRenderer();
                originalColor = ropeData.RopeColor;
            }
            
            UpdateRope();
            
#if UNITY_EDITOR
            Debug.Log($"[Rope {ropeId}] Initialized between Pin {startPin.PinId} and Pin {endPin.PinId}");
#endif
        }

        public void UpdateRope()
        {
            if (startPin == null || endPin == null || lineRenderer == null) return;

            CalculateRopePoints();

            lineRenderer.positionCount = ropePoints.Count;
            lineRenderer.SetPositions(ropePoints.ToArray());
        }

        public bool CheckCollision(IRope otherRope)
        {
            if (!checkCollisions || otherRope == null || otherRope == this) return false;

            bool collision = LineSegmentsIntersect(
                startPin.Position,
                endPin.Position,
                otherRope.StartPin.Position,
                otherRope.EndPin.Position
            );
            
            return collision;
        }

        public void SetColor(Color color)
        {
            if (lineRenderer == null) return;
            
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
                    }
                }
            ).SetEase(Ease.OutQuad);
        }

        public void SetHighlight(bool highlighted)
        {
            isColliding = highlighted;
            SetColor(highlighted ? collisionColor : originalColor);
        }
        
        #endregion
        
        #region Rope Calculation

        private void SetupLineRenderer()
        {
            if (lineRenderer == null || ropeData == null) return;
            
            lineRenderer.startWidth = ropeData.RopeWidth;
            lineRenderer.endWidth = ropeData.RopeWidth;
            lineRenderer.material = ropeData.RopeMaterial;
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
                ropePoints.Add(startPin.Position);
                ropePoints.Add(endPin.Position);
                return;
            }

            Vector3 start = startPin.Position;
            Vector3 end = endPin.Position;

            float distance = Vector3.Distance(start, end);
            float sagAmount = distance * ropeData.Smoothness * 0.2f;

            for (int i = 0; i <= ropeData.SegmentCount; i++)
            {
                float t = i / (float)ropeData.SegmentCount;
                
                Vector3 point = Vector3.Lerp(start, end, t);
                
                float sag = Mathf.Sin(t * Mathf.PI) * sagAmount;
                point.y -= sag;
                
                ropePoints.Add(point);
            }
        }
        
        #endregion
        
        #region Collision Detection

        private bool LineSegmentsIntersect(Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4)
        {
            Vector2 a1 = new Vector2(p1.x, p1.z);
            Vector2 a2 = new Vector2(p2.x, p2.z);
            Vector2 b1 = new Vector2(p3.x, p3.z);
            Vector2 b2 = new Vector2(p4.x, p4.z);
            
            return LineSegmentsIntersect2D(a1, a2, b1, b2);
        }

        private bool LineSegmentsIntersect2D(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4)
        {
            float d = (p2.x - p1.x) * (p4.y - p3.y) - (p2.y - p1.y) * (p4.x - p3.x);
            
            if (Mathf.Abs(d) < 0.0001f) return false;
            
            float t = ((p3.x - p1.x) * (p4.y - p3.y) - (p3.y - p1.y) * (p4.x - p3.x)) / d;
            float u = ((p3.x - p1.x) * (p2.y - p1.y) - (p3.y - p1.y) * (p2.x - p1.x)) / d;

            return t >= 0 && t <= 1 && u >= 0 && u <= 1;
        }
        
        #endregion
        
        #region Public Methods
        
        public float GetRopeLength()
        {
            if (startPin == null || endPin == null)
                return 0f;

            return Vector3.Distance(startPin.Position, endPin.Position);
        }
        
        public bool IsTaut(float threshold = 0.1f)
        {
            if (startPin == null || endPin == null)
                return false;

            float currentLength = GetRopeLength();
            float straightLength = Vector3.Distance(startPin.Position, endPin.Position);
            
            return Mathf.Abs(currentLength - straightLength) < threshold;
        }
        
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
            if (startPin != null && endPin != null)
            {
                Gizmos.color = isColliding ? Color.red : Color.green;
                Gizmos.DrawLine(startPin.Position, endPin.Position);
            }
        }

        private void OnDrawGizmosSelected()
        {
            if (startPin != null && endPin != null)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawWireSphere(startPin.Position, 0.1f);
                Gizmos.DrawWireSphere(endPin.Position, 0.1f);
                Gizmos.DrawLine(startPin.Position, endPin.Position);
            }
        }

        #endregion
    }
}