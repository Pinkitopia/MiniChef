using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brocoli : Ingredient
{
    private bool cutState = false;
   

    void Start()
    {
        state = FoodState.brocoliState.giant;
        gameObject.transform.GetChild(1).gameObject.SetActive(false);
    }

    void OnTriggerEnter(Collider col)
    {

        if (col.gameObject.name == "KnifeKitchen" && GameObject.FindGameObjectWithTag("CutPosition").GetComponent<PosIngredient>().isReady)
        {
            this.cut();
            Debug.Log("CORTADO");
        }
    }

    public override bool cut()
    {
        if (state == FoodState.brocoliState.giant)
        {
            if (!cutState)
            {
                gameObject.transform.GetChild(0).gameObject.SetActive(false);
                cutState = true;
                gameObject.transform.GetChild(1).gameObject.SetActive(true);
                return true;
            }
            state = FoodState.brocoliState.diced;
            return true;
        }
        else
        {
            return false;
        }
    }

    public override bool cook()
    {
        if (!cutState)
        {
            state = FoodState.brocoliState.giantCooked;

        }
        else
        {
            state = FoodState.brocoliState.dicedCooked;

        }
        return true;
    }

}