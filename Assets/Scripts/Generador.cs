using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Generador : MonoBehaviour
{

    public enum Difficulty {
        EASY, MEDIUM, HARD
    }

    
    public List <Pedido> tasks = new List<Pedido> (); //Tasks to do

    public int maxTasks; //Maximum simultaneous tasks to the Player.

    private Difficulty difficulty;

    private System.Random r = new System.Random();

    private float timeToNextTask;

    public int easyPoints = 50;
    public int mediumPoints = 100;

    public int hardPoints = 200;

    public int playerPoints = 0;


    // Start is called before the first frame update
    void Start()
    {
        setGenerator(Difficulty.MEDIUM);
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
    }

    public void removeRecipe () {
         /*
         FALTA POR IMPLEMENTAR. POR AHORA, DELETEA EL PRIMER PEDIDO Y PUNTO UWUNTU
         */
        tasks.RemoveAt(0);
    }
}
