using System;
using UnityEngine;
using Balance;
using Challenges;

namespace Common.Controllers
{
    public class LevelController : MonoBehaviour
    {
   //     string[] peso=new {"1","6","3","5"};
    //    string[] pos=new {"2x","3x","1x","3x"};
     //   string[] pose=new string[4]{{"1","2x"},{"6","3x"},{"3","1x"},{"5","3x"}};
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
      /*  public void NextChallenge()
        {

        }*/
        public void StartChallenge(int challengeId, string challengeX, string challengeP)
        {
            if (challengeId != -1)
            {
                PlayableChallenges[challengeId].gameObject.SetActive(true);
                PlayableChallenges[challengeId].StartChallenge(challengeX, challengeP);
            }
        }
        
        public void StartChallenge(int challengeId)
        {
            if (challengeId != -1)
            {
                PlayableChallenges[challengeId].gameObject.SetActive(true);
                PlayableChallenges[challengeId].StartChallenge();
            }
        }
        public void StartChallengeONLYWEIGHT(int challengeId,string[] peso,string nooblocks )
        {
            if (challengeId != -1)
            {
                PlayableChallenges[challengeId].gameObject.SetActive(true);
                PlayableChallenges[challengeId].StartChallengeONLYWEIGHT(peso,nooblocks);
            }
        }

    }
}