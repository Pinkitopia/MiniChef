using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Beef : Ingredient
{
    public override bool cook()
    {
        if(state == FoodState.beefState.raw)
        {
            state = FoodState.beefState.cooked;
            return true;
        }
        else if (state == FoodState.beefState.dicedRaw)
        {
            state = FoodState.beefState.dicedCooked;
            return true;
        }
        else
        {
            return false;
        }

        
    }

    public override bool cut()
    {
        if (state == FoodState.beefState.raw)
        {
            state = FoodState.beefState.dicedRaw;
            return true;
        }
        else
            return false;
    }
}
