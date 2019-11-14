using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tool : MonoBehavior, Object
{
    public int getId() => id;

    public bool action()
    {
        bool done;

        //Different ID to each tool
        switch (this->id)
        {
            case 0:
                //'0' tool action
                break;
            case 1:
                //'1' tool action
                break;
            //...
            default:
                done = false;
        }

        return done;
    }
}
