/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using ZXing.QrCode;
using System;


public class uwuntu : MonoBehaviour
{
    // Start is called before the first frame update

    private WebCamTexture camTexture;
    private Rect screenRect;

    private Boolean activo = false;

    void Start()
    {
        screenRect = new Rect(0, 0, Screen.width, Screen.height);
        camTexture = new WebCamTexture();
        camTexture.requestedHeight = Screen.height; 
        camTexture.requestedWidth = Screen.width;
        if (camTexture != null) {
            camTexture.Play();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onClick() {
        activo = !activo;
    }

    void OnGUI () {

        if (activo){
            // drawing the camera on screen
            GUI.DrawTexture (screenRect, camTexture, ScaleMode.ScaleToFit);
            // do the reading — you might want to attempt to read less often than you draw on the screen for performance sake
            try {
                IBarcodeReader barcodeReader = new BarcodeReader ();
                // decode the current frame
                var result = barcodeReader.Decode(camTexture.GetPixels32(),
                camTexture.width, camTexture.height);
                if (result != null) {
                Debug.Log("DECODED TEXT FROM QR: " + result.Text);
                }
            } catch(Exception ex) { Debug.LogWarning (ex.Message); }
        }
        
    }
}
*/