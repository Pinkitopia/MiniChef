using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAction : MonoBehaviour
{
    public Tool tool = null;
    private bool toolTaken = false;
    

    private GameObject[] availableTools;

    // Start is called before the first frame update
    void Start()
    {
        availableTools = GameObject.FindGameObjectsWithTag("Tool");
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && toolTaken)
        {
            tool.RemoveAction();
            tool = null;
            toolTaken = false;
            return;
        }

        foreach (GameObject obj in availableTools)
        {
            Vector3 vecPO = obj.transform.position - transform.position;
            float distancePO = vecPO.sqrMagnitude;

            //SI EL PERSONAJE ESTA A DISTANCIA 5 DE LA HERRAMIENTA QUE LA PUEDA COGER
            if(distancePO < 25.0f)
            {
                if (Input.GetKeyDown(KeyCode.Space) && !toolTaken)
                {
                    //COGER HERRAMIENTA
                    tool = obj.GetComponent<Tool>();
                    tool.MoveAction();
                    toolTaken = true;
                }
            }
        }

        if (Input.GetKeyDown(KeyCode.M) && toolTaken)
        {
            if (!tool.isActive)
            {
                tool.Action();
            }
        }
        
        
    }
}
