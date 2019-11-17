﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandTool : MonoBehaviour
{
    public float speed = 10.0f;
    public float distance = 100.0f;
    public bool isActive = false;
    private Transform spring;
    private Transform hand;
    private Transform endSpring;

    private float initialZ;

    private bool going = false;
    private bool back = false;

    void Start()
    {
        spring = transform.GetChild(2);
        hand = transform.GetChild(1);
        endSpring = transform.GetChild(2).GetChild(0).GetChild(0);
    }

    public void Action()
    {
        Debug.Log("ME ESTIRO");

        if (!back && !going)
        {
            spring.transform.localScale = Vector3.Lerp(spring.transform.localScale, new Vector3(1.0f, 1.0f, spring.transform.localScale.z + distance), Time.deltaTime * speed);
            hand.transform.position = new Vector3(hand.transform.position.x, hand.transform.position.y, endSpring.transform.position.z + 0.5f);
        }
        else if (!back && going)
        {
            spring.transform.localScale = Vector3.Lerp(spring.transform.localScale, new Vector3(1.0f, 1.0f, 0.0f), Time.deltaTime * speed);
            hand.transform.position = new Vector3(hand.transform.position.x, hand.transform.position.y, endSpring.transform.position.z + 0.5f);
        }
        else if (back && going)
        {
            isActive = false;
            going = false;
            back = false;
        }

        Debug.Log(going);

        if (spring.transform.localScale.z >= initialZ + distance)
        {
            going = true;
        }
        else if(spring.transform.localScale.z <= 1.0f && going)
        {
            spring.transform.localScale = new Vector3(1.0f, 1.0f, 1.0f);
            hand.transform.position = new Vector3(hand.transform.position.x, hand.transform.position.y, endSpring.transform.position.z + 0.5f);
            back = true;
        }

        
        
    }
    
    

    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.M) && !isActive)
        {
            isActive = true;
            initialZ = spring.transform.localScale.z;
        }

        if (isActive)
        {
            Action();
        }
    }
}
