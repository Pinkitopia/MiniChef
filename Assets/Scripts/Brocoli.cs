using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brocoli : Ingredient
{
    private bool cutState = false;
   

    void Start()
    {
        state = FoodState.brocoliState.giant;
        gameObject.transform.GetChild(1).gameObject.SetActive(false);
    }

    public override bool cut()
    {
        if (state == FoodState.brocoliState.giant)
        {
            gameObject.transform.GetChild(0).gameObject.SetActive(false);
            gameObject.transform.GetChild(1).gameObject.SetActive(true);
            state = FoodState.brocoliState.diced;
            return true;
        }
        else
        {
            return false;
        }
    }

    public override bool cook()
    {
        if (state == FoodState.brocoliState.giant)
        {
            state = FoodState.brocoliState.giantCooked;

        }
        else
        {
            state = FoodState.brocoliState.dicedCooked;

        }
        return true;
    }

}