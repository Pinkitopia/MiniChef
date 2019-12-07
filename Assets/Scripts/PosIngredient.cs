using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PosIngredient : MonoBehaviour
{
    public bool isReady = false;
    public bool cortado = false;

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Ingredient2")
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
        if(isReady && cortado)
        {
            StartCoroutine(wait(4.0f));
        }
    }

    IEnumerator wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);
        isReady = false;
        cortado = false;
    }






}
