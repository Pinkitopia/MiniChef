using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dough : Ingredient
{
    public override bool roll()
    {
        if (state == FoodState.doughState.raw)
        {
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