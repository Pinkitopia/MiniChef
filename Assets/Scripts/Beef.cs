using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Beef : Ingredient
{
    public Material cocinado;
    public Material quemado;

    private void Start()
    {
        state = FoodState.beefState.raw;    
    }

    void OnTriggerEnter(Collider col)
    {

        if (col.gameObject.name == "KnifeKitchen" && GameObject.FindGameObjectWithTag("CutPosition").GetComponent<PosIngredient>().isReady)
        {
            this.cut();
            Debug.Log("CORTADO");
        }
    }

    public override bool cook()
    {
        Debug.Log("Cocinao");
        if(state == FoodState.beefState.raw)
        {
            Material yourMaterial = cocinado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            return true;
        }
        else if (state == FoodState.beefState.dicedRaw)
        {
            Material yourMaterial = cocinado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            state = FoodState.beefState.dicedCooked;
            return true;
        }
        else if (state == FoodState.beefState.cooked)
        {
            Material yourMaterial = quemado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            return true;
        }
        else if (state == FoodState.beefState.dicedCooked)
        {
            Material yourMaterial = quemado;
            this.GetComponent<Renderer>().sharedMaterial = yourMaterial;
            state = FoodState.beefState.cooked;
            return true;
        }
        else
        {
            return false;
        }

        
    }

    public override bool cut()
    {
        if (state == FoodState.beefState.raw)
        {
            transform.GetChild(0).gameObject.SetActive(false);
            
            transform.GetChild(1).gameObject.SetActive(true);
            state = FoodState.beefState.dicedRaw;
            return true;
        }
        else
            return false;
    }

    public void SetParent(GameObject obj)
    {
        transform.SetParent(obj.transform);
    }

    public void RemoveParent(GameObject obj)
    {
        transform.parent = null;
    }
}
