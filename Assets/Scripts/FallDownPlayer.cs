using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallDownPlayer : MonoBehaviour
{
    private Vector3 initialPosition;

    void Start()
    {
        initialPosition = transform.position;
       
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.name == "floortrigger")
        {
            transform.parent.position = initialPosition;
            transform.position = initialPosition;
            transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
            
        }

       
    }
}
