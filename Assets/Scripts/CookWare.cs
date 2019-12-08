using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CookWare : MonoBehaviour
{
    public enum CocinaType
    {
        horno,olla,sarten,plato
    }
    [Header("Tipo de cocina")]
    public CocinaType CocinaTipo;
    [Header("Ajustes")]
    [Space(5)]
    public GameObject salidaGameObject;
    public GameObject bolPrefab;
    public bool isCinta;
    public bool isAutomatic;
    public bool usesAnimation = false;
    public float velocidad = 2;
    public float variabilidadVelocidad = 0.2f;
    public float alturaMax = 5;
    public float despMax = 0.05f;
    public AnimationCurve multiplicadorAltura;
    public int maxIngredientes = 3;
    public float radioCacharro = 4;
    public float tCocina = 15;
    [Header("Debug")]
    [Space(5)]
    public bool isDebug = false;
    public bool isSliced1 = false;
    public GameObject ingredienteDebug1;
    public bool isSliced2 = false;
    public GameObject ingredienteDebug2;
    public bool isSliced3 = false;
    public GameObject ingredienteDebug3;

    public AudioClip horno_encendido;
    public AudioClip horno_apagado;
    public AudioSource sonidosHorno;
    public AudioClip sarten;
    public AudioSource sonidosSarten;
    public AudioClip olla;
    public AudioSource sonidosOlla;


    private Vector3 salidaPos;
    private List<ObjetoIngrediente> ingredientes;
    private List<ObjetoIngrediente> ingredientesABorrar;
    private bool sendOne = false;
    private bool ternBool = false, brocBool = false, noodBool = false;

    public struct ObjetoIngrediente
    {
        public GameObject objeto;
        public bool subiendo;
        public Vector3 posDir;
        public float vel;
        public float tCocinado;
        public ObjetoIngrediente(GameObject newObjeto, float velocidad)
        {
            this.objeto = newObjeto;
            this.subiendo = false;
            this.posDir = new Vector3(0, 0, 0);
            this.vel = velocidad;
            this.tCocinado = 0;
        }
    }

    void Start()
    {
        //Sonidos

        sonidosOlla.clip = olla;
        sonidosSarten.clip = sarten;


        //salidaPos = salidaPosgameObject.transform.position;
        ingredientes = new List<ObjetoIngrediente>(maxIngredientes);
        ingredientesABorrar = new List<ObjetoIngrediente>(maxIngredientes);
        if (isDebug)
        {
            if (isSliced1)
            {
                ingredienteDebug1.GetComponent<Ingredient>().cut();
            }
            if (isSliced2)
            {
                ingredienteDebug2.GetComponent<Ingredient>().cut();
            }
            if (isSliced3)
            {
                ingredienteDebug3.GetComponent<Ingredient>().cut();
            }

            AnadirIngrediente(ingredienteDebug1);
            AnadirIngrediente(ingredienteDebug2);
            AnadirIngrediente(ingredienteDebug3);
        }
    }

    void Update()
    {
        if(CocinaTipo != CocinaType.plato)
        {
            for (int i = 0; i < ingredientes.Count; i++)
            {
                ingredientes[i] = updateIngredient(ingredientes[i], i);
            }
            for (int j = 0; j < ingredientesABorrar.Count; j++)
            {
                if(!isCinta){
                    ingredientesABorrar[j].objeto.transform.parent = null;
                    salidaGameObject.GetComponent<CookWare>().AnadirIngrediente(ingredientesABorrar[j].objeto);
                }else if(isCinta) {
                    ingredientesABorrar[j].objeto.transform.parent = null;
                    if(CocinaTipo == CocinaType.sarten){
                        ingredientesABorrar[j].objeto.transform.SetParent(null);
                        ingredientesABorrar[j].objeto.GetComponent<FallDown>().recover();
                        generateBowl(j, ingredientesABorrar.Count, ingredientesABorrar[j].objeto);
                    }else{
                        salidaGameObject.GetComponent<CintaMec>().AnadirComida(ingredientesABorrar[j].objeto);
                    }
                }
                ingredientes.Remove(ingredientesABorrar[j]);
            }
            ingredientesABorrar.Clear();
        } else {
            if (transform.GetChild(1) != null){
                gameObject.GetComponent<ComprobadorPedidos>().comprobarPedido(transform.GetChild(1).gameObject);
            }
        }
    }

    private ObjetoIngrediente updateIngredient(ObjetoIngrediente ing, int index)
    {
        #region Animar
        if (usesAnimation)
        {
            if (!ing.subiendo && ing.objeto.transform.localPosition.y<=(0+ing.objeto.transform.localScale.y/2))
            {
                ing.subiendo = !ing.subiendo;
                ing.posDir = new Vector3(Random.Range(-despMax, despMax), 0, Random.Range(-despMax, despMax));
            }else if (ing.subiendo && ing.objeto.transform.localPosition.y < alturaMax)
            {
                ing.objeto.transform.Translate(new Vector3(ing.posDir.x, ing.vel * multiplicadorAltura.Evaluate(ing.objeto.transform.position.y/alturaMax), ing.posDir.z));
            }else if (ing.subiendo && ing.objeto.transform.localPosition.y >= alturaMax)
            {
                ing.subiendo = false;
            }else if (!ing.subiendo && ing.objeto.transform.localPosition.y > (0 + ing.objeto.transform.localScale.y / 2))
            {
                ing.objeto.transform.Translate(new Vector3(ing.posDir.x, -ing.vel * multiplicadorAltura.Evaluate(ing.objeto.transform.position.y/alturaMax), ing.posDir.z));
            }

            ing.objeto.transform.localPosition = new Vector3(Mathf.Max(-radioCacharro, Mathf.Min(ing.objeto.transform.localPosition.x, radioCacharro)), ing.objeto.transform.localPosition.y, Mathf.Max(-radioCacharro, Mathf.Min(ing.objeto.transform.localPosition.z, radioCacharro)));
        }
        #endregion

        #region Calcular t cocinado
        ing.tCocinado += Time.deltaTime;
        if(ing.tCocinado > tCocina)
        {
            if(CocinaTipo == CocinaType.horno)
            {
                ing.objeto.GetComponent<Ingredient>().roast();
            }
            else if(CocinaTipo == CocinaType.olla)
            {
                sonidosOlla.Play();
                ing.objeto.GetComponent<Ingredient>().boil();
            }
            else if (CocinaTipo == CocinaType.sarten)
            {
                sonidosSarten.Play();
                ing.objeto.GetComponent<Ingredient>().cook();
            }
            ing.tCocinado = 0;
            if (isAutomatic)
            {
                EnviarIngrediente(ing);
            }
        }
        if(sendOne){
            EnviarIngrediente(ing);
            sendOne = false;
        }
        #endregion

        return ing;
    }

    public void generateBowl(int i, int count, GameObject obj){
        if(i >= count){
            GameObject bowl = Instantiate(bolPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            bowl.GetComponent<Bowl>().generateFields(ternBool, brocBool, noodBool);
            salidaGameObject.GetComponent<CintaMec>().AnadirComida(bowl);
            ternBool = false;
            brocBool = false;
            noodBool = false;
        }else if(obj.name == "ternera" && obj.transform.GetChild(1).gameObject.activeSelf){
            ternBool = true;
        }else if(obj.name == "Brocoli" && obj.transform.GetChild(1).gameObject.activeSelf){
            brocBool = true;
        }else if(obj.name == "Noodles"){
            noodBool = true;
        }
    }

    public void EnviarIngrediente()
    {
        sendOne = true;
    }

    public void EnviarIngrediente(ObjetoIngrediente ing)
    {
        ingredientesABorrar.Add(ing);
    }

    public bool AnadirIngrediente(GameObject ingrediente)
    {
        if (ingredientes.Count < maxIngredientes)
        {
            ingrediente.transform.SetParent(null);
            ingrediente.transform.SetParent(this.transform);
            ingrediente.transform.position = (new Vector3(transform.position.x+Random.Range(-radioCacharro, radioCacharro), transform.position.y+ingrediente.transform.localScale.y/2, transform.position.z + Random.Range(-radioCacharro, radioCacharro)));
            ingredientes.Add(new ObjetoIngrediente(ingrediente, Random.Range((velocidad-variabilidadVelocidad), (velocidad + variabilidadVelocidad))));
            return true;
        }
        else
        {
            return false;
        }
    }
}
