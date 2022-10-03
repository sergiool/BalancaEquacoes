using System;
using UnityEngine;

namespace Challenges
{
    public abstract class Challenge : MonoBehaviour
    {
        public virtual void StartChallenge() { }
        public virtual void StartChallenge(string challengeX, string challengeP) { }
        
    }
}