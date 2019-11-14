using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float delay = 0.1f;
    public float movementSpeed = 10.0f;
    public float rotationSpeed = 10.0f;
    public float offsetCamera = 10.0f;

    float speed = 0.0f;

    Animator anim;

    GameObject cam;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(Mathf.Atan2(-1,-1)*Mathf.Rad2Deg);
        anim = transform.GetChild(0).GetComponent<Animator>();
        cam = GameObject.FindGameObjectWithTag("MainCamera");
    }

    // Update is called once per frame
    void Update()
    {
        float vertical = Mathf.Abs(Input.GetAxis("Vertical"));
        float horizontal = Mathf.Abs(Input.GetAxis("Horizontal"));

        transform.Translate(0, 0, Input.GetAxis("Vertical") * Time.deltaTime * movementSpeed);
        transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed, 0, 0);

        //MOVER CAMARA CON EL PLAYER
        cam.transform.position = new Vector3(transform.GetChild(0).position.x, 10, transform.GetChild(0).position.z - offsetCamera); 
       
        var angle = 0f;

        angle = Mathf.Atan2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"))* Mathf.Rad2Deg;

        if (Mathf.Abs(vertical) > delay || Mathf.Abs(horizontal) > delay){
            transform.GetChild(0).rotation = Quaternion.Slerp(transform.GetChild(0).rotation, Quaternion.Euler(0, angle, 0), Time.deltaTime * rotationSpeed);
            //ESTE METODO HACE QUE EL PERSONAJE GIRE DE FORMA SUAVE
        }
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
}
