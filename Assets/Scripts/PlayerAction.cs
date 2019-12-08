﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAction : MonoBehaviour
{
    public float ingreHeight = 5;
    public Tool tool = null;
    private bool toolTaken = false;
    private bool rollingPinTaken = false;
    private bool usingPan = false;
    private bool usingPot = false;
    public bool pushingIngredient = false;
    public AudioClip pickUp;
    public AudioClip drop;

    public AudioSource playerSound;

    private Animator anim;

    private GameObject[] availableTools;

    private bool hasSomething;
    private GameObject myIngredient;
    private bool justNow = false;
    private bool dontDrop = false;

    public ButtonController button;

    public ButtonMController buttonM;

    // Start is called before the first frame update
    void Start()
    {
        button = GameObject.FindGameObjectWithTag("Button").GetComponent<ButtonController>();
        availableTools = GameObject.FindGameObjectsWithTag("Tool");
        anim = GetComponentInChildren<Animator>();
        buttonM = GameObject.FindGameObjectWithTag("ButtonM").GetComponent<ButtonMController>();
    }

    // Update is called once per frame
    void Update()
    {

        //SOLTAR LA HERRAMIENTA SI LA TENEMOS Y PULSAMOS SPACE
        if ((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && toolTaken)
        {
            tool.RemoveAction();
            tool = null;
            toolTaken = false;
            playerSound.clip = drop;
            playerSound.Play();
            return;
        }

        if (!toolTaken)
        {
            
            foreach (GameObject obj in availableTools)
            {
                if (obj.GetComponent<Tool>().playerNear)
                {
                    Debug.Log("Estoy cerca");
                    
                    if ((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && !toolTaken)
                    {
                        //COGER HERRAMIENTA
                        tool = obj.GetComponent<Tool>();
                        tool.MoveAction();
                        toolTaken = true;
                        playerSound.clip = pickUp;
                        playerSound.Play();
                    }
                }
            }
        }

        //CONTROL DE ANIMACIONES
        if(toolTaken && tool.name == "RollingPin")
        {
            rollingPinTaken = true;
        }
        else
        {
            rollingPinTaken = false;
        }
        anim.SetBool("toolTaken", toolTaken);
        anim.SetBool("rollingPinTaken", rollingPinTaken);
        anim.SetBool("pushingIngredient", pushingIngredient);


        //ACTIVAR HERRAMIENTA (SU ACCION PROPIA) SI LA TENEMOS COGIDA
        if ((Input.GetKeyUp(KeyCode.M) || buttonM.getPulsado()) && toolTaken)
        {
            if (!tool.isActive)
            {
                tool.Action();
            }
        }

        if ((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && hasSomething && !justNow && !dontDrop)
        {
                myIngredient.GetComponent<Rigidbody>().isKinematic = false;
                //myIngredient.GetComponent<Rigidbody>().detectCollisions = true;
                if(myIngredient.name == "MasaPizza"){
                    myIngredient.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
                    myIngredient.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
                    myIngredient.transform.position = new Vector3(myIngredient.transform.position.x,0f,myIngredient.transform.position.z);
                }else{
                    myIngredient.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
                }
                myIngredient.transform.SetParent(null);
                hasSomething = false;
        }else if(justNow){
                justNow = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = true;
        }else if(other.gameObject.tag == "Cookware"){
            dontDrop = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = true;
            if((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && !hasSomething){
                other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
                //other.gameObject.GetComponent<Rigidbody>().detectCollisions = false;
                other.gameObject.transform.SetParent(this.transform);
                other.gameObject.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionZ | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
                other.gameObject.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+ingreHeight, this.transform.position.z);
                other.gameObject.transform.rotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
                hasSomething = true;
                myIngredient = other.gameObject;
                justNow = true;
            }
        }else if(other.gameObject.tag == "Cookware"){
            dontDrop = true;
            if((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && hasSomething){
                
                myIngredient.transform.parent = null;
                other.gameObject.GetComponent<CookWare>().AnadirIngrediente(myIngredient);
                hasSomething = false;
            }else if((Input.GetKeyDown(KeyCode.Space) || button.getPulsado()) && !hasSomething){
                other.gameObject.GetComponent<CookWare>().EnviarIngrediente();
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = false;
        }else if(other.gameObject.tag == "Cookware"){
            dontDrop = false;
        }
    }

    public bool GetRollingPin()
    {
        return rollingPinTaken;
    }

    public bool GetPan()
    {
        return usingPan;
    }

    public bool GetPot()
    {
        return usingPot;
    }
}

