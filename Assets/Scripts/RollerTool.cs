using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RollerTool : Tool
{
    // Start is called before the first frame update
    private bool enabled = false;
    public bool touchDetected = false;

    private PlayerController controller;

    private GameObject cam;

    public float offsetCamera = 10.0f;

    public float movementSpeed = 10.0f;

    void Start()
    {
        base.Start();
        controller = player.GetComponent<PlayerController>();
        cam = GameObject.FindGameObjectWithTag("MainCamera");
    }

    // Update is called once per frame
    void Update()
    {
        if (!touchDetected && enabled){
            moveRoller();
        }
    }

    public override bool Action()
    {
        return true;
    }

    public override void MoveAction()
    {
        player.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);

        //controller.disable();
        enabled = true;
    }

    public override void RemoveAction()
    {
        //controller.enable();
        enabled = false;
    }

    private void moveRoller () {
        float horizontal = Mathf.Abs(Input.GetAxis("Horizontal"));

        if (Mathf.Abs(horizontal) > 0.1f){
            transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed, 0, 0);
        }

        //MOVER CAMARA CON EL PLAYER
        cam.transform.position = new Vector3(transform.position.x, 10, transform.position.z - offsetCamera);
    
    }

    public void mobileMoveRoller (Vector2 direction) {
        float horizontal = Mathf.Abs(direction.x);

        if (Mathf.Abs(horizontal) > 0.1f){
            transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed, 0, 0);
        }

        //MOVER CAMARA CON EL PLAYER
        cam.transform.position = new Vector3(transform.position.x, 10, transform.position.z - offsetCamera);
    
    }


}
