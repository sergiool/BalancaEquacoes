using WeightBlocks;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Balance
{
    public class MainBalance : MonoBehaviour
    {
        #region Global
        private float _totalWeight = 0;
        private float _totalWeightRightSide = 0;
        private float _totalWeightLeftSide = 0;
        //private bool _NoWeight = true;
        

        public float GetTotalWeight() => _totalWeight;

        public void RecalculateNoweight()
        {
             if(_totalWeightLeftSide==0 && _totalWeightRightSide==0)
                _NoWeight.SetActive(true);
            else
                _NoWeight.SetActive(false);
        }
       /* public void RecalculateNoweight()
        {
             if(_totalWeightLeftSide==0 && _totalWeightRightSide==0)
                _NoWeight= true;
            else
                _NoWeight= false;
        }
        public bool GetNoWeight()
        {
            RecalculateNoweight();
            return _NoWeight;
        }*/
        public void AddWeight(float weightValue)
        {
            if (weightValue < 0)
                _totalWeightRightSide -= weightValue;
            else
                _totalWeightLeftSide += weightValue;

            RecalculateTotalWeight();
            RecalculateNoweight();
        }
        public void RemoveWeight(float weightValue)
        {
            if (weightValue < 0)
                _totalWeightRightSide += weightValue;
            else
                _totalWeightLeftSide -= weightValue;

            RecalculateTotalWeight();
            RecalculateNoweight();
        }

        private void RecalculateTotalWeight()
        {
            _totalWeight = _totalWeightLeftSide - _totalWeightRightSide;

            if (_totalWeight == 0)
                BalancedState();
            else
                UnbalancedState(_totalWeight);
        }
        public void BalancedState()
        {
            _desiredRotationZ = 0;

            if (!_balancedVisualFeedback.activeSelf)
            {
                _balancedVisualFeedback.SetActive(true);
                _unbalancedVisualFeedback.SetActive(false);
            }

            if (_totalWeightLeftSide == 0 && _totalWeightRightSide == 0)
                _winSoundFeedback.Play();
        }
        public void UnbalancedState(float totalWeight)
        {
            if (totalWeight > 0)
                _desiredRotationZ = Mathf.Min(25.0f, (_totalWeightLeftSide / _totalWeightRightSide) * 6.875f);
            else
                _desiredRotationZ = Mathf.Max(-25.0f, -(_totalWeightRightSide / _totalWeightLeftSide) * 6.875f);

            if (_balancedVisualFeedback.activeSelf)
            {
                _unbalancedVisualFeedback.SetActive(true);
                _balancedVisualFeedback.SetActive(false);
            }
        }
        #endregion

        #region Game Juices
        [SerializeField]
        private GameObject _NoWeight;
        [SerializeField]
        private AudioSource _winSoundFeedback = null;
        [SerializeField]
        private GameObject _balancedVisualFeedback = null;
        [SerializeField]
        private GameObject _unbalancedVisualFeedback = null;

        private float _desiredRotationZ = 0;
        private float _rotationSpeedFlag = 2;
        
        public GameObject BalanceAxis = null;

        private void FixedUpdate()
        {
            if (_totalWeight == 0 && _totalWeightLeftSide == 0 && _totalWeightRightSide == 0)
                _desiredRotationZ = 5 * Mathf.Sin(Time.time);

            BalanceAxis.transform.rotation = Quaternion.Slerp(BalanceAxis.transform.rotation, Quaternion.Euler(0, 0, _desiredRotationZ), Time.fixedDeltaTime * _rotationSpeedFlag);
        }
        #endregion

        #region Hooks
        [Header("Hooks")]
        [SerializeField]
        private Hook[] _hooks;
        public Hook[] GetHooks()
        {
            return _hooks;
        }

        private float _minDistanceToHookCollision = 2;
        public Hook CheckHookCollision(WeightBlock weightBlock)
        {
            if (weightBlock.Mass > 0)
            {
                for (int i = 0; i < _hooks.Length / 2; i++)
                {
                    if (Vector3.Distance(_hooks[i].transform.position, weightBlock.transform.position) <= _minDistanceToHookCollision)
                    {
                        return _hooks[i].HookWeightBlock(weightBlock);
                    }
                }
            }
            else
            {
                for (int i = _hooks.Length / 2; i < _hooks.Length; i++)
                {
                    if (Vector3.Distance(_hooks[i].transform.position, weightBlock.transform.position) <= _minDistanceToHookCollision)
                    {
                        return _hooks[i].HookWeightBlock(weightBlock);
                    }
                }
            }
            return null;
        }

        #endregion
    }
}

