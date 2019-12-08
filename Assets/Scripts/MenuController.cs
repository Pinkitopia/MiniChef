using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class MenuController : MonoBehaviour
{
    // Start is called before the first frame update
    public Image background;
    public GameObject menuPrincipal;

    public GameObject menuDificultad;
    public GameObject menuCreditos;
    public GameObject menuConfig;

    public TextMeshProUGUI[] textos;

    public enum idioma {
        ESPANOL, ENGLISH
    }

    public idioma language = idioma.ESPANOL;

    public Generador.Difficulty dificultad = Generador.Difficulty.MEDIUM;

    public Image imagenFacil, imagenDificil, imagenMedia;

    void Start()
    {
        gameObject.SetActive(false);
        background.enabled = false;
        menuPrincipal.SetActive(false);
        menuDificultad.SetActive(false);
        menuCreditos.SetActive(false);
        menuConfig.SetActive(false);
        imagenDificil.enabled = false;
        imagenFacil.enabled = false;
        imagenMedia.enabled = false;
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
            PlayerPrefs.SetInt("language", 0);
        } else {
            language = idioma.ENGLISH;
            PlayerPrefs.SetInt("language", 1);
        }

        ChangeLanguage();
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
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }

    public void setDifficultyEasy() {
        imagenFacil.enabled = true;
        imagenMedia.enabled = false;
        imagenDificil.enabled = false;
        dificultad = Generador.Difficulty.EASY;
        PlayerPrefs.SetInt("Difficulty", 1);
    }

    public void setDifficultyMedium() {
        imagenFacil.enabled = false;
        imagenMedia.enabled = true;
        imagenDificil.enabled = false;
        dificultad = Generador.Difficulty.MEDIUM;
        PlayerPrefs.SetInt("Difficulty", 2);
    }

    public void setDifficultyHard() {
        imagenFacil.enabled = false;
        imagenMedia.enabled = false;
        imagenDificil.enabled = true;
        dificultad = Generador.Difficulty.HARD;
        PlayerPrefs.SetInt("Difficulty", 3);
    }

    public void OpenInstagram()
    {
        Application.OpenURL("https://www.instagram.com/pinkitopia/");
    }

    public void OpenTwitter()
    {
        Application.OpenURL("https://twitter.com/pinkitopia");
    }

    public void OpenWeb()
    {
        Application.OpenURL("https://pinkitopia-studio.github.io/");
    }

    private void ChangeLanguage()
    {
        if(language == idioma.ESPANOL)
        {
            textos[0].SetText("Pulsa una TECLA para comenzar");
            textos[1].SetText("Comenzar");
            textos[2].SetText("Dificultad");
            textos[3].SetText("Atras");
            textos[4].SetText("Jugar");
            textos[5].SetText("Atras");
            textos[6].SetText("Configuracion");
            textos[7].SetText("Espanol");
            textos[8].SetText("Atras");
        }

        if(language == idioma.ENGLISH)
        {
            textos[0].SetText("Press any KEY to start");
            textos[1].SetText("Start");
            textos[2].SetText("Difficulty");
            textos[3].SetText("Back");
            textos[4].SetText("Play");
            textos[5].SetText("Back");
            textos[6].SetText("Configuration");
            textos[7].SetText("English");
            textos[8].SetText("Back");
        }
    }
}
