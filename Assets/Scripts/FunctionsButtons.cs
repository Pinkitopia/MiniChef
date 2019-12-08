using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FunctionsButtons : MonoBehaviour
{
    public GameObject pauseMenu;
    public GameObject[] joystickImages;

    public void OnPause()
    {
        Time.timeScale = 0;
        pauseMenu.SetActive(true);
        foreach (GameObject img in joystickImages)
        {
            img.SetActive(false);
        }
    }

    public void OnResume()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
        foreach (GameObject img in joystickImages)
        {
            img.SetActive(true);
        }
    }

    public void OnBack()
    {

    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) && !pauseMenu.activeSelf)
        {
            OnPause();
        }
        else if (Input.GetKeyDown(KeyCode.Escape) && pauseMenu.activeSelf)
        {
            OnResume();
        }

            
    }
}
