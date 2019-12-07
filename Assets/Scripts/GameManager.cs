using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    private GameObject player;
    private Canvas canvas;

    public Texture[] sprites; 
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

    private PlayerAction playerAction;
    private ChangeImage changeImage;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("PlayerGameObject");
        //backgroundImg = canvas.transform.GetChild(3).gameObject;
        //uiTool = canvas.transform.GetChild(4).gameObject;
        playerAction = player.GetComponent<PlayerAction>();
        changeImage = GameObject.FindGameObjectWithTag("UISprite").GetComponent<ChangeImage>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (playerAction.GetRollingPin())
        {
           
            GameObject.FindGameObjectWithTag("UISprite").GetComponent<RawImage>().texture = changeImage.images[0];
        }
        else if (playerAction.GetPan())
        {
            GameObject.FindGameObjectWithTag("UISprite").GetComponent<RawImage>().texture = changeImage.images[1];
        }
        else if (playerAction.GetPot())
        {
            GameObject.FindGameObjectWithTag("UISprite").GetComponent<RawImage>().texture = changeImage.images[2];
        }
    }
}
