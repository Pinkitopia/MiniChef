using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Beef : Ingredient
{
    public Material cocinado;
    public Material quemado;

    private void Start()
    {
        state = FoodState.beefState.raw;    
    }

    public override bool cook()
    {
        Debug.Log("Cocinao");
        if(state == FoodState.beefState.raw)
        {
            Material yourMaterial = cocinado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            return true;
        }
        else if (state == FoodState.beefState.dicedRaw)
        {
            Material yourMaterial = cocinado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            state = FoodState.beefState.dicedCooked;
            return true;
        }
        else if (state == FoodState.beefState.cooked)
        {
            Material yourMaterial = quemado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            return true;
        }
        else if (state == FoodState.beefState.dicedCooked)
        {
            Material yourMaterial = quemado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
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
