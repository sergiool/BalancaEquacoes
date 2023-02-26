/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using TMPro;

public class LoginAuth : MonoBehaviour
{
    public TMP_InputField emailInputfield;
    public TMP_InputField passwordInputfield;
    public TMP_Text warningLoginText;
    public TMP_Text confirmLoginText;

    public void LoginButton()
    {
        StartCoroutine(StartLogin(emailInputfield.text,passwordInputfield.text));
    }
    private IEnumerator StartLogin(string email, string password)
    {
        var LoginTask=FirebaseAuthenticator.instance.auth.SignInWithEmailAndPasswordAsync(email,password);
        yield return new WaitUntil(predicate: ()=> LoginTask.IsCompleted);
        
        if(LoginTask.Exception!=null)
        {
            HandleLoginErrors(LoginTask.Exception);
        }
        else
        {
            LoginUser(LoginTask);
        }
    }
    void HandleLoginErrors(System.AggregateException loginException)
    {
        Debug.LogWarning(message: $"Faied to login task with{loginException}");
        FirebaseException firebaseEx=loginException.GetBaseException() as FirebaseException;
        AuthError errorCode= (AuthError)firebaseEx.ErrorCode;

        warningLoginText.text=DefineLoginErrorMessage(errorCode);
    }
    string DefineLoginErrorMessage(AuthError errorCode)
    {
        switch(errorCode)
        {
            case AuthError.MissingEmail:
                return "Missing Email";
            case AuthError.MissingPassword:
                return "Missing Password";
            case AuthError.InvalidEmail:
                return "Email invalido";
            case AuthError.UserNotFound:
                return "Conta não existente";
            default:
                return "Erro desconhecido";
        }
    }
    void LoginUser(System.Threading.Tasks.Task<Firebase.Auth.FirebaseUser> loginTask)
    {
        FirebaseAuthenticator.instance.User=loginTask.Result;
        Debug.LogFormat("User Signed inc successfully: {0} {{1}}",FirebaseAuthenticator.instance.User.DisplayName,FirebaseAuthenticator.instance.User.Email);
        warningLoginText.text=""; 
        confirmLoginText.text="Logged in";  
    }
}*/
