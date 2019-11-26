using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dough : Ingredient
{

    private int timesRolled = 0;

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