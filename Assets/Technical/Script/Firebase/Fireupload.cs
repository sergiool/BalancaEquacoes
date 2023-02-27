using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Storage;
using System.IO;
using Firebase.Extensions;
using System.Threading.Tasks;

public class Fireupload : MonoBehaviour
{
    FirebaseStorage storage;
    StorageReference pathReference;
    StorageReference gsReference;
    


    // Create a reference to the file you want to upload
    StorageReference riversRef;
    void Start()
    {
        storage=FirebaseStorage.DefaultInstance;
    }
    public void Uploadfile()
    {
        riversRef=storage.RootReference.Child("teste.png");
        string localFile = "file://"+ Application.streamingAssetsPath+"/teste.png";
        riversRef.PutFileAsync(localFile).ContinueWith((Task<StorageMetadata> task) => {
            if (task.IsFaulted || task.IsCanceled) {
                Debug.Log(task.Exception.ToString());
                // Uh-oh, an error occurred!
            }
            else 
            {
                // Metadata contains file metadata such as size, content-type, and download URL.
                StorageMetadata metadata = task.Result;
                string md5Hash = metadata.Md5Hash;
                Debug.Log("Finished uploading...");
                Debug.Log("md5 hash = " + md5Hash);
            }
        });
    }
    void Update()
    {
        
    }
}
