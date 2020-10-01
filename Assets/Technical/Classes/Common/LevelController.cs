using System;
using UnityEngine;
using Balance;
using Challenges;

namespace Common.Controllers
{
    public class LevelController : MonoBehaviour
    {
        public MainBalance MainBalance;

        public Challenge[] PlayableChallenges;
        private void SetChallenges()
        {
            for (int i = 0; i < PlayableChallenges.Length; i++)
            {
                PlayableChallenges[i].gameObject.SetActive(false);
            }
        }
        private void OnEnable()
        {
            SetChallenges();
        }

        public void StartChallenge(int challengeId)
        {
            if (challengeId != -1)
            {
                PlayableChallenges[challengeId].gameObject.SetActive(true);
                PlayableChallenges[challengeId].StartChallenge();
            }
        }

    }
}