using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraTrigger : MonoBehaviour
{
    private bool active = false;
    private float positionCameraX = 0.0f;
    private float positionCameraY = 10.0f;
    private float positionCameraZ = 0.0f;
    private float rotationX = 40.0f;
    private float rotationY = 0.0f;
    public float speed = 30.0f;

    public bool moveX = false;

    public float posCameraX = 0.0f;
    public float posCameraY = 2.0f;
    public float posCameraZ = 0.0f;
    public float rotCameraX = 0.0f;
    public float rotCameraY = 0.0f;


    public GameObject player;

    private float speedAux;

    // Start is called before the first frame update
    void Start()
    {
        speedAux = speed;
        player = GameObject.FindGameObjectWithTag("Player");
        active = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        
        if (other.gameObject.Equals(player))
        {
            
            speed = 2.0f;
            active = true;

            if (posCameraX != 0.0f || posCameraZ != 0.0f)
            {
                moveX = true;
            }

            positionCameraX = posCameraX;
            positionCameraY = posCameraY;
            positionCameraZ = posCameraZ;

            rotationX = rotCameraX;
            rotationY = rotCameraY;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        
        if (other.gameObject.Equals(player))
        {
           active = true;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        moveX = false;
        positionCameraX = 0.0f;
        positionCameraY = 10.0f;
        positionCameraZ = 0.0f;
        rotationX = 40.0f;
        rotationY = 0.0f;
        speed = Mathf.Lerp(speed, speedAux, Time.deltaTime * 5.0f);
        StartCoroutine(wait());
        
    }
    public float getPositionX()
    {
        return positionCameraX;
    }

    public float getPositionY()
    {
        return positionCameraY;
    }
    public float getPositionZ()
    {
        return positionCameraZ;
    }

    public float getRotationX()
    {
        return rotationX;
    }

    public float getRotationY()
    {
        return rotationY;
    }

    public bool isActive()
    {
        return active;
    }

    IEnumerator wait()
    {
        yield return new WaitForSeconds(2.0f);
        active = false;
    }

    
}
