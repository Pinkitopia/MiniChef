using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingredient : Object
{
    int id = -1;
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
        //Depending on the toolID and the foodId it gives a consequent state change 
        // using the GDD tree of states




        //return para evitar errores de consola, borrar antes de debugear
        return true;
    }
}