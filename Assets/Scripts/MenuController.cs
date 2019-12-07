using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }

    public void setDifficultyEasy() {
        imagenFacil.enabled = true;
        imagenMedia.enabled = false;
        imagenDificil.enabled = false;
        dificultad = Generador.Difficulty.EASY;
    }

    public void setDifficultyMedium() {
        imagenFacil.enabled = false;
        imagenMedia.enabled = true;
        imagenDificil.enabled = false;
        dificultad = Generador.Difficulty.MEDIUM;
    }

    public void setDifficultyHard() {
        imagenFacil.enabled = false;
        imagenMedia.enabled = false;
        imagenDificil.enabled = true;
        dificultad = Generador.Difficulty.HARD;
    }
}
