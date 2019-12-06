using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dough : Ingredient
{

    public List <Ingredient> toppings;

    private int timesRolled = 0;

    private bool tomato = false;

    void Start () {
        state = FoodState.doughState.raw;
        for (int i = 1; i < 4; i++){
            gameObject.transform.GetChild(i).gameObject.SetActive(false);
        }
    }
    
    void OnTriggerEnter(Collider col){
        Debug.Log("COLISION!!");
        if(col.gameObject.name == "RollingPin"){
            this.roll();
            Debug.Log("Roleado!");
        }
        if (this.state == FoodState.doughState.flattened && tomato){
            if (col.gameObject.name == "Onion"){
                Ingredient onion = col.gameObject.GetComponent <Ingredient> ();
                if (onion.state == FoodState.onionState.dicedState.raw){
                    toppings.Add(onion);
                }
            } else if (col.gameObject.name == "Cheese"){
                Ingredient cheese = col.gameObject.GetComponent <Ingredient> ();
                if (cheese.state == FoodState.cheeseState.ball){
                    cheese.state = FoodState.cheeseState.spread;
                    toppings.Add(cheese);
                }
            } else if (col.gameObject.name == "Bacon"){
                Ingredient bacon = col.gameObject.GetComponent <Ingredient> ();
                if (bacon.state == FoodState.baconState.raw){
                    toppings.Add(bacon);
                }
            } else if (col.gameObject.name == "Pineapple"){
                Ingredient pineapple = col.gameObject.GetComponent <Ingredient> ();
                if (pineapple.state == FoodState.pineappleState.raw){
                    toppings.Add(pineapple);
                }
            }
        }
    }

    public void addTomato () {
        tomato = true;
    }

    public override bool roll()
    {
        if (state == FoodState.doughState.raw)
        {
            if (timesRolled < 3){
                gameObject.transform.GetChild(timesRolled).gameObject.SetActive(false);
                
                timesRolled++;
                gameObject.transform.GetChild(timesRolled).gameObject.SetActive(true);
                return true;
            }
            state = FoodState.doughState.flattened;
            return true;
        }
        else
            return false;
    }

    public override bool roast()
    {
        if (state == FoodState.doughState.flattened)
        {
            state = FoodState.doughState.cooked;
            return true;
        }
        else
            return false;
    }
}