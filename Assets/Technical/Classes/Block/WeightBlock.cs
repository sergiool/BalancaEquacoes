using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utility;
using Common.Controllers;
using Balance;

namespace WeightBlocks
{
    public class WeightBlock : MonoBehaviour
    {
        #region WeightBlock Setup
        private Rigidbody _rb = null;

        [SerializeField] 
        private Renderer _textRenderer = null;

        private void Start()
        {
            _textRenderer.material.renderQueue = 3990;
            _rb = this.GetComponent<Rigidbody>();
        }

        [SerializeField]
        private TextMesh _weightValueVisualText = null;

        [SerializeField]
        private TextMesh _weightUnitVisualText = null;

        IDictionary weightUnitDictionary = new Dictionary<int, string>()
        {
            { 0, "Kg" },
            { 1, "Hg" },
            { 2, "Dg" },
            { 3, "g" },
            { 4, "dg" },
            { 5, "cg" },
            { 6, "mg" },
        };

        private float _boundaryPositionY = 0;
        private float _boundaryPositionX = 0;
        public void SetBlock(float weightValue, int unitValue)
        {
            Mass = WeightUnitConverter.TrueWeight(weightValue, unitValue); ;

            if (_weightValueVisualText != null&&weightValue>0)
                _weightValueVisualText.text = weightValue.ToString();
            else if(_weightValueVisualText != null&&weightValue<0)
                _weightValueVisualText.text = (weightValue*-1).ToString();
            if (_weightUnitVisualText != null)
                _weightUnitVisualText.text = weightUnitDictionary[unitValue].ToString();

            if (Mass > 0)
            {
                _boundaryPositionY = 11.4f;
                _boundaryPositionX = 16.42f;
            }
            else
            {
                _boundaryPositionY = 8.2f;
                _boundaryPositionX = 16.25f;
            }

            BlockController.SelectedWeightBlock = this;
        }

        #endregion

        #region WeightBlock Physics
        private bool _gravityEnabledFlag = true;
        public float Mass { get; private set; } = 0;

        private void FixedUpdate()
        {
            if (_gravityEnabledFlag)
            {
                if (Mass >= 0) 
                    _rb.velocity += Physics.gravity * Time.fixedDeltaTime;
                else
                    _rb.velocity -= Physics.gravity * Time.fixedDeltaTime;
            }
            else
            {
                _rb.velocity = Vector3.zero;
            }
        }

        [SerializeField]
        private AudioSource _impactSound = null;
        [SerializeField]
        private GameObject _impactVfxPrefab = null;
        public void OnCollisionEnter(Collision collision)
        {
            if (_impactVfxPrefab != null)
            {
                if (collision.transform.gameObject.layer == 10)
                {
                    _impactVfxPrefab.SetActive(false);
                    _impactVfxPrefab.SetActive(true);
                    _impactSound.Play();
                }
            }
        }

        #endregion

        #region WeightBlock Interactions
        protected Hook _hookBelonging;

        private Vector3 _actualPosition = Vector3.zero;
        public void Move(Vector3 desiredPosition)
        {
            if (this.transform.rotation.z != 0)
            {
                this.transform.rotation = Quaternion.Euler(-6.378f, 0, 0);
            }
            _actualPosition = Camera.main.ScreenToWorldPoint(desiredPosition);
            _actualPosition.z = 2.17f;
            _actualPosition.x = Mathf.Clamp(_actualPosition.x, -1 * _boundaryPositionX, _boundaryPositionX);
            _actualPosition.y = Mathf.Clamp(_actualPosition.y, -2.57f, _boundaryPositionY);
            this.transform.position = _actualPosition;
        }

        [SerializeField]
        private AudioSource _grabSound = null;
        public void Select()
        {
            if (_hookBelonging != null)
            {
                _hookBelonging.GetComponent<Hook>().UnhookWeightBlock(this);
                this.transform.SetParent(null);
                _hookBelonging = null;
            }

            _gravityEnabledFlag = false;
            _grabSound.Play();

            BlockController.SelectedWeightBlock = this;
        }

        public void Deselect()
        {
            BlockController.SelectedWeightBlock = null;

            _hookBelonging = GameController.Singleton.LevelController.MainBalance.CheckHookCollision(this);

            if (_hookBelonging != null)
            {
                this.transform.position = _hookBelonging.transform.position + new Vector3(0, -0.123f, 0);
                this.transform.parent = _hookBelonging.transform;
                _gravityEnabledFlag = false;
            }
            else
            {
                _gravityEnabledFlag = true;
            }
        }

        [SerializeField]
        private GameObject _puffVfxPrefab = null;
        [SerializeField]
        private float _puffVfxPositionAdjustment = 0;
        public void Destroy()
        {
            if (_hookBelonging != null)
            {
                _hookBelonging.GetComponent<Hook>().UnhookWeightBlock(this);
            }
            if (_puffVfxPrefab != null)
            {
                GameObject g = Instantiate(_puffVfxPrefab, this.transform.position + new Vector3(0, _puffVfxPositionAdjustment, -4.5f), this.transform.rotation);
                Destroy(g.gameObject, 2.0f);
            }
            GameController.Singleton.BlockController.RemoveWeightBlockReferenceFromGame(this);

            Destroy(this.gameObject);
        }

        #endregion
    }
}