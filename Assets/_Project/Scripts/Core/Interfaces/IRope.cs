using UnityEngine;

namespace _Project.Scripts.Core.Interfaces
{
    public interface IRope
    {
        int RopeId { get; }
        
        IPin StartPin { get; }
        
        IPin EndPin { get; }
        
        bool IsColliding { get; }
        
        void Initialize(IPin startPin, IPin endPin);
        
        void UpdateRope();
        
        bool CheckCollision(IRope otherRope);
        
        void SetColor(Color color);
        
        void SetHighlight(bool highlighted);
    }
}