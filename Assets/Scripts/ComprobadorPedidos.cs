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
        if (recipe.name == "MasaPizza"){
            //Tenemos una pizza
            /*Debug.Log(recipe.transform.GetChild(5).gameObject.activeSelf+" "+
             recipe.transform.GetChild(6).gameObject.activeSelf+" "+
             (recipe.transform.GetChild(4).gameObject.activeSelf ||
              recipe.transform.GetChild(5).gameObject.activeSelf)+" "+
               recipe.GetComponent<Dough>().tomato+" "+
               (recipe.GetComponent<Dough>().state == FoodState.doughState.cooked));*/
            correct = (recipe.transform.GetChild(5).gameObject.activeSelf && recipe.transform.GetChild(6).gameObject.activeSelf && (recipe.transform.GetChild(7).gameObject.activeSelf || recipe.transform.GetChild(8).gameObject.activeSelf));
            if (correct && recipe.GetComponent<Dough>().tomato){
                correct = (recipe.GetComponent<Dough>().state == FoodState.doughState.cooked);
            }
            if (correct){
                Debug.Log("Correct");
                generaPedidos.removeRecipe("Pizza");
                //Borrar una pizza de la lista de pedidos
                //Enseñar al jugador algo visual de que lo ha hecho bien
            } else {
                Debug.Log("Incorrect");
            }
        } else if (recipe.name == "BolNoodles"){
            //Tenemos unos noodles
            Bowl component = recipe.GetComponent<Bowl> ();
            correct = (component.brocoli && component.noodles && component.ternera);
            Debug.Log("Ternera: " + component.ternera + " Brocoli: " + component.brocoli + " Noodles: " + component.noodles);
            
            if (correct){
                Debug.Log("Correct Noodles");
                generaPedidos.removeRecipe("Noodles");
                //Borrar una pizza de la lista de pedidos
                //Enseñar al jugador algo visual de que lo ha hecho bien
            } else {
                Debug.Log("Incorrect Noodles");
            }
            /*List <Ingredient> ingredients = recipe.GetComponent<Bowl>().ingredients;
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
            }*/

        } else {
            Debug.Log("No me mandes mierda por la cinta");
            generaPedidos.playerPoints -= 50;
        }

        
    }
}
