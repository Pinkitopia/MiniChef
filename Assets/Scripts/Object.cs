using UnityEngine;
using System.Collections;

public interface Object
{
    //Object ID
    private int id = -1;

    //Triggers object's action
    public bool action();

    public int getid();
}
