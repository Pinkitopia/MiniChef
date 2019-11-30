﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PosIngredient : MonoBehaviour
{
    public bool isReady = false;

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Ingredient")
        {
            col.gameObject.transform.parent.position = transform.position;
            col.gameObject.transform.parent.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
            col.gameObject.transform.position = transform.position;
            
            col.gameObject.transform.parent.GetComponent<Rigidbody>().isKinematic = true;
            

            isReady = true;
        }
    }

    void Update()
    {

    }






}
