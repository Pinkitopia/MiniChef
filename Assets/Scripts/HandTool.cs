using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandTool : Tool
{
    public float speed = 10.0f;
    public float distance = 100.0f;
  
    private Transform spring;
    private Transform hand;
    private Transform endSpring;

    private float initialZ;

    private bool going = false;
    private bool back = false;

    void Start()
    {
        base.Start();

        spring = transform.GetChild(2);
        hand = transform.GetChild(1);
        endSpring = transform.GetChild(2).GetChild(0).GetChild(0);
    }

    public override bool Action()
    {
        isActive = true;
        initialZ = spring.transform.localScale.z;
        
        return isActive;
    }

    public override void MoveAction()
    {
        GetComponent<Rigidbody>().useGravity = false;
        GetComponent<Rigidbody>().detectCollisions = false;
        GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
        GetComponent<Collider>().enabled = false;
        transform.position = new Vector3(player.transform.position.x, player.transform.position.y + 2.5f, player.transform.position.z);
        transform.SetParent(player.transform);
    }

    public override void RemoveAction()
    {
        GetComponent<Rigidbody>().useGravity = true;
        GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
        GetComponent<Rigidbody>().detectCollisions = true;
        GetComponent<Collider>().enabled = true;
        transform.parent = null;
    }


    public void Animation()
    {
        Debug.Log("ME ESTIRO");

        if (!back && !going)
        {
            spring.transform.localScale = Vector3.Lerp(spring.transform.localScale, new Vector3(1.0f, 1.0f, spring.transform.localScale.z + distance), Time.deltaTime * speed);
            hand.transform.position = new Vector3(endSpring.transform.position.x, endSpring.transform.position.y, endSpring.transform.position.z);
        }
        else if (!back && going)
        {
            spring.transform.localScale = Vector3.Lerp(spring.transform.localScale, new Vector3(1.0f, 1.0f, 5.0f), Time.deltaTime * speed);
            hand.transform.position = new Vector3(endSpring.transform.position.x, endSpring.transform.position.y, endSpring.transform.position.z);
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
        else if(spring.transform.localScale.z <= 6.0f && going)
        {
            spring.transform.localScale = new Vector3(1.0f, 1.0f, 6.0f);
            hand.transform.position = new Vector3(endSpring.transform.position.x, endSpring.transform.position.y, endSpring.transform.position.z);
            back = true;
        }        
        
    }
    
    

    
    void Update()
    {
        /*if (Input.GetKeyDown(KeyCode.M) && !isActive)
        {
            isActive = true;
            initialZ = spring.transform.localScale.z;
        }*/

        if (isActive)
        {
            Animation();
        }
    }
}
