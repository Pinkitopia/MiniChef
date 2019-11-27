using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirtualJoystick : MonoBehaviour {
    public PlayerController player; //Referencia al personaje
    public float speed = 5.0f; //Velocidad
    private bool touchStart = false;
    private Vector2 pointA; //Punto de inicio del toque en la pantalla (Coords globales)
    private Vector2 pointB; //Punto de toque de la pantalla

    private Vector2 screenPoint; //Punto de inicio del toque en la pantalla (Coords locales del canvas)

    public RectTransform circle; //Referencia al transform de la imagen interna del joystick
    public RectTransform outerCircle; //Referencia al transform de la imagen externa del joystick

    public float spriteSize = 50; //tamaño de anchura del joystick

    void Start () {
        
    }

	// Update is called once per frame
	void Update () {
        if(Input.GetMouseButtonDown(0)){ //Si hemos hecho click en la pantalla
            pointA = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0.0f);
            screenPoint = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            //Almacenamos las posiciones donde hemos hecho click
            circle.position = screenPoint;
            outerCircle.position = screenPoint;
            circle.GetComponent<CanvasRenderer>().SetAlpha(1.0f);
            outerCircle.GetComponent<CanvasRenderer>().SetAlpha(1.0f);
            //Pintamos los círculos del joystick en la pantalla donde hayamos clickado (screenPoint)
            //(Para pintarlos, ponemos su Alpha a 1)
        }
        if(Input.GetMouseButton(0)){ //Si estamos clickando
            player.touchDetected = true;
            touchStart = true; //Ponemos que toque está a true (Jugador tocando la pantalla)
            pointB = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0.0f);
            //Almacenamos el nuevo punto donde el jugador está tocando la pantalla
        }else{ //Si no estamos clickando
            touchStart = false;
            player.touchDetected = false;
            player.moveMobilePlayer(new Vector2 (0.0f, 0.0f));
        }
        
	}
	private void FixedUpdate(){
        if(touchStart){
            Vector2 offset = pointB - pointA;
            Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);
            //Normalizamos el vector dirección a donde se está moviendo el joystick
            //Y por tanto, a donde debemos mover el personaje
            moveCharacter(direction);
            //Lo movemos
            Vector2 newDirection = direction*(spriteSize/2-2f)*-1;
            //Multiplicamos la dirección por el tamaño del sprite entre 4, para mover el
            //joystick interno (Donde se dibuja en la pantalla)
            circle.position = new Vector2(screenPoint.x - newDirection.x, screenPoint.y - newDirection.y);
        }else{
            //Si no estamos tocando la pantalla, escondemos los joystick
            //(Ponemos su alpha a 0 y dejan de verse)
            circle.GetComponent<CanvasRenderer>().SetAlpha(0.0f);
            outerCircle.GetComponent<CanvasRenderer>().SetAlpha(0.0f);
        }

	}
	void moveCharacter(Vector2 direction){
        //FUNCION PROVISIONAL PARA MOVER AL PERSONAJE
        //EDITAR PARA REALIZAR EL MOVIMIENTO CORRESPONDIENTE CORRECTO
        //SEGÚN NUESTROS SCRIPTS DE MOVIMIENTO
        Vector2 finalDirection = new Vector2(direction.x, direction.y);
        //player.Translate(finalDirection * speed * Time.deltaTime);
        player.moveMobilePlayer(finalDirection);
    }
}