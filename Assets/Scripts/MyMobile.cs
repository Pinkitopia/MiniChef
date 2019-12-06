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
            if (dis < 3.5f && handTool.GetComponent<HandTool>().isActive)
            {
                isTaken = true;
            }
            else
            {
                isTaken = false;
            }
        }


        GameObject handSon = hand.transform.GetChild(0).gameObject;
        if (isTaken)
        {
            if(this.gameObject.tag == "Ingredient") //INGREDIENTES
            {
                SetAsParent(handSon);
                transform.GetComponent<Rigidbody>().useGravity = false;
                transform.GetComponent<Rigidbody>().isKinematic = true;
                transform.GetComponent<Rigidbody>().detectCollisions = false;

            }
            else if (this.gameObject.tag == "Drawer") //Cajones
            {
                this.GetComponent<Drawers>().open(handSon.transform.position);
            }
            else //OTRAS COSAS
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
                RemoveAsParent(handSon);
                transform.GetComponent<Rigidbody>().useGravity = true;
                if (!GameObject.FindGameObjectWithTag("CutPosition").GetComponent<PosIngredient>().isReady)
                {
                    transform.GetComponent<Rigidbody>().isKinematic = false;
                }
                
                transform.GetComponent<Rigidbody>().detectCollisions = true;
            }
            else if (this.gameObject.tag == "Drawer") //Cajones
            {
                this.GetComponent<Drawers>().release();
            }

        }
    }

    private void SetAsParent(GameObject obj)
    {
        if (transform.GetComponent<Rigidbody>().detectCollisions)
        {
            transform.SetParent(obj.transform);
        }
        
    }

    private void RemoveAsParent(GameObject obj)
    {
        if (!transform.GetComponent<Rigidbody>().detectCollisions)
        {
            transform.parent = null;
        }

    }

    public Vector3 getInitialPos()
    {
        return initialPos;
    }

    /*IEnumerator waitCollisions(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        transform.GetComponent<Rigidbody>().detectCollisions = true;
    }*/

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
