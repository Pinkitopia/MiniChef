using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pepperoni : Ingredient
{

    void Start () {
        state = FoodState.pepperoniState.raw;
    }

    public override bool cut()
    {
        Debug.Log("CORTAO");
        if (state == FoodState.pepperoniState.raw)
        {
            this.transform.GetChild(1).gameObject.SetActive(true);
            this.transform.GetChild(0).gameObject.SetActive(false);
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
