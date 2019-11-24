using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraTrigger : MonoBehaviour
{
    private bool active = false;
    private float positionCameraY = 10.0f;
    private float rotationX = 40.0f;
    public float speed = 30.0f;

    public float posCameraY = 2.0f;
    public float rotCameraX = 0.0f;

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
            positionCameraY = posCameraY;
            rotationX = rotCameraX;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        
        if (other.gameObject.Equals(player))
        {
            Debug.Log(positionCameraY);
            active = true;
        }

    }

    private void OnTriggerExit(Collider other)
    {
        
        positionCameraY = 10.0f;
        rotationX = 40.0f;
        speed = Mathf.Lerp(speed, speedAux, Time.deltaTime * 5.0f);
        StartCoroutine(wait());
        
    }

    public float getPositionY()
    {
        return positionCameraY;
    }

    public float getRotationX()
    {
        return rotationX;
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
