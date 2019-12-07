using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ComprobadorPedidos : MonoBehaviour
{

    private List <Pedido> lista;
    private Generador generaPedidos;

    // Start is called before the first frame update
    void Start()
    {
        generaPedidos = this.GetComponent<Generador> ();
        
    }

    // Update is called once per frame
    void Update()
    {
        lista = generaPedidos.tasks;
    }

    
    public void comprobarPedido (GameObject recipe){
        bool correct = true;
        if (recipe.name == "Dough"){
            //Tenemos una pizza
            List <Ingredient> toppings = recipe.GetComponent<Dough>().toppings;
            if (toppings.Count == 4 && recipe.GetComponent<Dough>().tomato){
                ID [] correctStates = new ID [2];
                correctStates[1] = FoodState.cheeseState.spread;
                correctStates[0] = FoodState.pepperoniState.sliced;
                for (int i = 0; i < 3; i++){
                    Ingredient actual = toppings[0];
                    int j = 0;
                    while (actual.state != correctStates[i] && j < toppings.Count-1){
                        j+=1;
                        actual = toppings[j];
                    }
                    if (j == toppings.Count-1){
                        if (actual.state == correctStates[i]){
                            toppings.RemoveAt(j);
                        } else {
                            correct = false;
                        }
                    } else {
                        toppings.RemoveAt(j);
                    }
                }

                //Comprobar bacon o piña
                if (correct){
                    Ingredient ultimo = toppings[0];
                    toppings.RemoveAt(0);
                    correct = (ultimo.state == FoodState.baconState.raw || ultimo.state == FoodState.pineappleState.raw);
                }
                if (correct){
                    correct = (recipe.GetComponent<Dough>().state == FoodState.doughState.cooked);
                }
            } else {
                correct = false;
            }
            if (correct){
                //Borrar una pizza de la lista de pedidos
                //Enseñar al jugador algo visual de que lo ha hecho bien
            }
        } else if (recipe.name == "Bowl"){
            //Tenemos unos noodles
        
            List <Ingredient> ingredients = recipe.GetComponent<Bowl>().ingredients;
            if ((ingredients.Count == 4 && generaPedidos.difficulty == Generador.Difficulty.MEDIUM) || (ingredients.Count == 4 && generaPedidos.difficulty == Generador.Difficulty.EASY) || (generaPedidos.difficulty == Generador.Difficulty.HARD && ingredients.Count == 4 && recipe.GetComponent<Bowl>().salt && recipe.GetComponent<Bowl>().soy)){
                ID [] correctStates = new ID [3];
                correctStates[1] = FoodState.beefState.dicedCooked;
                correctStates[2] = FoodState.brocoliState.dicedCooked;
                correctStates[3] = FoodState.noodlesState.cooked;
                for (int i = 0; i < 3; i++){
                    Ingredient actual = ingredients[0];
                    int j = 0;
                    while (actual.state != correctStates[i] && j < ingredients.Count-1){
                        j+=1;
                        actual = ingredients[j];
                    }
                    if (j == ingredients.Count-1){
                        if (actual.state == correctStates[i]){
                            ingredients.RemoveAt(j);
                        } else {
                            correct = false;
                        }
                    } else {
                        ingredients.RemoveAt(j);
                    }
                }
            } else {
                correct = false;
            }

        }

        
    }
}
