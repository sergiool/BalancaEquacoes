using Balance;
using UnityEngine;

namespace Assets.Technical.Classes.Utility
{
    class WeightLEGACY : MonoBehaviour
    {
        public AudioSource audioImpact;
        public AudioSource audioGrab;

        public GameObject smokeImpact;

        public Texture2D cursorOpen;
        public Texture2D cursorGrab;
        public CursorMode cursorMode = CursorMode.Auto;
        public Vector2 hotSpot = Vector2.zero;

        public GameObject particulaPuff;
        float massa = 30;
        Rigidbody rb;
        bool podeAdicionarMassa;
        public TextMesh texto;
        RaycastHit hit;
        RaycastHit hitTarg;
        int layerHit;

        bool arrastando;

        Vector3 pos;
        Vector3 finalPos;

        private void Start()
        {
            GameObject p = Instantiate(particulaPuff, this.transform.position + new Vector3(0, 0, -4.5f), this.transform.rotation);
            Destroy(p, 2.0f);
            rb = this.GetComponent<Rigidbody>();
            podeAdicionarMassa = false;
            layerHit = 0;
            smokeImpact.SetActive(false);
        }

        public void setMassa(float valorMassa, float valorRelativoMassa, string tipo)
        {
            massa = valorMassa;
            if (valorRelativoMassa < 99) texto.text = valorRelativoMassa + " " + tipo;
            else texto.text = valorRelativoMassa + "\n" + tipo;
        }

        public float getMassa()
        {
            return massa;
        }

        private void Update()
        {
            if (arrastando)
            {
                pos = Input.mousePosition;
                pos.z = transform.position.z - Camera.main.transform.position.z;
                finalPos = Camera.main.ScreenToWorldPoint(pos);
                if (finalPos.x > -13.6f && finalPos.x < 13.6f && finalPos.y > -4.8f && finalPos.y < 8.75f) transform.position = finalPos;
                else arrastando = false;

                if (rb.useGravity) rb.useGravity = false;
                this.gameObject.GetComponent<BoxCollider>().isTrigger = true;
                podeAdicionarMassa = true;
            }
            else
            {
                this.gameObject.GetComponent<BoxCollider>().isTrigger = false;
                if (!rb.useGravity) rb.useGravity = true;
            }

            if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100, 1 << LayerMask.NameToLayer("Bloco")))
            {
                if (hit.transform == this.transform && Input.GetMouseButton(0) && !arrastando)
                {
                    audioGrab.Play();
                    Cursor.SetCursor(cursorGrab, hotSpot, cursorMode);
                    arrastando = true;
                }
                if (Input.GetMouseButtonUp(0))
                {
                    if (arrastando)
                    {
                        audioGrab.Play();
                        arrastando = false;
                        Cursor.SetCursor(cursorOpen, hotSpot, cursorMode);
                    }
                }
            }
            else
            {
                this.gameObject.GetComponent<BoxCollider>().isTrigger = false;
                if (!rb.useGravity) rb.useGravity = true;
            }

            if (hit.transform == this.transform && Input.GetMouseButton(1))
            {
                if (layerHit == 9) hitTarg.transform.GetComponent<BallancePlateLEGACY>().remPeso(this);
                GameObject p = Instantiate(particulaPuff, this.transform.position + new Vector3(0, 0, -4.5f), this.transform.rotation);
                Destroy(p, 2.0f);
                Destroy(this.gameObject);
            }
        }

        private void OnCollisionEnter(Collision collision)
        {
            smokeImpact.SetActive(false);
            smokeImpact.SetActive(true);
            if (!audioImpact.isPlaying) audioImpact.Play();
            if (Physics.Raycast(transform.position, -Vector3.up, out hitTarg, 10, 1 << LayerMask.NameToLayer("Prato")) && podeAdicionarMassa)
            {
                hitTarg.transform.GetComponent<BallancePlateLEGACY>().addPeso(this);
                this.transform.SetParent(hitTarg.transform);
                podeAdicionarMassa = false;
                layerHit = 9;
            }
        }

        private void OnCollisionExit(Collision collision)
        {
            if (Physics.Raycast(transform.position, -Vector3.up, out hitTarg, 10, 1 << LayerMask.NameToLayer("Prato")) && podeAdicionarMassa)
            {
                hitTarg.transform.GetComponent<BallancePlateLEGACY>().remPeso(this);
                this.transform.SetParent(null);
                podeAdicionarMassa = false;
                layerHit = 0;
            }
        }
    }
}
