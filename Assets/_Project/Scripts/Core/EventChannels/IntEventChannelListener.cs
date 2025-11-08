using System;
using UnityEngine;
using UnityEngine.Events;

namespace _Project.Scripts.Core.EventChannels
{
    public class IntEventChannelListener : MonoBehaviour
    {
        [Header("Event Channel")]
        [SerializeField] private IntEventChannel eventChannel;

        [Header("Response")] 
        [SerializeField] private UnityEvent<int> response;

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

        private void OnEventRaised(int value)
        {
            response?.Invoke(value);
        }
    }
}