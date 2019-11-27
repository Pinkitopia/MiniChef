using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeOutSprite : MonoBehaviour
{

    public float velocity;
    SpriteRenderer rend;

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponent<SpriteRenderer>();
        Color c = rend.material.color;
        c.a = 0f;
        rend.material.color = c;

    }

    IEnumerator fadeOut()
    {
        for (float f = 1f; f >= -0.05f; f -= velocity)
        {
            Color c = rend.material.color;
            c.a = f;
            rend.material.color = c;
            yield return new WaitForSeconds(0.05f);
        }
    }

    public void startFading()
    {
        StartCoroutine(fadeOut());
    }
}
