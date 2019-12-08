using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bowl : Ingredient
{
    public bool soy = false;

    public bool salt = false;

    public bool ternera = false;

    public bool brocoli = false;

    public bool noodles = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void generateFields(bool ternBool, bool brocBool, bool noodBool){
        ternera = ternBool;
        brocoli = brocBool;
        noodles = noodBool;
    }
}
