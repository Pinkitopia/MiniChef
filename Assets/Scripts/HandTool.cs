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

    private bool isTaken = false;

    private Collider[] colliders;

    void Start()
    {
        base.Start();

        spring = transform.GetChild(2);
        hand = transform.GetChild(1);
        endSpring = transform.GetChild(2).GetChild(0).GetChild(0);

        colliders = GetComponents<Collider>();
    }

    public override bool Action()
    {
        isActive = true;
        initialZ = spring.transform.localScale.z;

        return isActive;
    }

    //SE COLOCA LA HERRAMIENTA EN EL JUGADOR (DEPENDE DE CADA HERRAMIENTA)
    public override void MoveAction()
    {
        GetComponent<Rigidbody>().useGravity = false;
        GetComponent<Rigidbody>().detectCollisions = false;
        GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;

        colliders[1].enabled = false;
        transform.position = new Vector3(player.transform.position.x, player.transform.position.y + 2.5f, player.transform.position.z);
        transform.SetParent(player.transform);
        transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);

        isTaken = true;

    }

    //SE DESCOLOCA LA HERRAMIENTA EN EL JUGADOR (DEPENDE DE CADA HERRAMIENTA)
    public override void RemoveAction()
    {
        GetComponent<Rigidbody>().useGravity = true;
        GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
        GetComponent<Rigidbody>().detectCollisions = true;
        colliders[1].enabled = true;

        transform.parent = null;
        transform.position = new Vector3(player.transform.position.x + 2.5f, player.transform.position.y, player.transform.position.z + 2.5f);

        isTaken = false;
    }

    //ANIMACIÓN DE LA MANO
    public void Animation()
    {
        

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

        

        if (spring.transform.localScale.z >= initialZ + distance)
        {
            going = true;
        }
        else if (spring.transform.localScale.z <= 6.0f && going)
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
        if (isTaken)
        {
            
            transform.position = new Vector3(player.transform.position.x, player.transform.position.y + 2.5f, player.transform.position.z);
            
        }
       

       

        if (isActive)
        {
            Animation();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        
        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeIn>().startFading();
            playerNear = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            playerNear = true;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeOutSprite>().startFading();
            
        }
        
        playerNear = false;
    }
}
