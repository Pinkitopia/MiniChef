using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Interactive : Object
{
    /*
     * @id = [
     *  1 - pan
     *  2 - pot
     *  3 - oven
     *  4 - button
     * ]
     */
    private int id = -1;

    Interactive(int id)
    {
        if (id < 1 || id > 4)
            id = -1;
        else
            this.id = id;
    }
    
    //function for buttons and such
    public bool action()
    {
        //borrar para debugear
        return false;
    }

    //function for ingredient-interactive tools
    public bool action(Ingredient ingredient)
    {
        if (id > 0 && id < 4)
            return ingredient.updateState(id);
        else
            return false;
    }

    public int getId()
    {
        return id;
    }

   }
