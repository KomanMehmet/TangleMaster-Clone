using UnityEngine;

namespace _Project.Scripts.Core.EventChannels 
{
    public abstract class EventChannelBase : ScriptableObject
    {
        [TextArea(3, 5)] 
        [SerializeField] private string description;
        
        public string Description => description;
    }
}