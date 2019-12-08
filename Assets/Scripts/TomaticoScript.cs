using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TomaticoScript : MonoBehaviour
{
    private bool playerNear = false;
    private bool masaNear = false;
    private GameObject player;
    private GameObject masa;


    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        masa = GameObject.Find("MasaPizza");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && playerNear && masaNear)
        {
            masa.GetComponent<Dough>().addTomato();
            
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeIn>().startFading();
            playerNear = true;
        }else if(other.gameObject.Equals(masa)){
            masaNear = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            playerNear = true;
        }else if(other.gameObject.Equals(masa)){
            masaNear = true;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeOutSprite>().startFading();
            playerNear = false;
        }else if(other.gameObject.Equals(masa)){
            masaNear = true;
        }
    }
}
