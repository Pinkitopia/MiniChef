using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallDown : MonoBehaviour
{
    private Vector3 initialPosition;

    void Start()
    {
        initialPosition = transform.position;
        GetComponent<Rigidbody>().isKinematic = true;
    }

    void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.name == "floortrigger")
        {
            transform.position = initialPosition;
            transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
            GetComponent<Rigidbody>().isKinematic = true;
        }

        
        if (col.gameObject.tag == "Player" && !GameObject.FindGameObjectWithTag("CutPosition").GetComponent<PosIngredient>().isReady)
        {
            if (transform.parent != null){
                if (transform.parent.gameObject.name != "Player"){
                    GetComponent<Rigidbody>().isKinematic = false;
                } else {
                    GetComponent<Rigidbody>().isKinematic = true;
                }
            } else {
                    GetComponent<Rigidbody>().isKinematic = true;
            }
        }
       
    }
}
