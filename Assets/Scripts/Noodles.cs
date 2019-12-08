using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Noodles : Ingredient
{
    // Start is called before the first frame update
    void Start()
    {
        state = FoodState.noodlesState.ball;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override bool boil () {
        if (state == FoodState.noodlesState.ball){
            state = FoodState.noodlesState.boiled;
            return true;
        } else {
            return false;
        }
    }

    public override bool cook(){
        if (state == FoodState.noodlesState.boiled){
            state = FoodState.noodlesState.cooked;
            return true;
        } else {
            return false;
        }
    }
}
