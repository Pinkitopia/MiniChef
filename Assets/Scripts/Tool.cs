using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tool : MonoBehaviour
{
    public bool isActive = false;
    public GameObject player;
    public bool playerNear;

    protected void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        playerNear = false;
    }

    public virtual bool Action()
    {
        return true;
    }

    public virtual void MoveAction()
    {

    }

    public virtual void RemoveAction()
    {

    }
    /*
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
    }*/
}
