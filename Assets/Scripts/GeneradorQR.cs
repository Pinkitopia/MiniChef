/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using ZXing.QrCode;
using UnityEngine.UI;

public class GeneradorQR : MonoBehaviour
{
    // Start is called before the first frame update

    public InputField input;
    public Image imagen;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onClick() {
        string text = input.text;
        imagen.sprite = Sprite.Create(generateQR(text), new Rect (0, 0, 256, 256), new Vector2());
    }

    private static Color32[] Encode(string textForEncoding, int width, int height) {
        var writer = new BarcodeWriter {
            Format = BarcodeFormat.QR_CODE,
            Options = new QrCodeEncodingOptions {
            Height = height,
            Width = width
            }
        };
        return writer.Write(textForEncoding);
    }

    public Texture2D generateQR(string text) {
        var encoded = new Texture2D (256, 256);
        var color32 = Encode(text, encoded.width, encoded.height);
        encoded.SetPixels32(color32);
        encoded.Apply();
        return encoded;
    }
}
*/