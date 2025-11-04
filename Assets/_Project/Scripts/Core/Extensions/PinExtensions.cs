using _Project.Scripts.Core.Interfaces;
using DG.Tweening;
using UnityEngine;

namespace _Project.Scripts.Core.Extensions
{
    public static class PinExtensions
    {
        public static Tween MoveTo(this IPin pin, Vector3 targetPosition, float duration = 0.5f, Ease ease = Ease.OutQuad)
        {
            return pin.Transform.DOMove(targetPosition, duration).SetEase(ease);
        }
        
        public static Tween JumpTo(this IPin pin, Vector3 targetPosition, float jumpPower = 1f, int numJumps = 1, float duration = 1f)
        {
            return pin.Transform.DOJump(targetPosition, jumpPower, numJumps, duration);
        }
        
        public static Tween PunchScale(this IPin pin, float strength = 0.5f, float duration = 0.3f)
        {
            return pin.Transform.DOPunchScale(Vector3.one * strength, duration, vibrato: 10, elasticity: 1f);
        }
    }
}