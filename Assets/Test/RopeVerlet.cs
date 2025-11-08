using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class RopeVerlet : MonoBehaviour
{
    [Header("Rope Settings")]
    public Transform startPoint; // İpin bağlı olduğu yer
    public Transform endPoint;   // (opsiyonel) ipin ucu
    public int segmentCount = 25;
    public float segmentLength = 0.1f;
    public int constraintIterations = 20;
    public float gravity = -9.81f;

    [Header("Behavior")]
    public bool applyGravity = false; // sadece sen istediğinde aktif olacak
    public float damping = 0.98f;     // sönümleme (enerji kaybı)

    private LineRenderer lineRenderer;
    private List<RopeSegment> ropeSegments = new List<RopeSegment>();

    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
        InitializeRope();
    }

    private void InitializeRope()
    {
        ropeSegments.Clear();
        Vector3 ropeStartPoint = startPoint.position;

        for (int i = 0; i < segmentCount; i++)
        {
            ropeSegments.Add(new RopeSegment(ropeStartPoint));
            ropeStartPoint.y -= segmentLength;
        }
    }

    private void Update()
    {
        SimulateRope();
        ApplyConstraints();
        DrawRope();
    }

    private void SimulateRope()
    {
        for (int i = 0; i < ropeSegments.Count; i++)
        {
            RopeSegment seg = ropeSegments[i];
            Vector3 velocity = (seg.posNow - seg.posOld) * damping;
            seg.posOld = seg.posNow;

            seg.posNow += velocity;

            // Sadece gravity aktifse uygula
            if (applyGravity)
                seg.posNow += new Vector3(0, gravity, 0) * Time.deltaTime;

            ropeSegments[i] = seg;
        }
    }

    private void ApplyConstraints()
    {
        // Üst noktayı sabitle
        RopeSegment firstSegment = ropeSegments[0];
        firstSegment.posNow = startPoint.position;
        ropeSegments[0] = firstSegment;

        // Eğer ucuna obje bağlıysa sabitle
        if (endPoint != null)
        {
            RopeSegment lastSegment = ropeSegments[ropeSegments.Count - 1];
            lastSegment.posNow = endPoint.position;
            ropeSegments[ropeSegments.Count - 1] = lastSegment;
        }

        for (int iteration = 0; iteration < constraintIterations; iteration++)
        {
            for (int i = 0; i < ropeSegments.Count - 1; i++)
            {
                RopeSegment segA = ropeSegments[i];
                RopeSegment segB = ropeSegments[i + 1];

                float dist = (segA.posNow - segB.posNow).magnitude;
                float error = Mathf.Abs(dist - segmentLength);
                Vector3 changeDir = (segA.posNow - segB.posNow).normalized;
                Vector3 changeAmount = changeDir * error;

                if (i != 0)
                {
                    segA.posNow -= changeAmount * 0.5f;
                    segB.posNow += changeAmount * 0.5f;
                }
                else
                {
                    segB.posNow += changeAmount;
                }

                ropeSegments[i] = segA;
                ropeSegments[i + 1] = segB;
            }
        }
    }

    private void DrawRope()
    {
        Vector3[] ropePositions = new Vector3[ropeSegments.Count];
        for (int i = 0; i < ropeSegments.Count; i++)
        {
            ropePositions[i] = ropeSegments[i].posNow;
        }

        lineRenderer.positionCount = ropePositions.Length;
        lineRenderer.SetPositions(ropePositions);
    }

    private struct RopeSegment
    {
        public Vector3 posNow;
        public Vector3 posOld;

        public RopeSegment(Vector3 pos)
        {
            posNow = pos;
            posOld = pos;
        }
    }

    // 🔹 Bu method ile ipi manuel hareket ettirebilirsin
    public void Nudge(Vector3 force)
    {
        // sadece ucuna küçük bir kuvvet uygula
        RopeSegment last = ropeSegments[ropeSegments.Count - 1];
        last.posNow += force;
        ropeSegments[ropeSegments.Count - 1] = last;
    }

    // 🔹 Gravity'i dışarıdan kontrol etmek istersen
    public void SetGravity(bool active)
    {
        applyGravity = active;
    }
}
