using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class RestAPI3Post : MonoBehaviour
{
    private string url="https://middleware-i2yffdhjkq-uc.a.run.app/";
    string[] pesoeposi;
    public Text po;
    public Text pes;
    public Text userinput;
   // [SerializeField] Text pos;
   public void start(){
        StartCoroutine(PostData(userinput.text));    
   }
    public IEnumerator PostData(string userinput)
        {
        using(UnityWebRequest request=UnityWebRequest.Get(url))
                {
                    yield return request.SendWebRequest();
                    if(request.result==UnityWebRequest.Result.ConnectionError){
                        Debug.LogError(request.error);
                        pesoeposi=new string[]{"-99","0"};
                    }
                    else{
                        string json=request.downloadHandler.text;
                       // Debug.Log(json);    
                        SimpleJSON.JSONNode stats=SimpleJSON.JSON.Parse(json);
                       // Debug.Log(stats[0][userinput]["pes"]);
                        pes.text=stats[0][userinput]["pes"];
                        po.text=stats[0][userinput]["pos"];
                      //  Debug.Log(po.text);
                       // Debug.Log(pes.text);
                        pesoeposi=new string[]{stats[0][userinput]["pes"],stats[0][userinput]["pos"]};
                        
                    }
                }
        }   
    
    
}