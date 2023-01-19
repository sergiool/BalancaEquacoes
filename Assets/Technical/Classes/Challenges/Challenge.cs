using System;
using UnityEngine;

namespace Challenges
{
    public abstract class Challenge : MonoBehaviour
    {
        public virtual void StartChallenge() { }
        public virtual void StartChallenge(string challengeX, string challengeP) { }
        public virtual void StartChallengeONLYWEIGHT(string[] pes,string nooblocks ) { }
        /*public static void Weightcheck() 
            {
            int _totalWeight=MainBalance.GetTotalWeight;

            if (_totalWeight == 0)
                _answerCorrectionFeedback.text = "Correto !";
                _confirmAnswerButton.SetActive(false);
                _nextChallengeButton.SetActive(true);
                MainBalance.BalancedState();
            else
                MainBalance.UnbalancedState(_totalWeight);
            }
        */
    }
}