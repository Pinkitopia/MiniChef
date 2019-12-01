using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyMobile : MonoBehaviour
{
    private Vector3 initialPos;
    public bool isTaken = false;
    public GameObject handTool;
    public GameObject hand;

    public string blockAxis = ""; //OPTIONAL (X bloquea sobre eje x, y sobre eje y, z sobre eje z)

    // Start is called before the first frame update
    void Start()
    {
        initialPos = transform.position;
        hand = handTool.transform.GetChild(1).gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 vec = hand.transform.position - transform.position;
        float dis = vec.magnitude;

        if(this.gameObject.tag == "Ingredient")
        {
            if (dis < 5.0f && handTool.GetComponent<HandTool>().isActive)
            {
                isTaken = true;
            }

            if (Input.GetKeyDown(KeyCode.Space))
            {
                isTaken = false;
            }
            
        }
        else
        {
            if (dis < 5.0f && handTool.GetComponent<HandTool>().isActive)
            {
                isTaken = true;
            }
            else
            {
                isTaken = false;
            }
        }
        

        
        if (isTaken)
        {
            

            GameObject handSon = hand.transform.GetChild(0).gameObject;

            if(this.gameObject.tag == "Ingredient") //INGREDIENTES
            {
                transform.GetComponent<Rigidbody>().detectCollisions = false;
                transform.position = handSon.transform.position;
            }
            else //CAJONES Y OTRAS COSAS
            {
                switch (blockAxis) //BLOQUEA SOBRE EJES (PARA CAJONES POR EJEMPLO)
                {
                    case "X":
                        transform.position = new Vector3(hand.transform.position.x, transform.position.y, transform.position.z);
                        break;
                    case "x":
                        transform.position = new Vector3(hand.transform.position.x, transform.position.y, transform.position.z);
                        break;
                    case "Y":
                        transform.position = new Vector3(transform.position.x, hand.transform.position.y, transform.position.z);
                        break;
                    case "y":
                        transform.position = new Vector3(transform.position.x, hand.transform.position.y, transform.position.z);
                        break;
                    case "Z":
                        transform.position = new Vector3(transform.position.x, transform.position.y, hand.transform.position.z);
                        break;
                    case "z":
                        transform.position = new Vector3(transform.position.x, transform.position.y, hand.transform.position.z);
                        break;
                    default:
                        transform.position = hand.transform.position;
                        break;
                }
            }

            
            
        }
        else
        {
            if(this.gameObject.tag == "Ingredient")
            {
                transform.GetComponent<Rigidbody>().detectCollisions = true;
            }
            
        }
    }

    public Vector3 getInitialPos()
    {
        return initialPos;
    }

    /*private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.Equals(hand))
        {
            isTaken = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.Equals(hand))
        {
            isTaken = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        isTaken = false;
    }*/


}
