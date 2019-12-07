using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlAnimsPlayer : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.tag == "Ingredient")
        {
            transform.parent.GetComponent<PlayerAction>().pushingIngredient = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {

        if (other.gameObject.tag == "Ingredient")
        {
            transform.parent.GetComponent<PlayerAction>().pushingIngredient = false;
        }
    }


}
