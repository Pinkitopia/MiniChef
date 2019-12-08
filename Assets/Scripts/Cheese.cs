using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cheese : Ingredient
{

    void Start () {
        state = FoodState.cheeseState.ball;
    }

    public override bool roast()
    {
        if (state == FoodState.cheeseState.spread)
        {
            state = FoodState.cheeseState.melt;
            return true;
        }
        else
            return false;
    }

    public bool ball()
    {
        if (state == FoodState.cheeseState.spread)
        {
            state = FoodState.cheeseState.ball;
            return true;
        }
        else
            return false;
    }

    public override bool cut()
    {
        if (state == FoodState.cheeseState.ball)
        {
            state = FoodState.cheeseState.spread;
            return true;
        }
        else
            return false;
    }
}
