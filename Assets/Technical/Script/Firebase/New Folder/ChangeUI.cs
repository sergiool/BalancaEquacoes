using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeUI : MonoBehaviour
{
    #region Singleton
    public static ChangeUI instance;
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
    }
    #endregion
    public GameObject loginScreenPanel,registerScreenPanel;
    bool loginActive=true;
    public void ChangeBetweenLoginRegister()
    {
        loginActive=!loginActive;
        loginScreenPanel.SetActive(loginActive);
        registerScreenPanel.SetActive(!loginActive);
    }
}
