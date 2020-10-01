using UnityEngine;
using UnityEngine.EventSystems;

namespace HUD
{
    public class HoverScaleText : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
    {
        [SerializeField]
        private GameObject _textToScale;

        public void OnPointerEnter(PointerEventData eventData)
        {
            _textToScale.transform.localScale = Vector3.one * 1.1f;
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            _textToScale.transform.localScale = Vector3.one;
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            _textToScale.transform.localScale = Vector3.one * 0.9f;
        }
    }
}
