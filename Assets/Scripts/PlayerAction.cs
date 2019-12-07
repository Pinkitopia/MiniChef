using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAction : MonoBehaviour
{
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

    // Start is called before the first frame update
    void Start()
    {
        availableTools = GameObject.FindGameObjectsWithTag("Tool");
        anim = GetComponentInChildren<Animator>();
        
    }

    // Update is called once per frame
    void Update()
    {

        //SOLTAR LA HERRAMIENTA SI LA TENEMOS Y PULSAMOS SPACE
        if (Input.GetKeyUp(KeyCode.Space) && toolTaken)
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
                    
                    if (Input.GetKeyUp(KeyCode.Space) && !toolTaken)
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
        if (Input.GetKeyUp(KeyCode.M) && toolTaken)
        {
            if (!tool.isActive)
            {
                tool.Action();
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = true;
            if(Input.GetKeyDown(KeyCode.Space) && !hasSomething){
                other.gameObject.GetComponent<Rigidbody>().isKinematic = true;
                other.gameObject.transform.SetParent(this.transform);
                other.gameObject.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+10, this.transform.position.z);
                hasSomething = true;
            }
        }else if(other.gameObject.tag == "Cookware"){
            if(Input.GetKeyDown(KeyCode.Space) && hasSomething){
                other.gameObject.GetComponent<CookWare>().AnadirIngrediente(this.transform.GetChild(1).gameObject);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Ingredient")
        {
            pushingIngredient = false;
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

