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

    public void recover(){
        if(this.name == "ternera"){
            this.GetComponent<Beef>().state = FoodState.beefState.raw;
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(false);
        }else if(this.name == "Brocoli"){
            this.GetComponent<Brocoli>().state = FoodState.brocoliState.giant;
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(false);
        }else if(this.name == "Pepperoni"){
            this.GetComponent<Pepperoni>().state = FoodState.pepperoniState.raw;
            this.transform.GetChild(0).gameObject.SetActive(true);
            this.transform.GetChild(1).gameObject.SetActive(false);
        }
        transform.position = initialPosition;
        transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
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

        
        if (col.gameObject.tag == "Player")
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
