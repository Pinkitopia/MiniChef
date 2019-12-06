using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ingredient : Object
{
    int id = -1;

    public ID state;
    /*

    ID state;
    /*
     * Cada ingrediente tiene un ID asignado (ver FoodState.cs)
     * Encauzamos el constructor en función del ID pues hay distintos
     * estados iniciales según qué ingrediente. La mayoría empieza en RAW
     */

    


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

    }
}