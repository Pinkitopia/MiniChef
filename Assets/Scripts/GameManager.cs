using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject player;
    public Canvas canvas;

    public Sprite[] sprites; 
    /*
    0 = Pan
    1 = Dough
    2 = Pot
    3 = BackgroundRed
    4 = BackgroundYellow
    5 = BackgroundGreen
    6 = Knife
         */

    
    private GameObject backgroundImg;
    private GameObject uiTool;
    // Start is called before the first frame update
    void Start()
    {
        backgroundImg = canvas.transform.GetChild(3).gameObject;
        uiTool = canvas.transform.GetChild(4).gameObject;

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
