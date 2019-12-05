using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAction : MonoBehaviour
{
    public Tool tool = null;
    private bool toolTaken = false;
    private bool rollingPinTaken = false;

    private Animator anim;

    private GameObject[] availableTools;

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



        //ACTIVAR HERRAMIENTA (SU ACCION PROPIA) SI LA TENEMOS COGIDA
        if (Input.GetKeyUp(KeyCode.M) && toolTaken)
        {
            if (!tool.isActive)
            {
                tool.Action();
            }
        }


    }
}

