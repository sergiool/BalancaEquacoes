using UnityEngine;
using WeightBlocks;
using System.Collections.Generic;

namespace Common.Controllers
{
    public class BlockController : MonoBehaviour
    {
        private List<WeightBlock> _blocks = new List<WeightBlock>();

        [SerializeField]
        public static WeightBlock SelectedWeightBlock { get; set; } = null;

        #region Block Creation
        [SerializeField]
        private GameObject[] _weightBlockPrefab = null;

       // [SerializeField]
       // private GameObject[] _weightBlockInitialPositions = null;

        [SerializeField]
        private GameObject[] _weightBlockKitInitialPositions = null;

        public void CreateDefaultBlock(float weightValue, int unitValue, Vector3 weightBlockPosition)
        {
            GameController.Singleton.PlayClickSound();

            weightBlockPosition.z = 2.148f;

            var weightBlockPrefabIndex = 0;

            if (weightValue > 0)
            {
                if (weightValue <= 1)
                {
                    weightBlockPrefabIndex = 0;
                }
                else
                {
                    weightBlockPrefabIndex = Mathf.Min(3, (int)weightValue - 1);
                }
            }
            else
            {
                weightBlockPrefabIndex = 4;
            }

            WeightBlock newWeightBlock = Instantiate(_weightBlockPrefab[weightBlockPrefabIndex], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
            _blocks.Add(newWeightBlock);
            newWeightBlock.SetBlock(weightValue, unitValue);
        }

        public void CreateChallengeBlock(int randomWeight, float weightValue, int weightUnit, Vector3 weightBlockPosition)
        {
            WeightBlock newWeightBlock;

            weightBlockPosition.z = 2.148f;

            if (randomWeight < 0)
            {
                newWeightBlock = Instantiate(_weightBlockPrefab[6], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
            }
            else
            {
                newWeightBlock = Instantiate(_weightBlockPrefab[5], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
            }

            _blocks.Add(newWeightBlock);
            newWeightBlock.SetBlock(weightValue, weightUnit);
            newWeightBlock.Deselect();
        }

        public void CreateBlockKit()
        {
            GameController.Singleton.PlayClickSound();

            for (int i = 0; i < 16; i++)
            {
                if (i < 4)
                {
                    CreateDefaultBlock(1, 0, _weightBlockKitInitialPositions[i].transform.position);
                }
                else if (i < 8)
                {
                    CreateDefaultBlock(2, 0, _weightBlockKitInitialPositions[i].transform.position);
                }
                else if (i < 12)
                {
                    CreateDefaultBlock(3, 0, _weightBlockKitInitialPositions[i].transform.position);
                }
                else if (i < 16)
                {
                    CreateDefaultBlock(4, 0, _weightBlockKitInitialPositions[i].transform.position);
                }
            }
        }

        #endregion
        public void RemoveWeightBlockReferenceFromGame(WeightBlock weightBlock)
        {
            _blocks.Remove(weightBlock);
        }

        public void ResetWeightBlocks()
        {
            while (_blocks.Count > 0)
            {
                _blocks[0].Destroy();
            }
        }

    }
}
