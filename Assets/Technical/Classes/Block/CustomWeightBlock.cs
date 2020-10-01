using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace WeightBlocks
{
    public class CustomWeightBlock : WeightBlockCreator
    {
        [SerializeField] InputField weightField;
        [SerializeField] Dropdown weightUnit;

        int prefabIndex;

        public override void OnPointerDown(PointerEventData eventData)
        {
            _weightValue = float.Parse(weightField.text);
            _unitValue = weightUnit.value;
            base.OnPointerDown(eventData);
        }
    }
}
