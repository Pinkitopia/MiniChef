﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RollerTool : Tool
{
    // Start is called before the first frame update
    private bool enabled = false;
    public bool touchDetected = false;

    private PlayerController controller;

    private GameObject cam;

    public float minMax = 5.0f;

    public float movementSpeed = 10.0f;

    private Collider[] colliders;

    private float xMax;
    private float xMin;

    void Start()
    {
        base.Start();
        controller = GameObject.FindGameObjectWithTag("PlayerGameObject").GetComponent<PlayerController>();
        cam = GameObject.FindGameObjectWithTag("MainCamera");

        colliders = GetComponents<Collider>();

        xMax = transform.position.x + minMax;
        xMin = transform.position.x - minMax;
    }

    // Update is called once per frame
    void Update()
    {
        if (!touchDetected && enabled){
            moveRoller();
        }

        if(transform.position.x > xMax)
        {
            transform.position = new Vector3(xMax, transform.position.y, transform.position.z);
        }
        if (transform.position.x < xMin)
        {
            transform.position = new Vector3(xMin, transform.position.y, transform.position.z);
        }

    }

    public override bool Action()
    {
        return true;
    }

    public override void MoveAction()
    {
        player.transform.position = new Vector3(transform.position.x, transform.position.y+2, transform.position.z);

        controller.disable();
        enabled = true;

        GameObject.FindGameObjectWithTag("PlayerGameObject").transform.SetParent(transform);

        GetComponentInChildren<FadeOutSprite>().startFading();

    }

    public override void RemoveAction()
    {
        controller.enable();
        enabled = false;

        GameObject.FindGameObjectWithTag("PlayerGameObject").transform.parent = null;

        GetComponentInChildren<FadeIn>().startFading();
    }

    private void moveRoller () {
        float horizontal = Mathf.Abs(Input.GetAxis("Horizontal"));

        if (Mathf.Abs(horizontal) > 0.1f){
            transform.Translate(0, 0, Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed);
            
        }

        //MOVER CAMARA CON EL PLAYER
        cam.transform.position = new Vector3(transform.position.x, controller.transform.position.y + controller.offsetCamera, controller.transform.position.z - controller.offsetCamera);
    
    }

    public void mobileMoveRoller (Vector2 direction) {
        float horizontal = direction.x;

        if (Mathf.Abs(horizontal) > 0.1f){
            transform.Translate(0, 0, horizontal * Time.deltaTime * movementSpeed);
        }

        //MOVER CAMARA CON EL PLAYER
        cam.transform.position = new Vector3(transform.position.x, controller.transform.position.y + controller.offsetCamera, controller.transform.position.z - controller.offsetCamera);
    
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
