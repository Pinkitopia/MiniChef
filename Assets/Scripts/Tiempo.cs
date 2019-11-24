/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

public class Tiempo : MonoBehaviour
{
	
	public float segundos = 0;
	public int tiempoRestante = 60;
	public Text textoTiempo;
	public Comprobar botonComprobar;
	
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        segundos = segundos + Time.deltaTime;
		int segundosPasados = Convert.ToInt32(Math.Round(segundos, 0));
		textoTiempo.text = (tiempoRestante-segundosPasados).ToString();
		
		if(tiempoRestante-segundosPasados <= 0){
			PlayerPrefs.SetInt("puntos", botonComprobar.puntos);
			SceneManager.LoadScene("puntuacion", LoadSceneMode.Single);
		}
		
    }
}
*/