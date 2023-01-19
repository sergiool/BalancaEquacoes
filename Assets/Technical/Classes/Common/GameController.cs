using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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

        [SerializeField]
        private InputField _answerInputValueX;
        [SerializeField]
        private InputField _answerInputValueEq;

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

