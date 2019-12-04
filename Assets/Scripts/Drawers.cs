using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drawers : MonoBehaviour
{
    public Vector3 posMax;
    public bool blockX = true;
    public bool blockY = true;
    public bool blockZ = true;
    public float timeOpened;
    private Vector3 posMin;
    private bool hasOpened = false;
    private float cooldown = 0;

    void Start()
    {
        posMin = this.transform.position;
    }

    void Update()
    {
        if (cooldown > 0)
        {
            if(cooldown >= timeOpened)
            {
                this.transform.position = Vector3.Lerp(this.transform.position, posMin, Time.deltaTime*2.0f);
                cooldown = 0;
                hasOpened = false;
            }
            else
            {
                cooldown += Time.deltaTime;
            }
        }
    }

    public void open(Vector3 newPos)
    {
        transform.position = new Vector3((blockX == true ? this.transform.position.x : (posMax.x < posMin.x ? Mathf.Min(Mathf.Max(newPos.x, posMax.x),posMin.x) : Mathf.Max(Mathf.Min(newPos.x, posMax.x), posMin.x))),
            (blockY == true ? this.transform.position.y : (posMax.y < posMin.y ? Mathf.Min(Mathf.Max(newPos.y, posMax.y), posMin.y) : Mathf.Max(Mathf.Min(newPos.y, posMax.y), posMin.y))),
            (blockZ == true ? this.transform.position.z : (posMax.z < posMin.z ? Mathf.Min(Mathf.Max(newPos.z, posMax.z), posMin.z) : Mathf.Max(Mathf.Min(newPos.z, posMax.z), posMin.z)))
            );
        cooldown = 0.1f;
    }

    public void release()
    {
        hasOpened = true;
    }
}
