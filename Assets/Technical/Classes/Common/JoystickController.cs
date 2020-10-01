using UnityEngine;
using WeightBlocks;

namespace Common.Controllers
{
    public class JoystickController: MonoBehaviour
    {
        delegate void JoystickState();
        private JoystickState _actualJoystickState;

        private void Start()
        {
            _actualJoystickState = IdleState;
        }

        private void Update()
        {
            _actualJoystickState();
        }

        private Ray ray;
        private RaycastHit hit;

        #region Cursor
        public Texture2D cursorOpenSprite;
        public Texture2D cursorGrabSprite;
        public CursorMode cursorMode = CursorMode.Auto;
        #endregion

        public void IdleState()
        {
            if (Input.GetMouseButtonDown(0))
            {
                Cursor.SetCursor(cursorGrabSprite, Vector2.zero, cursorMode);

                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit, 20))
                {
                    if (hit.transform.gameObject.layer == 8)
                    {
                        hit.transform.GetComponent<WeightBlock>().Select();
                        _actualJoystickState = DragState;
                    }
                }
            }

            if (Input.GetMouseButtonDown(1))
            {
                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out hit, 20))
                {
                    if (hit.transform.gameObject.layer == 8)
                    {
                        hit.transform.GetComponent<WeightBlock>().Destroy();
                    }
                }
            }

            if (Input.GetMouseButtonUp(0))
            {
                Cursor.SetCursor(cursorOpenSprite, Vector2.zero, cursorMode);
            }
        }

        public void DragState()
        {
            if (Input.GetMouseButton(0))
            {
                BlockController.SelectedWeightBlock.Move(Input.mousePosition);
            }
            if (Input.GetMouseButtonUp(0))
            {
                Cursor.SetCursor(cursorOpenSprite, Vector2.zero, cursorMode);
                BlockController.SelectedWeightBlock.Deselect();
                _actualJoystickState = IdleState;
            }
        }
    }
}