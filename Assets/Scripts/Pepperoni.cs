using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pepperoni : Ingredient
{
    public override bool cut()
    {
        if (state == FoodState.pepperoniState.raw)
        {
            state = FoodState.pepperoniState.sliced;
            return true;
        }
        else
            return false;
    }

    public override bool cook()
    {
        if (state == FoodState.pepperoniState.sliced)
        {
            state = FoodState.pepperoniState.cooked;
            return true;
        }
        else
            return false;
    }
}
