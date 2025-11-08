using System.Collections.Generic;
using _Project.Scripts.Core.Managers;
using _Project.Scripts.Data.ScriptableObjects;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.Gameplay.Rope
{
    // 3D Mesh için gerekli bileşenler
    [RequireComponent(typeof(RopePhysics))]
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    public class Rope : MonoBehaviour
    {
        [Header("Configuration")]
        [SerializeField] private int ropeId;
        [SerializeField] private RopeData ropeData; // Bu artık RopeManager tarafından atanacak

        [Header("Visual Settings")]
        [SerializeField] private int sortingOrder = 0;
        [SerializeField] private int depthLayer = 0; // Bu, fizik katmanları için kullanılabilir

        private RopePhysics ropePhysics;
        private Anchor anchor;
        private Pin.Pin currentPin;
        private RopeEndpoint endpoint;
        
        // 3D Mesh için
        private MeshRenderer meshRenderer;
        private MaterialPropertyBlock propertyBlock;
        
        private Color originalColor;
        private Tween colorTween;

        #region Properties

        public int RopeId => ropeId;
        public Anchor Anchor => anchor;
        public Pin.Pin CurrentPin => currentPin;
        public int DepthLayer => depthLayer;
        
        // ❌ IsColliding kaldırıldı (Eski 2D mantıktı)
        
        public Vector3 StartPosition => anchor != null ? anchor.Position : Vector3.zero;
        public Vector3 EndPosition => endpoint != null ? endpoint.transform.position : (currentPin != null ? currentPin.Position : Vector3.zero);

        #endregion

        #region Unity Lifecycle

        private void Awake()
        {
            // LineRenderer'dan kurtulduk, MeshRenderer'ı alıyoruz
            meshRenderer = GetComponent<MeshRenderer>();
            propertyBlock = new MaterialPropertyBlock();
            
            // RopePhysics'i al
            ropePhysics = GetComponent<RopePhysics>();

            if (ropeData == null && Application.isPlaying)
            {
                // RopeManager'ın bunu Initialize'da ataması beklenir
                Debug.LogWarning($"[Rope {ropeId}] RopeData is not assigned in prefab. Waiting for Initialize.", this);
            }
        }

        private void OnDestroy()
        {
            colorTween?.Kill();
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
        
        // RopeData artık dışarıdan (RopeManager'dan) veriliyor
        public void Initialize(RopeData data, Anchor anchor, Pin.Pin pin, GameObject endpointPrefab, int sortingOrder = 0, int depthLayer = 0)
        {
            this.ropeData = data;
            this.anchor = anchor;
            this.currentPin = pin;
            this.sortingOrder = sortingOrder;
            this.depthLayer = depthLayer;

            if (ropeData != null)
            {
                originalColor = ropeData.RopeColor;
                SetColorImmediate(originalColor); // Rengi mesh'e uygula
            }
            else
            {
                Debug.LogError($"[Rope {ropeId}] RopeData is NULL during Initialize!", this);
                return;
            }
            
            // Create endpoint
            if (endpointPrefab != null)
            {
                GameObject endpointObj = Instantiate(endpointPrefab, transform);
                endpointObj.name = "Endpoint";
                endpoint = endpointObj.GetComponent<RopeEndpoint>();
        
                if (endpoint != null)
                {
                    endpoint.transform.position = pin.Position;
                    endpoint.Initialize(this, pin);
                }
            }
            
            // Initialize physics
            if (ropePhysics != null)
            {
                ropePhysics.Initialize(anchor.Transform, endpoint.transform, ropeData, this.sortingOrder, this.depthLayer);
            }

            Debug.Log($"[Rope {ropeId}] Initialized with 3D Mesh Physics");
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

            Debug.Log($"[Rope {ropeId}] Moved from Pin {oldPin?.PinId} to Pin {newPin.PinId}");
        }

        #endregion

        #region Collision Detection

        // ❌ CheckCollision() ve LineSegmentsIntersect3D() kaldırıldı.
        // Bu mantık artık RopeCollisionManager ve RopePhysics.CheckCollisionWith tarafından
        // fiziksel olarak 3D'de yapılıyor.

        // ❌ SetCollisionState(bool) kaldırıldı.
        // Renk değişimi için artık fiziksel bir duruma bakmıyoruz,
        // oyunun kazanma koşulu (LevelManager) karar verecek.
        
        #endregion

        #region Color

        // MeshRenderer'ı anında günceller
        public void SetColorImmediate(Color color)
        {
            if (meshRenderer == null) return;

            originalColor = color;
            colorTween?.Kill();
            
            // MaterialPropertyBlock kullanarak rengi set et (daha performanslı)
            meshRenderer.GetPropertyBlock(propertyBlock);
            propertyBlock.SetColor("_BaseColor", color); // URP/Lit için
            propertyBlock.SetColor("_Color", color); // Standard shader için
            meshRenderer.SetPropertyBlock(propertyBlock);
        }

        // Renk geçişini DOTween ile yapar
        public void SetColor(Color color)
        {
            if (meshRenderer == null) return;

            originalColor = color;
            colorTween?.Kill();

            meshRenderer.GetPropertyBlock(propertyBlock);
            Color currentColor = propertyBlock.GetColor("_BaseColor");

            colorTween = DOVirtual.Color(
                currentColor,
                color,
                0.3f,
                c =>
                {
                    if (meshRenderer != null)
                    {
                        propertyBlock.SetColor("_BaseColor", c);
                        propertyBlock.SetColor("_Color", c);
                        meshRenderer.SetPropertyBlock(propertyBlock);
                    }
                }
            ).SetEase(Ease.OutQuad);
        }
        
        #endregion

        #region Animations

        // ❌ PlayRollUpAnimation() ve StartRollUpSequence() kaldırıldı.
        // Bu animasyonlar LineRenderer'a özeldi.
        // 3D Mesh için bunun ya bir shader (dissolve) ile
        // ya da mesh'i küçülten bir animasyonla yapılması lazım.
        // Bu, temizlikten sonraki "yeni özellik" adımı.

        #endregion

        #region Gizmos

        private void OnDrawGizmos()
        {
            // Eski 2D çarpışma Gizm'osu kaldırıldı.
            // Gerçek fizik Gizm'osu artık RopePhysics.cs içinde.
            if (anchor != null && currentPin != null)
            {
                Gizmos.color = Color.gray;
                Gizmos.DrawLine(anchor.Position, currentPin.Position);
            }
        }

        #endregion
    }
}