using Common.Controllers;
using System;
using UnityEngine;
using UnityEngine.UI;
using Utility;
using WeightBlocks;
using Random = UnityEngine.Random;

namespace Challenges
{
    public class Challenge_1 : Challenge
    {
        [SerializeField]
        private GameObject _nextChallengeButton;
        private float _trueWeight;

        public override void StartChallenge()
        {
            int _desiredHook=0;
            int _numberOfWeightBlocks;
            float _trueWeight;
            float _convertedWeight;

            _confirmAnswerButton.SetActive(true);
            _nextChallengeButton.SetActive(false);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            _numberOfWeightBlocks = Random.Range(1, 4);

            int randomWeight = Random.Range(-1, 1);

            do
            {
                _convertedWeight = Random.Range(-100, 100);
                _convertedWeight /= 10;
            } while (_convertedWeight == 0);

            _trueWeight = WeightUnitConverter.TrueWeight(_convertedWeight, 0);
            _answerInputValue.text = "";
            _answerCorrectionFeedback.text = "";
            
            Debug.Log("Number: " + _numberOfWeightBlocks);
            
            for (int i = 0; i < _numberOfWeightBlocks; i++)
            {
                if (randomWeight < 0)
                {
                    _desiredHook = Random.Range(8, 16);
                }
                else
                {
                    _desiredHook = Random.Range(0, 8);
                }

                GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
                Debug.Log("True Weight: " + _trueWeight + ", randomWeight: " + randomWeight + ", _convertedWeight: " + _convertedWeight+ ", _desiredHook: " + _desiredHook);
            }

            if (GameController.Singleton.LevelController.MainBalance.GetTotalWeight() == 0)
            {
                GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
            }

        }

        [SerializeField]
        private InputField _answerInputValue;
        [SerializeField]
        private Dropdown _answerInputUnit;
        [SerializeField]
        private GameObject _confirmAnswerButton;
        [SerializeField]
        private Text _answerCorrectionFeedback;
        public void CheckAnswer()
        {
            if (_answerInputValue.text != "")
            {
                float answer = WeightUnitConverter.TrueWeight(float.Parse(_answerInputValue.text), _answerInputUnit.value);
                if (answer == _trueWeight)
                {
                    _answerCorrectionFeedback.text = "Correto !";
                    _confirmAnswerButton.SetActive(false);
                    _nextChallengeButton.SetActive(true);
                }
                else
                {
                    _answerCorrectionFeedback.text = "Incorreto !";
                }
            }
        }

        public override void StartChallenge(string challengeX, string challengeP)
        {
            int _desiredHook=0;
            float _convertedWeight;

            _confirmAnswerButton.SetActive(true);
            _nextChallengeButton.SetActive(false);
            GameController.Singleton.BlockController.ResetWeightBlocks();


/*            _numberOfWeightBlocks = Random.Range(1, 4);

            int randomWeight = Random.Range(-1, 1);

            do
            {
                _convertedWeight = Random.Range(-100, 100);
                _convertedWeight /= 10;
            } while (_convertedWeight == 0); */

            _convertedWeight = int.Parse(challengeP);

            _trueWeight = WeightUnitConverter.TrueWeight(_convertedWeight, 0);
            _answerInputValue.text = "";
            _answerCorrectionFeedback.text = "";
            
          //  Debug.Log("Number: " + _numberOfWeightBlocks);
            
            int randomWeight = 0;
            bool left = true;
            int hook = 1;
            for (int i = 0; i < challengeX.Length; i++)
            {
                switch (challengeX[i]){
                    case '-': 
                        randomWeight = -1;
                    break;
                    case '+':
                        randomWeight = 0;
                    break;
                    case '=':
                        left = false;
                    break;
                    case 'x':
                    case 'X':
                        _desiredHook = (left) ? hook+3 : hook-1;
                        if (randomWeight == -1){
                            _desiredHook = _desiredHook + 8;
                        }
                        GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
                        Debug.Log("True Weight: " + _trueWeight + ", randomWeight: " + randomWeight + ", _convertedWeight: " + _convertedWeight+ ", _desiredHook: " + _desiredHook);
                        hook=1;
                        randomWeight = 0;
                    break;
                    default: // 7 6 5 4 0 1 2 3 / 15 14 13 12 8 9 10 11 
                        if (Char.IsDigit(challengeX[i])){
                            hook = (int) Char.GetNumericValue(challengeX[i]);
                        }
                    break;

                }


            }

           /* if (GameController.Singleton.LevelController.MainBalance.GetTotalWeight() == 0)
            {
                GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
            }*/

        }
    }

    
}