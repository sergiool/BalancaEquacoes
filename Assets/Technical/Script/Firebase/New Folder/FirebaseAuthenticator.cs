/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;

public class FirebaseAuthenticator : MonoBehaviour
{
    public static FirebaseAuthenticator instance;
    public DependencyStatus dependencyStatus;
    public FirebaseUser User;
    public FirebaseAuth auth;
    private void awake()
    {
        if(instance==null)
        {
            instance=null;
        }
        else
        {
            Destroy(gameObject);
        }
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>{
            dependencyStatus=task.Result;
            if(dependencyStatus==DependencyStatus.Available)
            {
                InitializeFirebase();
            }
            else
            {
                Debug.LogError("Could not resolve all firebase dependencies: "+ dependencyStatus);
            }
        });
    }
    void InitializeFirebase()
    {
        auth=FirebaseAuth.DefaultInstance;
    }
}*/