using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;

public class Generador : MonoBehaviour
{

    public enum Difficulty {
        EASY, MEDIUM, HARD
    }

    
    public List <Pedido> tasks = new List<Pedido> (); //Tasks to do

    public int maxTasks; //Maximum simultaneous tasks to the Player.

    public Difficulty difficulty;

    private System.Random r = new System.Random();

    private float timeToNextTask;

    public int easyPoints = 50;
    public int mediumPoints = 100;

    public int hardPoints = 200;

    public int playerPoints = 0;

    public GameObject tarjetones;

    public TMP_Text texto;


    // Start is called before the first frame update
    void Start()
    {
        switch (PlayerPrefs.GetInt("Difficulty", 2)){
            case 1:
                setGenerator(Difficulty.EASY);
                break;
            case 2:
                setGenerator(Difficulty.MEDIUM);
                break;
            case 3:
                setGenerator(Difficulty.HARD);
                break;
            default:
                setGenerator(Difficulty.MEDIUM);
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
        if (timeToNextTask > 0.0f){
            timeToNextTask -= Time.deltaTime;
        } else {
            timeToNextTask = 0.0f;
            if (tasks.Count < maxTasks){
                addNewRecipe();
            }
        }

        List <int> delete = new List <int> ();

        for(int i = 0; i < tasks.Count; i++){
            bool finished = tasks[i].Update();
            if (finished){
                delete.Add(i);
            }
        }

        foreach (int i in delete){
            tasks.RemoveAt(i);
            switch(difficulty){
                case Difficulty.EASY:
                    playerPoints -= 20;
                break;
                case Difficulty.MEDIUM:
                    playerPoints -= 50;
                break;
                case Difficulty.HARD:
                    playerPoints -= 100;
                break;
            }
        }
        renderTarjetones();
        texto.text = playerPoints + "p";
    }

    public void setGenerator (Difficulty diff) {
        this.difficulty = diff;

        String firstRecipe = (r.Next() % 2 == 0) ? "Noodles" : "Pizza";
        Pedido first = null;
        switch (diff){
            case Difficulty.EASY:
                maxTasks = 2;
                first = new Pedido (120, easyPoints, firstRecipe);
                timeToNextTask = 60.0f;
            break;
            case Difficulty.MEDIUM:
                maxTasks = 3;
                first = new Pedido (90, mediumPoints, firstRecipe);
                timeToNextTask = 60.0f;
            break;
            case Difficulty.HARD:
                maxTasks = 5;
                first = new Pedido (75, hardPoints, firstRecipe);
                timeToNextTask = 45.0f;
            break;
        }
        tasks.Add(first);
        renderTarjetones();
    }

    public void addNewRecipe () {
        String nextRecipe = (r.Next() % 2 == 0) ? "Noodles" : "Pizza";
        Pedido next = null;
        float timeOfNextTask = 0.0f;
        switch(difficulty){
            case Difficulty.EASY:
                timeOfNextTask = (float) ((r.NextDouble()*45.0)+60.0); //Min. 60 secs + Random (0~45)
                next = new Pedido (timeOfNextTask, easyPoints, nextRecipe);
                timeToNextTask = (float) (60.0 - (r.NextDouble()*15.0)); //Time to next task Random (45 ~ 60)
            break;
            case Difficulty.MEDIUM:
                timeOfNextTask = (float) ((r.NextDouble()*45.0)+45.0); //Min. 45 secs + Random (0~45)
                next = new Pedido (timeOfNextTask, mediumPoints, nextRecipe);
                timeToNextTask = (float) (60.0 - (r.NextDouble()*20.0)); //Time to next task Random (40 ~ 60)
            break;
            case Difficulty.HARD:
                timeOfNextTask = (float) ((r.NextDouble()*30.0)+45.0); //Min. 45 secs + Random (0~30)
                next = new Pedido (timeOfNextTask, hardPoints, nextRecipe);
                timeToNextTask = (float) (45.0 - (r.NextDouble()*15.0)); //Time to next task Random (30 ~ 45)
            break;
        }
        tasks.Add(next);
        renderTarjetones();
        //PINTAR TARJETON EN UI
    }

    public void removeRecipe (String recipe) {
        int borrar = -1;
        for (int i = 0; i < tasks.Count; i++){
            if (tasks[i].recipe == recipe){
                borrar = i;
                switch(difficulty){
                    case Difficulty.EASY:
                        playerPoints += easyPoints;
                        break;
                    case Difficulty.MEDIUM:
                        playerPoints += mediumPoints;
                        break;
                    case Difficulty.HARD:
                        playerPoints += hardPoints;
                        break;
                }
                break;
            }
        }
        if (borrar != -1) tasks.RemoveAt(borrar);
        else playerPoints -= 50;
        renderTarjetones();
    }

    public void renderTarjetones () {
        for (int i = 0; i < 5; i++){
            if (i < tasks.Count){
                tarjetones.transform.GetChild(i).gameObject.SetActive(true);
                Debug.Log(tasks[i].recipe);
                if (tasks[i].recipe == "Pizza"){
                    tarjetones.transform.GetChild(i).GetChild(1).gameObject.SetActive(true);
                    tarjetones.transform.GetChild(i).GetChild(0).gameObject.SetActive(false);
                } else {
                    tarjetones.transform.GetChild(i).GetChild(1).gameObject.SetActive(false);
                    tarjetones.transform.GetChild(i).GetChild(0).gameObject.SetActive(true);
                }
                tarjetones.transform.GetChild(i).GetChild(2).gameObject.SetActive(true);
                tarjetones.transform.GetChild(i).GetChild(2).gameObject.GetComponent<TMP_Text>().text = tasks[i].getTime() + "%";
            } else {
                tarjetones.transform.GetChild(i).gameObject.SetActive(false);
                tarjetones.transform.GetChild(i).GetChild(2).gameObject.SetActive(false);
            }
        }
    }
}
