using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FadeOut : MonoBehaviour
{

    public RawImage rend;
  
    // Start is called before the first frame update
    void Start()
    {
        rend = this.GetComponent<RawImage>();

        Color c = rend.color;
        c.a = 1f;
        rend.color = c;

        StartCoroutine(cmon());
    }

    IEnumerator fadeOut()
    {
        for (float f = 1f; f >= -0.05f; f -= 0.05f)
        {
            Color c = rend.color;
            c.a = f;
            rend.color = c;
            yield return new WaitForSeconds(0.05f);
        }
    }

    public void startFading()
    {
        StartCoroutine(fadeOut());
    }

    IEnumerator cmon()
    {
        yield return new WaitForSeconds(5);
        startFading();
    }
}
