using UnityEngine;

namespace _Project.Scripts.Core.Interfaces
{
    public interface IInputProvider
    {
        bool IsInputActive { get; }
        
        Vector2 InputPosition { get; }
        
        Vector3 GetWorldPosition(Camera camera);

        void Enable();
        
        void Disable();
    }
}