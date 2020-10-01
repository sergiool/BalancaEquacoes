using WeightBlocks;
using System;
using UnityEngine;
using System.Collections.Generic;
using Common.Controllers;

namespace Balance
{
    public class Hook : MonoBehaviour
    {
        Quaternion[] _weightBlockRotationInSameHook = new Quaternion[6];

        private MainBalance _mainBalance;
        private void Start()
        {
            _mainBalance = GameController.Singleton.LevelController.MainBalance;
            _weightBlockRotationInSameHook[0] = Quaternion.Euler(-6.222f, 1.405f, -21.31f);
            _weightBlockRotationInSameHook[1] = Quaternion.Euler(-6.036f, -2.065f, 18.924f);
            _weightBlockRotationInSameHook[2] = Quaternion.Euler(-1.914f, -6.085001f, 72.60101f);
            _weightBlockRotationInSameHook[3] = Quaternion.Euler(43.628f, 40.179f, -53.327f);
            _weightBlockRotationInSameHook[4] = Quaternion.Euler(-38.809f, 7.916f, 4.55f);
            _weightBlockRotationInSameHook[5] = Quaternion.Euler(-36.648f, -27.702f, 41.337f);
        }

        private void Update()
        {
            this.transform.rotation = Quaternion.Euler(0.0f, 0.0f, _mainBalance.BalanceAxis.transform.rotation.z * -1);
        }

        List<WeightBlock> _weightBlocks = new List<WeightBlock>();

        [SerializeField]
        private float _hookCoefficient;

        public Hook UnhookWeightBlock(WeightBlock weightBlock)
        {
            _mainBalance.RemoveWeight(weightBlock.Mass * _hookCoefficient);
            _weightBlocks.Remove(weightBlock);
            UpdateWeightBlocksRotationInHook();
            return null;
        }

        public Hook HookWeightBlock(WeightBlock weightBlock)
        {
            _weightBlocks.Add(weightBlock);
            _mainBalance.AddWeight(weightBlock.Mass * _hookCoefficient);
            UpdateWeightBlocksRotationInHook();
            return this;
        }

        private void UpdateWeightBlocksRotationInHook()
        {
            if (_weightBlocks.Count == 1)
            {
                _weightBlocks[0].transform.rotation = Quaternion.Euler(-6.378f, 0, 0);
            }
            else
            {
                foreach (WeightBlock weightBlock in _weightBlocks)
                {
                    if (_weightBlocks.IndexOf(weightBlock) < 6)
                        weightBlock.transform.rotation = _weightBlockRotationInSameHook[_weightBlocks.IndexOf(weightBlock)];
                    else 
                        weightBlock.transform.rotation = _weightBlockRotationInSameHook[5];
                }
            }
        }
    }
}