using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Tutorial : MonoBehaviour
{
    public string texto;
    private TMP_Text text;
    // Start is called before the first frame update
    void Start()
    {
        text = transform.GetChild(0).GetComponent<TMP_Text>();

        text.text = texto;

        
    }

   

    
}
