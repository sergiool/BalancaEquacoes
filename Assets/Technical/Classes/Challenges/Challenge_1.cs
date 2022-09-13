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

        private int _desiredHook;
        private int _numberOfWeightBlocks;
        private float _trueWeight;
        private float _convertedWeight;

        public override void StartChallenge(string challengeP)
        {
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
            }

            if (GameController.Singleton.LevelController.MainBalance.GetTotalWeight() == 0)
            {
                GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
            }

            Debug.Log("True Weight: " + _trueWeight);
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
    }
}