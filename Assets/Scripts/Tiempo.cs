
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.SceneManagement;

public class Tiempo : MonoBehaviour
{
	
	public float segundos = 0;
	public int tiempoRestante = 300;
	private TMP_Text textoTiempo;

	public Generador generaPedidos;
	
    // Start is called before the first frame update
    void Start()
    {
        textoTiempo = GetComponent<TMP_Text>();
		tiempoRestante = 600;
    }

    // Update is called once per frame
    void Update()
    {
        segundos = segundos + Time.deltaTime;
		int segundosPasados = Convert.ToInt32(Math.Round(segundos, 0));
		textoTiempo.text = toTime(tiempoRestante-segundosPasados);
		
		if(tiempoRestante-segundosPasados <= 0){
			PlayerPrefs.SetInt("points", generaPedidos.playerPoints);
			SceneManager.LoadScene(2, LoadSceneMode.Single);
		}
		
    }

	private String toTime(int total) {
		//Pasa los segundos a texto con minutos

		int minutes = total / 60;

		int seconds = total % 60;

		if (seconds >= 10) return minutes + ":" + seconds;
		else return minutes + ":0" + seconds;
	}
}
