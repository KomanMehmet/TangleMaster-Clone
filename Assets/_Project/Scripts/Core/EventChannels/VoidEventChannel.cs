using System;
using UnityEngine;

namespace _Project.Scripts.Core.EventChannels
{
    [CreateAssetMenu(fileName = "New Void Event", menuName = "TangleMaster/Events/Void Event")]
    public class VoidEventChannel : EventChannelBase
    {
        private event Action OnEventRaised;

        public  void AddListener(Action listener)
        {
            OnEventRaised += listener;
        }
        
        public void RemoveListener(Action listener)
        {
            OnEventRaised -= listener;
        }

        public void RaiseEvent()
        {
            OnEventRaised?.Invoke();

#if UNITY_EDITOR
            if (OnEventRaised == null)
            {
                Debug.LogWarning($"Event '{name}' was raised but has no listeners.", this);
            }
#endif
        }

        public void ClearAllListeners()
        {
            OnEventRaised = null;
        }
    }
}