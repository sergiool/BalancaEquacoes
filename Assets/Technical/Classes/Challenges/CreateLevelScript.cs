using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class CreateLevelScript : MonoBehaviour
{
    [SerializeField]
    private InputField _userfilename;
    [SerializeField]
    private InputField _userposition;
    [SerializeField]
    private InputField _userweight;
    public void CreatFile(string filename, string pos, string pes)
    {
        string [] jorge={pos,pes};
        Debug.Log("chegou aqui");
        string path=Application.streamingAssetsPath+"/"+filename+".txt";
        Debug.Log("chegou aqui final");
        if(!File.Exists(path)){
            File.WriteAllLines(path,jorge);
            Debug.Log("chegou aqui também");
        }
    }
    void Start()
    {
        
        //CreatFile(_userfilename.text,_userposition.text,_userweight.text);
      //  Debug.Log("chegou aqui 1");
    }
    public void CreateFromBase(){
        CreatFile(_userfilename.text,_userposition.text,_userweight.text);
        Debug.Log("chegou aqui 2");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
