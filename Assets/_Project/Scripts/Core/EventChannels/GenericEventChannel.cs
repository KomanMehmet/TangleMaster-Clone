using System;
using UnityEngine;

namespace _Project.Scripts.Core.EventChannels
{
    public abstract class GenericEventChannel<T> : EventChannelBase
    {
        private event Action<T> OnEventRaised;

        public void AddListener(Action<T> listener)
        {
            OnEventRaised += listener;
        }
        
        public void RemoveListener(Action<T> listener)
        {
            OnEventRaised -= listener;
        }

        public void RaiseEvent(T data)
        {
            OnEventRaised?.Invoke(data);

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