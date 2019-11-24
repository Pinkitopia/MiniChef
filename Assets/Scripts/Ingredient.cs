﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingredient : Object
{
    int id = -1;

    protected ID state;
    /*

    ID state;
    /*
     * Cada ingrediente tiene un ID asignado (ver FoodState.cs)
     * Encauzamos el constructor en función del ID pues hay distintos
     * estados iniciales según qué ingrediente. La mayoría empieza en RAW
     */

    Ingredient(int id)
    {
        this.id = id;
        switch (id)
        {
            //beef
            case 1:
                state = FoodState.beefState.raw;
                break;
            //brocoli
            case 2:
                state = FoodState.brocoliState.giant;
                break;
            //dough
            case 3:
                state = FoodState.doughState.raw;
                break;
            //onion
            case 4:
                state = FoodState.onionState.giantState.raw;
                break;
            //cheese
            case 5:
                state = FoodState.cheeseState.raw;
                break;
            //pepperoni
            case 6:
                state = FoodState.pepperoniState.diced;
                break;
                //Any other value is not admitted
            default:
                id = -1;
                break;
        }
    }

    


    public bool action()
    {
        //Ingredients have no actions
        return false;
    }

    public int getId()
    {
        return id;
    }

    //Receives tool Id
    public bool updateState(int toolID)
    {

        return false;
    }

    /*
     * acciones sobre los ingredientes
     */
    //pot
    public virtual bool boil()
    {
        return false;
    }

    //pan
    public virtual bool cook()
    {
        return false;
    }

    //oven
    public virtual bool roast()
    {
        return false;
    }

    //rolling pin (rodillo)
    public virtual bool roll()
    {
        return false;
    }

    //knife
    public virtual bool cut()
    {
        return false;

        switch (toolID) {
            //pan
            case 1:
                break;
            //pot
            case 2:
                break;
            //oven
            case 3:
                break;
            default:
                return false;

        }

        //return para evitar errores de compilación, borrar antes de debugear
        return true;

    }
}