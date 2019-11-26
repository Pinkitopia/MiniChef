using UnityEngine;
using System.Collections;

public class Object : MonoBehaviour
{
    //Triggers object's action
    public virtual bool action() {
        return false;
    }


    public virtual int getId() {
        return 0;
    }
}
