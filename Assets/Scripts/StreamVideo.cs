using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class StreamVideo : MonoBehaviour
{

    public RawImage rawImage;
    public VideoPlayer videoPlayer;
    public Image background;
    public GameObject menuStart;

    //public AudioSource audio;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(playVideo());
    }

    // Update is called once per frame
    IEnumerator playVideo () {
        videoPlayer.Prepare();
        WaitForSeconds second = new WaitForSeconds(1);
        while (!videoPlayer.isPrepared){
            yield return second;
            break;
        }
        rawImage.texture = videoPlayer.texture;
        videoPlayer.Play();
        //audio.Play();
        videoPlayer.loopPointReached += EndReached;
    }

    void EndReached(UnityEngine.Video.VideoPlayer vp)
    {
        rawImage.enabled = false;
        menuStart.SetActive(true);
        background.enabled = true;
    }
}
