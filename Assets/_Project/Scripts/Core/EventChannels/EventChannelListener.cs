using System;
using UnityEngine;
using UnityEngine.Events;

namespace _Project.Scripts.Core.EventChannels
{
    public class EventChannelListener : MonoBehaviour
    {
        [Header("Event Channel")] 
        [Tooltip("The event channel to listen to")] 
        [SerializeField] private VoidEventChannel eventChannel;
        
        [Header("Response")]
        [Tooltip("Unity event to invoke when event is raised")]
        [SerializeField] private UnityEvent response;

        private void OnEnable()
        {
            if (eventChannel != null)
            {
                eventChannel.AddListener(OnEventRaised);
            }
        }
        
        private void OnDisable()
        {
            if (eventChannel != null)
            {
                eventChannel.RemoveListener(OnEventRaised);
            }
        }

        private void OnEventRaised()
        {
            response?.Invoke();
        }
    }
}