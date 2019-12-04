﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//holaaa
public class PlayerController : MonoBehaviour
{
    public float delay = 0.1f;
    public float movementSpeed = 10.0f;
    public float rotationSpeed = 10.0f;
    public float offsetCamera = 10.0f;

    private float vertical = 0.0f;
    private float horizontal = 0.0f;

    float speed = 0.0f;

    public bool touchDetected = false;

    Animator anim;

    GameObject cam;
    public GameObject[] camTriggers;

    [SerializeField]
    private bool enabled = true;
    // Start is called before the first frame update
    void Start()
    {
        anim = transform.GetChild(0).GetComponent<Animator>();
        cam = GameObject.FindGameObjectWithTag("MainCamera");
        cam.transform.position = new Vector3(transform.GetChild(0).position.x, 10, transform.GetChild(0).position.z - offsetCamera);
        
    }

    // Update is called once per frame
    void Update()
    {
        //Si no se está tocando la pantalla, lanzamos el move Player
        //Comprueba los input de teclado y ejecuta el movimiento.
        if (!touchDetected && enabled)
            movePlayer();

        if (enabled) animatePlayer();

    }

    void animatePlayer () {
        //VELOCIDAD PARA ANIMACIONES ES UNA ÑAPA ENORME PERO FUNCIONA BIEN Y QUEDA GUAY Y NO SE HACERLO DE OTRA FORMA :D
        if (vertical != 0 || horizontal != 0)
            speed += 0.1f;
        else
            speed -= 0.1f;

        if (speed > 1.5f)
            speed = 1.5f;
        if (speed < 0)
            speed = 0;
       
    
        anim.SetFloat("VerticalVelocity", speed);
    }

    void movePlayer () { //Mover al personaje CON EL TECLADO O UN CONTROLADOR
        vertical = Mathf.Abs(Input.GetAxis("Vertical"));
        horizontal = Mathf.Abs(Input.GetAxis("Horizontal"));

        if (Mathf.Abs(vertical) > delay || Mathf.Abs(horizontal) > delay){
            transform.Translate(0, 0, Input.GetAxis("Vertical") * Time.deltaTime * movementSpeed);
            transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed, 0, 0);

            var angle = 0f;

            angle = Mathf.Atan2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical")) * Mathf.Rad2Deg;

            transform.GetChild(0).rotation = Quaternion.Slerp(transform.GetChild(0).rotation, Quaternion.Euler(0, angle, 0), Time.deltaTime * rotationSpeed);
            //ESTE METODO HACE QUE EL PERSONAJE GIRE DE FORMA SUAVE

        }
        if (camTriggers[0].GetComponent<CameraTrigger>().isActive())
        {
            if (camTriggers[0].GetComponent<CameraTrigger>().moveX)
            {
                cam.transform.position = Vector3.Slerp(cam.transform.position, new Vector3(camTriggers[0].GetComponent<CameraTrigger>().getPositionX(), camTriggers[0].GetComponent<CameraTrigger>().getPositionY(), camTriggers[0].GetComponent<CameraTrigger>().getPositionZ() - offsetCamera), Time.deltaTime * camTriggers[0].GetComponent<CameraTrigger>().speed);
            }
            else
            {

                cam.transform.position = Vector3.Slerp(cam.transform.position, new Vector3(transform.GetChild(0).position.x, camTriggers[0].GetComponent<CameraTrigger>().getPositionY(), transform.GetChild(0).position.z - offsetCamera), Time.deltaTime * camTriggers[0].GetComponent<CameraTrigger>().speed);
            }

            cam.transform.rotation = Quaternion.Slerp(cam.transform.rotation, Quaternion.Euler(camTriggers[0].GetComponent<CameraTrigger>().getRotationX(), camTriggers[0].GetComponent<CameraTrigger>().getRotationY(), 0), Time.deltaTime * camTriggers[0].GetComponent<CameraTrigger>().speed);
        }
        else if (camTriggers[1].GetComponent<CameraTrigger>().isActive())
        {
            if (camTriggers[1].GetComponent<CameraTrigger>().moveX)
            {
                cam.transform.position = Vector3.Slerp(cam.transform.position, new Vector3(camTriggers[1].GetComponent<CameraTrigger>().getPositionX(), camTriggers[1].GetComponent<CameraTrigger>().getPositionY(), camTriggers[1].GetComponent<CameraTrigger>().getPositionZ() - offsetCamera), Time.deltaTime * camTriggers[1].GetComponent<CameraTrigger>().speed);
            }
            else
            {

                cam.transform.position = Vector3.Slerp(cam.transform.position, new Vector3(transform.GetChild(0).position.x, camTriggers[1].GetComponent<CameraTrigger>().getPositionY(), transform.GetChild(0).position.z - offsetCamera), Time.deltaTime * camTriggers[1].GetComponent<CameraTrigger>().speed);
            }

            cam.transform.rotation = Quaternion.Slerp(cam.transform.rotation, Quaternion.Euler(camTriggers[1].GetComponent<CameraTrigger>().getRotationX(), camTriggers[1].GetComponent<CameraTrigger>().getRotationY(), 0), Time.deltaTime * camTriggers[1].GetComponent<CameraTrigger>().speed);

            //Debug.Log(camTrigger.GetComponent<CameraTrigger>().getPositionY());


        }
        else
        {
            cam.transform.position = Vector3.Slerp(cam.transform.position, new Vector3(transform.GetChild(0).position.x, camTriggers[1].GetComponent<CameraTrigger>().getPositionY(), transform.GetChild(0).position.z - offsetCamera), Time.deltaTime * camTriggers[1].GetComponent<CameraTrigger>().speed);
            cam.transform.rotation = Quaternion.Slerp(cam.transform.rotation, Quaternion.Euler(camTriggers[0].GetComponent<CameraTrigger>().getRotationX(), camTriggers[0].GetComponent<CameraTrigger>().getRotationY(), 0), Time.deltaTime * camTriggers[0].GetComponent<CameraTrigger>().speed);
        }
            
            //MOVER CAMARA CON EL PLAYER

            
        
        
        
        
        
        
    }

    public void moveMobilePlayer (Vector2 direction) {

        if (!enabled){
            transform.parent.gameObject.GetComponent<RollerTool>().mobileMoveRoller(direction);
            return;
        }
        //Mover al personaje CON LOS CONTROLES TÁCTILES (Joystick Virtual)
        //ESTE MÉTODO ES EJECUTADO DESDE VIRTUALJOYSTICK.CS
        vertical = Mathf.Abs(direction.y);
        horizontal = Mathf.Abs(direction.x);

        if (Mathf.Abs(vertical) > delay || Mathf.Abs(horizontal) > delay){
            transform.Translate(0, 0, direction.y * Time.deltaTime * movementSpeed);
            transform.Translate(direction.x * Time.deltaTime * movementSpeed, 0, 0);

            //MOVER CAMARA CON EL PLAYER
            cam.transform.position = new Vector3(transform.GetChild(0).position.x, cam.transform.position.y, transform.GetChild(0).position.z - offsetCamera);

            var angle = 0f;

            angle = Mathf.Atan2(direction.x, direction.y) * Mathf.Rad2Deg;

            transform.GetChild(0).rotation = Quaternion.Slerp(transform.GetChild(0).rotation, Quaternion.Euler(0, angle, 0), Time.deltaTime * rotationSpeed);
            //ESTE METODO HACE QUE EL PERSONAJE GIRE DE FORMA SUAVE
        }
    }

    public void enable () {
        enabled = true;
    }

    public void disable () {
        enabled = false;
    }
}
