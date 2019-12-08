using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Pedido
{

    public float maxTime; //Maximum initial time
    private float timeLeft; //Time left for ending and being wrong
    private int points; //Points given by this task

    public String recipe; //Recipe to do on this task.
        
    public Pedido (float maxTime, float points, String recipe) {
        this.maxTime = maxTime;
        this.timeLeft = maxTime;
        this.recipe = recipe;
    }

    // Update is called once per frame
    public bool Update()
    {
        timeLeft -= Time.deltaTime;

        return (timeLeft <= 0.0f);
    }

    public int getTime(){
        return (int) Math.Round((timeLeft/maxTime)*100);
    }
}
