using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AppManager : MonoBehaviour
{
    [Header("Login")]
    [SerializeField] private InputField inputEmailLogin;
    [SerializeField] private InputField inputPasswordLogin;
    [SerializeField] private Button buttonLogin;

    [Header("Signup")]
    [SerializeField] private InputField inputEmailSignup;
    [SerializeField] private InputField inputPasswordSignup;
    [SerializeField] private Button buttonSignup;

    [Header("RetrievePaswword")]
    [SerializeField] private InputField inputEmailRetrievePassword;
    [SerializeField] private Button buttonRetrievePassword;

    private void Start()
    {
        buttonLogin.onClick.AddListener(OnButtonLoginClicked);
        buttonSignup.onClick.AddListener(OnButtonSignupClicked);
        //buttonRetrievePassword.onClick.AddListener(OnButtonRetrievePasswordClicked);
    }

    private void OnButtonLoginClicked()
    {
        FirebaseManager.Instance.FireLogin(inputEmailLogin.text, inputPasswordLogin.text, result =>
        {
            if (result)
            {
                print("Success login");
            }
            else
            {
                print("Error login");
            }
        });
    }

    private void OnButtonSignupClicked()
    {
        FirebaseManager.Instance.FireSignup(inputEmailSignup.text, inputPasswordSignup.text, (result, messsage) =>
        {
            if (result)
            {
                print("Success signup");
                print("Message: " + messsage);
            }
            else
            {
                print("Error signup");
                print("Message: " + messsage);
            }
        });
    }
    private void OnButtonRetrievePasswordClicked()
    {
        FirebaseManager.Instance.RetrievePasswordFirebase(inputEmailRetrievePassword.text, (result,message) =>
        {
            if (result)
            {
                print("Success retrieve passowrd");
            }
            else
            {
                print("Error retrieve passowrd");
            }
        });
    }
}
