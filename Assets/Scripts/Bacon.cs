using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bacon : Ingredient
{
    // Start is called before the first frame update
    void Start()
    {
        state = FoodState.baconState.raw;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
