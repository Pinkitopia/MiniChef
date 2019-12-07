using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OnlyForDiced : MonoBehaviour
{
    private GameObject player;
    private bool playerNear = false;
    private bool isTaken = false;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        if (isTaken && Input.GetKeyDown(KeyCode.Space))
        {
            isTaken = false;
            transform.parent.GetComponent<Rigidbody>().detectCollisions = true;
            transform.parent.GetComponent<Rigidbody>().isKinematic = false;
            transform.GetComponent<BoxCollider>().enabled = true;
            transform.GetComponentInParent<Beef>().RemoveParent(player.gameObject);
        }
        else if (playerNear && Input.GetKeyDown(KeyCode.Space))
        {
            transform.parent.GetComponent<Rigidbody>().detectCollisions = false;
            transform.parent.GetComponent<Rigidbody>().isKinematic = true;
            transform.GetComponent<BoxCollider>().enabled = false;
            transform.GetComponentInParent<Beef>().SetParent(player.gameObject);
            isTaken = true;
        }

        if (isTaken)
        {
            transform.parent.transform.position = new Vector3(player.transform.position.x, player.transform.position.y + 2.5f, player.transform.position.z);
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
