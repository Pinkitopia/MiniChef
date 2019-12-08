using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dough : Ingredient
{

    [SerializeField]
    public List <ID> toppings;

    private int timesRolled = 0;

    public bool tomato = false;

    private bool colisions = true;

    void Start () {
        toppings = new List<ID>();
        state = FoodState.doughState.raw;
        for (int i = 1; i < 9; i++){
            gameObject.transform.GetChild(i).gameObject.SetActive(false);
        }
    }
    
    void OnTriggerEnter(Collider col){
        Debug.Log("COLISION!!");
        if(col.gameObject.name == "RollingPin"){
            this.roll();
            Debug.Log("Roleado!");
        }
        if (this.state == FoodState.doughState.flattened && tomato){
            if (col.gameObject.name == "Onion"){
                Ingredient onion = col.gameObject.GetComponent <Ingredient> ();
                if (onion.state == FoodState.onionState.dicedState.raw){
                    toppings.Add(onion.state);
                }
            } else if (col.gameObject.name == "Cheese"){
                Ingredient cheese = col.gameObject.GetComponent <Ingredient> ();
                if (cheese.state == FoodState.cheeseState.ball){
                    cheese.state = FoodState.cheeseState.spread;
                    toppings.Add(cheese.state);
                    gameObject.transform.GetChild(5).gameObject.SetActive(true);
                    cheese.transform.SetParent(null);
                    cheese.GetComponent<FallDown>().recover();
                }
            } else if (col.gameObject.name == "Bacon"){
                Ingredient bacon = col.gameObject.GetComponent <Ingredient> ();
                if (bacon.state == FoodState.baconState.raw){
                    toppings.Add(bacon.state);
                    gameObject.transform.GetChild(7).gameObject.SetActive(true);
                    bacon.transform.SetParent(null);
                    bacon.GetComponent<FallDown>().recover();
                }
            } else if (col.gameObject.name == "Pineapple"){
                Ingredient pineapple = col.gameObject.GetComponent <Ingredient> ();
                if (pineapple.state == FoodState.pineappleState.raw){
                    toppings.Add(pineapple.state);
                    gameObject.transform.GetChild(8).gameObject.SetActive(true);
                    pineapple.transform.SetParent(null);
                    pineapple.GetComponent<FallDown>().recover();
                }
            } else if (col.gameObject.name == "Pepperoni"){
                Ingredient pepe = col.gameObject.GetComponent <Ingredient> ();
                if (pepe.state == FoodState.pepperoniState.sliced){
                    toppings.Add(pepe.state);
                    gameObject.transform.GetChild(6).gameObject.SetActive(true);
                    pepe.transform.SetParent(null);
                    pepe.GetComponent<MyMobile>().isTaken = false;
                    pepe.transform.GetChild(0).gameObject.SetActive(true);
                    pepe.transform.GetChild(1).gameObject.SetActive(false);
                    pepe.GetComponent<FallDown>().recover();
                }
            }
        }
    }

    public void addTomato () {
        if(state == FoodState.doughState.flattened){
            tomato = true;
            gameObject.transform.GetChild(4).gameObject.SetActive(true);
        }
    }

    public override bool roll()
    {
        if (state == FoodState.doughState.raw)
        {
            if (timesRolled < 3){
                gameObject.transform.GetChild(timesRolled).gameObject.SetActive(false);
                
                timesRolled++;
                gameObject.transform.GetChild(timesRolled).gameObject.SetActive(true);
                return true;
            }
            state = FoodState.doughState.flattened;
            return true;
        }
        else
            return false;
    }

    public override bool roast()
    {
        if (state == FoodState.doughState.flattened)
        {
            state = FoodState.doughState.cooked;
            return true;
        }
        else
            return false;
    }

    void Update()
    {
        if (GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerAction>().GetRollingPin())
        {
            colisions = false;
        }
        else
        {
            colisions = true;
        }

        if (!colisions)
        {
            GetComponentInChildren<MeshCollider>().enabled = false;
        }
        else
        {
            GetComponentInChildren<MeshCollider>().enabled = true;
        }
    }
}