using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    // Start is called before the first frame update
    public Image background;
    public GameObject menuPrincipal;

    public GameObject menuDificultad;
    public GameObject menuCreditos;
    public GameObject menuConfig;

    public enum idioma {
        ESPANOL, ENGLISH
    }

    public idioma language = idioma.ESPANOL;

    void Start()
    {
        gameObject.SetActive(false);
        background.enabled = false;
        menuPrincipal.SetActive(false);
        menuDificultad.SetActive(false);
        menuCreditos.SetActive(false);
        menuConfig.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.anyKey && gameObject.activeSelf){
            gameObject.SetActive(false);
            menuPrincipal.SetActive(true);
        }
    }

    public void startOnClick() {
        menuPrincipal.SetActive(false);
        menuDificultad.SetActive(true);
    }

    public void BackDificultadOnClick(){
        menuDificultad.SetActive(false);
        menuPrincipal.SetActive(true);
    }

    public void BackConfigOnClick() {
        menuConfig.SetActive(false);
        menuPrincipal.SetActive(true);
    }

    public void BackCreditosOnClick() {
        menuPrincipal.SetActive(true);
        menuCreditos.SetActive(false);
    }

    public void IdiomaOnClick () {
        if (language == idioma.ENGLISH){
            language = idioma.ESPANOL;
        } else {
            language = idioma.ENGLISH;
        }
    }

    public void contactOnClick() {
        menuPrincipal.SetActive(false);
        menuCreditos.SetActive(true);
    }

    public void settingsOnClick() {
        menuConfig.SetActive(true);
        menuPrincipal.SetActive(false);
    }

    public void comenzarPartida () {
        menuDificultad.SetActive(false);
        background.enabled = false;
    }
}
