using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using Balance;
//using RestAPI3;

namespace Common.Controllers
{
    
    public class GameController : MonoBehaviour
    {
        [SerializeField]
        private Text _nivelFeedback;
        int cop=0;
        static string[] peso={"1","2","3","1","4"};
        static string[] peso2={"3","4","2","3","4"};
        static string[] peso3={"2","1","1","4","2"};
        static string[] peso4={"1","1","4","4","2"};
        List<string[]> fases=new List<string[]>() {peso,peso2,peso3,peso4};
        string[] pes={"1","6","3","5","10"};
        string[] pos={"2x","6x","2x","4x","7x"};   
        public static GameController Singleton { get; set; }
        //public static Balance;

        private void Awake()
        {
            if (Singleton == null)
                Singleton = this;
            else if (Singleton != this)
                Destroy(this.gameObject);
        }

        #region Controllers
        public LevelController LevelController = null;
        public BlockController BlockController = null;
        public JoystickController JoystickController = null;
        #endregion

        #region Game Modes
        public GameObject Menu;
        public GameObject Game;
        public GameObject RAP;
       //RestAPI3 restapi=new Script();

        [SerializeField]
        private InputField _answerInputValueX;
        [SerializeField]
        private InputField _answerInputValueEq;
        [SerializeField]
        private InputField _userfilename;
        [SerializeField]
        private InputField _userposition;
        [SerializeField]
        private InputField _userweight;
        [SerializeField]
        private GameObject _filesearchfail;

        public void StartGame(int gameModeId)
        {
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallenge(challengeId: gameModeId);
        }
        public void StartCustomGame(int gameModeId)
        {
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallenge(challengeId: gameModeId, _answerInputValueX.text, _answerInputValueEq.text);
        }
        public void StartPreGame(int gameModeId)
        {
            cop=0;
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallenge(challengeId: gameModeId, pos[cop], pes[cop]);
            cop++;
            _nivelFeedback.text="Fase "+cop;
        }
        public void NextChallenge(int gameModeId)
        {
            if(cop>4)
            {
                cop=0;
                Menu.SetActive(true);
                Game.SetActive(false);
                GameController.Singleton.BlockController.ResetWeightBlocks();
                _nivelFeedback.text="";
            }
            else{
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallenge(challengeId: gameModeId, pos[cop], pes[cop]);
            cop++;
            _nivelFeedback.text="Fase "+cop;
            }
        }

               
        public void StartPre0Game(int gameModeId)
        {
            cop=0;
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallengeONLYWEIGHT(challengeId: gameModeId, fases[cop] ,"5");
            cop++;
            _nivelFeedback.text="Fase "+cop;
        }
        //JOGAR POR MEIO DE UM DATABASE ONLINE
        public void StartAPIGame(int gameModeId)
        {
            string[] phase=RAP.GetComponent<RestAPI3>().Apistring();
            RAP.GetComponent<RestAPI3>().start();   
            Debug.Log(phase[0]);
            Debug.Log(phase[1]);
            if(phase[0]=="-99"){
                _filesearchfail.SetActive(true);
            }
            else{
                Menu.SetActive(false);
                Game.SetActive(true);
               // GameController.Singleton.BlockController.ResetWeightBlocks();
                LevelController.StartChallenge(challengeId: gameModeId,phase[1],phase[0]);
            }
        }
        //BUSCADOR DO API 

        public void ApiGame(int gameModeId){
            StartCoroutine(getstringG(gameModeId));
        }

        IEnumerator getstringG(int gameModeId)
        { 
            yield return StartCoroutine(RAP.GetComponent<RestAPI3>().GetData(_userfilename.text));
            StartAPIGame(gameModeId);
        }
        
        //JOGAR POR UM ARQUIVO LOCAL BAIXADO
        public void StartOGame(int gameModeId)
        {
            string[] phase=DetectFile(_userfilename.text);
            if(phase[0]=="-99"){
                _filesearchfail.SetActive(true);
            }
            else{
                Menu.SetActive(false);
                Game.SetActive(true);
                GameController.Singleton.BlockController.ResetWeightBlocks();
                LevelController.StartChallenge(challengeId: gameModeId,phase[0],phase[1]);
            }
        }
        //BUSCADOR DO ARQUIVO
        public string[] DetectFile(string userinput)
        {
            userinput+=".txt";
            string localFile = Application.streamingAssetsPath+ "/"+ userinput;
            if(!File.Exists(localFile)){
                Debug.Log("Nenhum arquivo encontrado");
                return new string[] {"-99","1"};
            }
            else{
                string[] pesoeposi;
                pesoeposi=File.ReadAllLines(localFile);
                Debug.Log("Arquivo encontrado");
                return pesoeposi;
            }
        }


        public void NextChallenge0weight(int gameModeId)
        {
            if(cop>3)
            {
                cop=0;
                Menu.SetActive(true);
                Game.SetActive(false);
                GameController.Singleton.BlockController.ResetWeightBlocks();
                _nivelFeedback.text="";
            }
            else{
            Menu.SetActive(false);
            Game.SetActive(true);
            GameController.Singleton.BlockController.ResetWeightBlocks();
            LevelController.StartChallengeONLYWEIGHT(challengeId: gameModeId, fases[cop] ,"5");
            cop++;
            _nivelFeedback.text="Fase "+cop;;
            }
        }
        
        public void ExitGame()
        {
            Application.Quit();
            #if UNITY_EDITOR
               UnityEditor.EditorApplication.isPlaying = false;
            #endif
        }
        #endregion

        #region Audio
        public AudioSource ClickSound;
        public void PlayClickSound()
        {
            ClickSound.Stop();
            ClickSound.Play();
        }
        #endregion
    }
}

