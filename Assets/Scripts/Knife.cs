using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knife : MonoBehaviour
{

    public Animator anim;
    private bool playerNear = false;
    private GameObject player;

    public AudioClip sonidoCuchillo1;
    public AudioClip sonidoCuchillo2;
    public AudioSource sourceCuchillo;


    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        player = GameObject.FindGameObjectWithTag("Player");
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && playerNear)
        {
            anim.SetTrigger("space");
            sourceCuchillo.clip = Random.value > 0.5f ? sonidoCuchillo1 : sonidoCuchillo2;
            sourceCuchillo.Play();
        }
    }

    private void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeIn>().startFading();
            playerNear = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            playerNear = true;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.Equals(player))
        {
            GetComponentInChildren<FadeOutSprite>().startFading();

        }

        playerNear = false;
    }
}
