using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Onion : Ingredient
{
    public override bool cut()
    {
        if (state == FoodState.onionState.giantState.raw)
        {
            state = FoodState.onionState.dicedState.raw;
            return true;
        }
        else
            return false;
    }

    public override bool cook()
    {
        if (state == FoodState.onionState.giantState.raw)
        {
            state = FoodState.onionState.giantState.cooked;
            return true;
        }
        else if (state == FoodState.onionState.dicedState.raw)
        {
            state = FoodState.onionState.dicedState.cooked;
            return true;
        }
        else
            return false;
    }

    public override bool boil()
    {
        if (state == FoodState.onionState.giantState.raw)
        {
            state = FoodState.onionState.giantState.boiled;
            return true;
        }
        else if (state == FoodState.onionState.dicedState.raw)
        {
            state = FoodState.onionState.dicedState.boiled;
            return true;
        }
        else
            return false;
    }

    public override bool roast()
    {
        if (state == FoodState.onionState.dicedState.raw)
        {
            state = FoodState.onionState.dicedState.roasted;
            return true;
        }
        else
            return false;
    }
}
