using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LukashaMovement : MonoBehaviour
{

    public float movementSpeed = 20.0f;
    public float rotationSpeed = 20.0f;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(Mathf.Atan2(-1,-1)*Mathf.Rad2Deg);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0, 0, Input.GetAxis("Vertical") * Time.deltaTime * rotationSpeed);
        transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime * movementSpeed, 0, 0);
        var angle = 0f;

        angle = Mathf.Atan2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"))* Mathf.Rad2Deg;

        if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.A)){
            transform.GetChild(0).eulerAngles = new Vector3(0,angle,0);
        }
    }
}
