using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ErnestoMovement : MonoBehaviour
{
    public float inputDelay = 0.1f;
    public float forwardVel = 12;
    public float rotateVel = 100;

    Quaternion targetRotation;

    Rigidbody rbody;

    float forwardInput, turnInput;

    public Quaternion TargetRotation
    {
        get { return targetRotation;  }
    }

    void Start()
    {
        targetRotation = transform.rotation;
        if (GetComponent<Rigidbody>())
            rbody = GetComponent<Rigidbody>();
        else
            Debug.LogError("The character needs a rigidbody");

        forwardInput = turnInput = 0;
    }

    void GetInput()
    {
        forwardInput = Input.GetAxis("Vertical");
        turnInput = Input.GetAxis("Horizontal");
        Debug.Log(turnInput);
    }

    void Update()
    {
        GetInput();
        Turn();
    }

    void FixedUpdate()
    {
        Run();
    }

    void Run()
    {
        if(Mathf.Abs(forwardInput) > inputDelay) //Si supera el retraso, para darle suavidad al input.
        {
            //MOVE
            rbody.velocity = transform.forward * forwardInput * forwardVel;
        }
        else
        {
            //ZERO VELOCITY
            rbody.velocity = Vector3.zero;
        }
    }

    void Turn()
    {
        if(Mathf.Abs(turnInput) > inputDelay)
        {
            targetRotation *= Quaternion.AngleAxis(rotateVel * turnInput * Time.deltaTime, Vector3.up);
        }
        
        transform.rotation = targetRotation;
    }
}
