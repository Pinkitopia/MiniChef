using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMController : MonoBehaviour
{
    public bool pulsado = false;
    public bool cambiar = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
        if (cambiar){
            pulsado = false;
            cambiar = false;
        } 
    }

    public void onClick() {
        pulsado = true;
    }

    public bool getPulsado () {
        if (pulsado){
            cambiar = true;
            return true;
        } else {
            return false;
        }
    }
}
