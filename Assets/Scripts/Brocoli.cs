using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brocoli : Ingredient
{
    public override bool cut()
    {
        if (state == FoodState.brocoliState.giant)
        {
            state = FoodState.brocoliState.diced;
            //CAMBIAR MODELO AL MODELO CORTADO
            return true;
        }
        else
            return false;
    }

    public override bool cook()
    {
        if (state == FoodState.brocoliState.giant)
        {
            state = FoodState.brocoliState.giantCooked;
            return true;
        }
        else if (state == FoodState.brocoliState.diced)
        {
            state = FoodState.brocoliState.dicedCooked;
            return true;
        }
        else
            return false;

    }

    
}
