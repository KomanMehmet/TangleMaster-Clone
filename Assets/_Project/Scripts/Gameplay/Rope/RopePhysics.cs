using System.Collections.Generic;
using UnityEngine;
using _Project.Scripts.Data.ScriptableObjects;
using _Project.Scripts.Core.Managers;

namespace _Project.Scripts.Gameplay.Rope
{
    /// <summary>
    /// Professional Verlet rope physics with procedural 3D mesh
    /// Optimized for performance with configurable update intervals
    /// </summary>
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    public class RopePhysics : MonoBehaviour
    {
        private RopeData ropeData;

        // 3D Mesh components
        private MeshFilter meshFilter;
        private Mesh mesh;

        // Physics
        private Transform startAnchor;
        private Transform endPoint;
        private float segmentLength;
        private bool isActive = false;
        private int sortingOrder;
        public int DepthLayer { get; private set; }
        public bool applyGravity = true;

        private List<RopeSegment> ropeSegments = new List<RopeSegment>();

        // Mesh generation buffers
        private List<Vector3> vertices = new List<Vector3>();
        private List<int> triangles = new List<int>();
        private List<Vector2> uvs = new List<Vector2>();
        private List<Vector3> normals = new List<Vector3>();

        private int radialSegments;
        private float radius;

        // Performance optimization
        private int meshUpdateCounter = 0;
        private int meshUpdateInterval = 1;

        private struct RopeSegment
        {
            public Vector3 posNow;
            public Vector3 posOld;
            public bool isLocked;

            public RopeSegment(Vector3 pos, bool locked = false)
            {
                posNow = pos;
                posOld = pos;
                isLocked = locked;
            }
        }

        #region Initialization

        private void Awake()
        {
            meshFilter = GetComponent<MeshFilter>();
            mesh = new Mesh();
            mesh.name = "RopeMesh_Dynamic";
            mesh.MarkDynamic();
            meshFilter.mesh = mesh;
            
            SimulateRope();
            
            MeshRenderer renderer = GetComponent<MeshRenderer>();
            if (renderer != null)
            {
                transform.position = Vector3.zero;
                transform.rotation = Quaternion.identity;
                transform.localScale = Vector3.one;
            }

            // Register with collision manager
            if (RopeCollisionManager.Instance != null)
            {
                RopeCollisionManager.Instance.RegisterRope(this);
            }
            else
            {
                Debug.LogWarning("[RopePhysics] RopeCollisionManager.Instance is null in Awake!");
            }
        }

        private void OnDestroy()
        {
            // Unregister from collision manager
            if (RopeCollisionManager.Instance != null)
            {
                RopeCollisionManager.Instance.UnregisterRope(this);
            }
            
            if (mesh != null)
            {
                Destroy(mesh);
            }
        }

        public void Initialize(Transform anchor, Transform endpoint, RopeData data, int sortingOrder = 0 , int depthLayer = 0)
        {
            ropeData = data;
            startAnchor = anchor;
            endPoint = endpoint;
            this.sortingOrder = sortingOrder;
            this.DepthLayer = depthLayer;

            // Calculate rope length
            float distance = Vector3.Distance(anchor.position, endpoint.position);
            float totalLength = data.CalculateRopeLength(distance);
            segmentLength = totalLength / data.VisualSegments;
            
            radialSegments = data.MeshRadialSegments;
            radius = data.RopeWidth * 0.5f;
            
            meshUpdateInterval = data.MeshUpdateInterval;
            
            if (data.Gravity == 0f)
            {
                applyGravity = false;
            }

            SetupRenderer(sortingOrder);
            InitializeRope();

            Debug.Log($"[RopePhysics] Initialized: distance={distance:F2}m, totalLength={totalLength:F2}m, " +
                      $"segments={data.VisualSegments}, updateInterval={meshUpdateInterval}");
        }

        private void SetupRenderer(int sortingOrder)
        {
            MeshRenderer renderer = GetComponent<MeshRenderer>();
            if (renderer == null) return;

            if (ropeData.RopeMaterial != null)
            {
                renderer.material = ropeData.RopeMaterial;
            }
            
            renderer.sortingOrder = sortingOrder + (this.DepthLayer * 10);

            renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            renderer.receiveShadows = false;

            Debug.Log($"[RopePhysics] Renderer sorting order: {sortingOrder}");
        }

        private void InitializeRope()
        {
            ropeSegments.Clear();

            Vector3 start = startAnchor.position;
            Vector3 end = endPoint.position;

            int segmentCount = ropeData.VisualSegments;
            float distance = Vector3.Distance(start, end);
            float totalLength = ropeData.CalculateRopeLength(distance);
            segmentLength = totalLength / segmentCount;
            
            if (distance > totalLength)
            {
                Debug.LogWarning(
                    $"[RopePhysics {gameObject.name}] Initial distance ({distance:F2}m) exceeds rope length ({totalLength:F2}m)! " +
                    "Rope will be stretched tight.", this);
            }
            
            for (int i = 0; i <= segmentCount; i++)
            {
                float t = i / (float)segmentCount;
                Vector3 pos = Vector3.Lerp(start, end, t);
                bool locked = (i == 0 || i == segmentCount);
                ropeSegments.Add(new RopeSegment(pos, locked));
            }
            
            UpdateRopeMesh();
        }

        #endregion

        #region Physics Simulation

        private void FixedUpdate()
        {
            if (!isActive || ropeSegments.Count == 0) return;

            SimulateRope();
            ApplyConstraints();
        }
        
        private void LateUpdate()
        {
            if (!isActive || ropeSegments.Count == 0) return;
            
            meshUpdateCounter++;
            if (meshUpdateCounter >= meshUpdateInterval)
            {
                UpdateRopeMesh();
                meshUpdateCounter = 0;
            }
        }

        private void SimulateRope()
        {
            float deltaTime = Time.fixedDeltaTime;

            for (int i = 0; i < ropeSegments.Count; i++)
            {
                RopeSegment seg = ropeSegments[i];
                if (seg.isLocked) continue;
                
                Vector3 velocity = (seg.posNow - seg.posOld) * ropeData.Damping;
                seg.posOld = seg.posNow;
                seg.posNow += velocity;
                
                if (applyGravity && ropeData.Gravity > 0f)
                {
                    seg.posNow += Vector3.down * ropeData.Gravity * deltaTime * deltaTime;
                }

                ropeSegments[i] = seg;
            }
        }

        private void ApplyConstraints()
        {
            RopeSegment firstSegment = ropeSegments[0];
            firstSegment.posNow = startAnchor.position;
            firstSegment.posOld = startAnchor.position;
            ropeSegments[0] = firstSegment;
            
            if (endPoint != null)
            {
                RopeSegment lastSegment = ropeSegments[ropeSegments.Count - 1];
                lastSegment.posNow = endPoint.position;
                lastSegment.posOld = endPoint.position;
                ropeSegments[ropeSegments.Count - 1] = lastSegment;
            }
            
            for (int iteration = 0; iteration < ropeData.ConstraintIterations; iteration++)
            {
                for (int i = 0; i < ropeSegments.Count - 1; i++)
                {
                    RopeSegment segA = ropeSegments[i];
                    RopeSegment segB = ropeSegments[i + 1];

                    float dist = Vector3.Distance(segA.posNow, segB.posNow);
                    if (segmentLength <= 0.001f) continue;

                    float error = dist - segmentLength;
                    Vector3 changeDir = (segA.posNow - segB.posNow).normalized;
                    Vector3 changeAmount = changeDir * error;
                    
                    if (!segA.isLocked && !segB.isLocked)
                    {
                        segA.posNow -= changeAmount * 0.5f;
                        segB.posNow += changeAmount * 0.5f;
                    }
                    else if (!segA.isLocked)
                    {
                        segA.posNow -= changeAmount;
                    }
                    else if (!segB.isLocked)
                    {
                        segB.posNow += changeAmount;
                    }

                    ropeSegments[i] = segA;
                    ropeSegments[i + 1] = segB;
                }
            }
        }

        #endregion

        #region 3D Mesh Generation

        private void UpdateRopeMesh()
        {
            if (mesh == null || ropeSegments.Count < 2) return;

            vertices.Clear();
            triangles.Clear();
            uvs.Clear();
            normals.Clear();
            
            for (int i = 0; i < ropeSegments.Count; i++)
            {
                Vector3 pos = ropeSegments[i].posNow;
                Vector3 tangent = GetTangent(i);

                (Vector3 up, Vector3 right) = CreateFrame(i, tangent);

                float vCoord = i / (float)(ropeSegments.Count - 1);

                for (int j = 0; j < radialSegments; j++)
                {
                    float angle = (j / (float)radialSegments) * 2f * Mathf.PI;
                    Vector3 offset = (Mathf.Cos(angle) * up + Mathf.Sin(angle) * right) * radius;

                    vertices.Add(pos + offset);
                    normals.Add(offset.normalized);

                    float uCoord = j / (float)radialSegments;
                    uvs.Add(new Vector2(uCoord, vCoord));
                }

                if (i > 0)
                {
                    int baseIndex = (i - 1) * radialSegments;
                    int nextBaseIndex = i * radialSegments;

                    for (int j = 0; j < radialSegments; j++)
                    {
                        int v0 = baseIndex + j;
                        int v1 = baseIndex + (j + 1) % radialSegments;
                        int v2 = nextBaseIndex + j;
                        int v3 = nextBaseIndex + (j + 1) % radialSegments;
                        
                        triangles.Add(v0);
                        triangles.Add(v2);
                        triangles.Add(v1);

                        triangles.Add(v1);
                        triangles.Add(v2);
                        triangles.Add(v3);
                    }
                }
            }
            
            mesh.Clear();
            mesh.SetVertices(vertices);
            mesh.SetTriangles(triangles, 0);
            mesh.SetNormals(normals);
            mesh.SetUVs(0, uvs);
            mesh.RecalculateBounds();
        }

        private Vector3 GetTangent(int index)
        {
            if (index == 0)
                return (ropeSegments[1].posNow - ropeSegments[0].posNow).normalized;

            if (index == ropeSegments.Count - 1)
                return (ropeSegments[index].posNow - ropeSegments[index - 1].posNow).normalized;

            return (ropeSegments[index + 1].posNow - ropeSegments[index - 1].posNow).normalized;
        }

        private (Vector3 up, Vector3 right) CreateFrame(int index, Vector3 tangent)
        {
            Vector3 up, right;
            
            if (Mathf.Abs(Vector3.Dot(tangent, Vector3.up)) > 0.99f)
            {
                right = Vector3.Cross(tangent, Vector3.forward).normalized;
                up = Vector3.Cross(right, tangent).normalized;
            }
            else
            {
                right = Vector3.Cross(tangent, Vector3.up).normalized;
                up = Vector3.Cross(right, tangent).normalized;
            }

            return (up, right);
        }

        #endregion

        #region Collision Detection

        public void CheckCollisionWith(RopePhysics other)
        {
            if (other == null || other == this || ropeData == null) return;
            
            if (this.DepthLayer != other.DepthLayer)
            {
                return;
            }

            float minDist = ropeData.CollisionRadius + other.ropeData.CollisionRadius;
            int step = Mathf.Max(1, ropeSegments.Count / ropeData.PhysicsSegments);

            for (int iter = 0; iter < ropeData.CollisionIterations; iter++)
            {
                bool hadCollision = false;

                for (int i = step; i < ropeSegments.Count - step; i += step)
                {
                    RopeSegment segA = ropeSegments[i];
                    if (segA.isLocked) continue;

                    for (int j = step; j < other.ropeSegments.Count - step; j += step)
                    {
                        RopeSegment segB = other.ropeSegments[j];
                        if (segB.isLocked) continue;

                        Vector3 delta = segA.posNow - segB.posNow;
                        float distance = delta.magnitude;

                        if (distance < minDist && distance > ropeData.CollisionThreshold)
                        {
                            hadCollision = true;

                            float penetration = minDist - distance;
                            Vector3 correction = (delta / distance) * penetration * ropeData.CollisionStiffness;

                            segA.posNow += correction * 0.5f;
                            segB.posNow -= correction * 0.5f;

                            Vector3 relativeVelocity = (segA.posNow - segA.posOld) - (segB.posNow - segB.posOld);
                            float normalVelocity = Vector3.Dot(relativeVelocity, delta.normalized);

                            if (normalVelocity < 0)
                            {
                                Vector3 velocityCorrection =
                                    delta.normalized * normalVelocity * ropeData.CollisionDamping;

                                segA.posOld -= velocityCorrection * 0.5f;
                                segB.posOld += velocityCorrection * 0.5f;
                            }

                            ropeSegments[i] = segA;
                            other.ropeSegments[j] = segB;
                        }
                    }
                }

                if (!hadCollision && iter > 0) break;
            }
        }
        
        public bool IsCollidingWith(RopePhysics other)
        {
            if (other == null || other == this || ropeData == null) return false;

            if (this.DepthLayer != other.DepthLayer)
            {
                return false;
            }

            float minDist = ropeData.CollisionRadius + other.ropeData.CollisionRadius;
            int step = Mathf.Max(1, ropeSegments.Count / ropeData.PhysicsSegments);

            for (int i = step; i < ropeSegments.Count - step; i += step)
            {
                RopeSegment segA = ropeSegments[i];
                if (segA.isLocked) continue;

                for (int j = step; j < other.ropeSegments.Count - step; j += step)
                {
                    RopeSegment segB = other.ropeSegments[j];
                    if (segB.isLocked) continue;

                    Vector3 delta = segA.posNow - segB.posNow;
                    float distance = delta.magnitude;

                    if (distance < minDist)
                    {
                        return true;
                    }
                }
            }

            return false;
        }

        #endregion

        #region Pre-Simulation

        public void PreSimulateStep(float deltaTime)
        {
            SimulateRope();
            ApplyConstraints();
        }

        public void ActivatePhysics()
        {
            isActive = true;
            
            for (int i = 0; i < ropeSegments.Count; i++)
            {
                RopeSegment seg = ropeSegments[i];
                seg.posOld = seg.posNow;
                ropeSegments[i] = seg;
            }

            Debug.Log("[RopePhysics] Verlet physics activated!");
        }

        #endregion

        #region Public Methods

        public void UpdateEndpoints(Transform anchor, Transform endpoint)
        {
            startAnchor = anchor;
            endPoint = endpoint;

            if (ropeSegments.Count == 0)
            {
                InitializeRope();
            }
        }
        
        public void ApplyForce(Vector3 force, int segmentIndex = -1)
        {
            if (segmentIndex == -1)
            {
                segmentIndex = ropeSegments.Count / 2;
            }

            if (segmentIndex >= 0 && segmentIndex < ropeSegments.Count)
            {
                RopeSegment seg = ropeSegments[segmentIndex];
                if (!seg.isLocked)
                {
                    seg.posNow += force;
                    ropeSegments[segmentIndex] = seg;
                }
            }
        }

        public void SetGravity(bool active)
        {
            applyGravity = active;
        }
        
        public void Nudge(Vector3 force)
        {
            if (ropeSegments.Count < 2) return;

            int targetIndex = ropeSegments.Count - 2;
            RopeSegment seg = ropeSegments[targetIndex];

            if (!seg.isLocked)
            {
                seg.posNow += force;
                ropeSegments[targetIndex] = seg;
            }
        }
        
        public void ForceUpdateMesh()
        {
            UpdateRopeMesh();
            meshUpdateCounter = 0;
        }

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
#if UNITY_EDITOR
            if (!Application.isPlaying || ropeSegments == null || ropeSegments.Count == 0) return;
            
            Gizmos.color = Color.blue;
            foreach (var seg in ropeSegments)
            {
                float size = seg.isLocked ? 0.1f : 0.05f;
                Gizmos.DrawSphere(seg.posNow, size);
            }
            
            if (ropeData != null)
            {
                Gizmos.color = new Color(1, 0, 0, 0.15f);
                int step = Mathf.Max(1, ropeSegments.Count / 10);
                for (int i = 0; i < ropeSegments.Count; i += step)
                {
                    Gizmos.DrawWireSphere(ropeSegments[i].posNow, ropeData.CollisionRadius);
                }
            }
            
            if (startAnchor != null && endPoint != null)
            {
                Gizmos.color = Color.yellow;
                Gizmos.DrawLine(startAnchor.position, endPoint.position);
            }
#endif
        }

        #endregion
    }
}