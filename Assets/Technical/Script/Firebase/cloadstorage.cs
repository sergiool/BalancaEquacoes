using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Storage;
using System.IO;
using Firebase.Extensions;

public class cloadstorage : MonoBehaviour
{
    FirebaseStorage storage;
    StorageReference reference;
    //=storage.RootReference.Child("teste.png");
    void Start()
    {
        storage=FirebaseStorage.DefaultInstance;
    }
    public void UploadFile()
    {
        reference=storage.RootReference.Child("teste.png");
        string localfile="file:///"+ Application.streamingAssetsPath+"/teste.png";
        reference.PutFileAsync(localfile).ContinueWithOnMainThread(task=>
        {
            if(task.IsCompleted)
            {
                Debug.Log("succesfull");
            }
        });
    }
    public void getfile()
    {
        reference=storage.RootReference.Child("teste.png");
        if(!Directory.Exists(Application.streamingAssetsPath+"/getfile"))
        {
            Directory.CreateDirectory((Application.streamingAssetsPath+"/getfile"));
        }
        string localfile="file://"+ Application.streamingAssetsPath+"/getfile/teste.png";
        reference.GetFileAsync(localfile).ContinueWithOnMainThread(task=>{
            if(task.IsCompleted)
            {
                Debug.Log("succesfully downloaded");
            }
        });
    }
    void update()
    {
        
    }
    
}   