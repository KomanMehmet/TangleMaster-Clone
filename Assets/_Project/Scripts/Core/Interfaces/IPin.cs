using UnityEngine;

namespace _Project.Scripts.Core.Interfaces
{
    public interface IPin
    {
        int PinId { get; }
        
        Vector3 Position { get; }
        
        Transform Transform { get; }
        
        bool IsDragging { get; }
        
        bool IsDraggable { get; }
        
        void OnSelected();
        
        void OnDeselected();
        
        void UpdatePosition(Vector3 newPosition);
    }
}