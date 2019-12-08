using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class BotonContinuarGameOver : MonoBehaviour
{

    private int language;

    public TextMeshProUGUI gameover;

    public TextMeshProUGUI pointss;
    // Start is called before the first frame update
    void Start()
    {
        int points = PlayerPrefs.GetInt("points", 0);
        language = PlayerPrefs.GetInt("language", 0);
        if (language == 0 && points <= 0) gameover.text = "GAME OVER. The giants felt hungry and ate you";
        else if (language == 0 && points > 0) gameover.text = "Congratulations! You managed to escape Giant Kitchen!";
        else if (language == 1 && points > 0) gameover.text = "¡Enhorabuena! ¡Has conseguido escapar de la cocina gigante!";
        else gameover.text = "PARTIDA PERDIDA. No pudiste dar de comer a los gigantes... ¡Y te comieron!";
        pointss.text = points + "p";
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onClick() {
        SceneManager.LoadScene(0, LoadSceneMode.Single);
    }
}
