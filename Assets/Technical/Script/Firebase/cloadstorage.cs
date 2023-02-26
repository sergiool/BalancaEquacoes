using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Storage;
using System.IO;

public class cloadstorage : MonoBehaviour
{
    FirebaseStorage storage;
    StorageReference reference;
    void Start()
    {
        storage=FirebaseStorage.DefaultInstance;
    }
    public void UploadFile()
    {
        reference=storage.RootReference.Child("teste.png");
        string localfile="file://"+ Application.streamingAssetsPath+"/teste.png";
        reference.PutFileAsync(localfile).ContinueWith(task=>
        {
            if(task.IsCompleted)
            {
                Debug.Log("succesfull");
            }
        });
    }
    public void getfile()
    {
        reference=storage.RootReference.Child("teste.cs");
        if(!Directory.Exists(Application.streamingAssetsPath+"/getfile"))
        {
            Directory.CreateDirectory((Application.streamingAssetsPath+"/getfile"));
        }
        string localfile="file://"+ Application.streamingAssetsPath+"/getfile/teste.cs";
        reference.GetFileAsync(localfile).ContinueWith(task=>{
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