using Common.Controllers;
using UnityEngine;
using UnityEngine.EventSystems;

namespace WeightBlocks
{
    public abstract class WeightBlockCreator : MonoBehaviour, IPointerDownHandler
    {
        [SerializeField] 
        protected float _weightValue;
        [SerializeField] 
        protected int _unitValue;

        public virtual void OnPointerDown(PointerEventData eventData)
        {
            GameController.Singleton.BlockController.CreateDefaultBlock(_weightValue, _unitValue, this.transform.position);
        }
    }
}
