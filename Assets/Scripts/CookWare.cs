using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CookWare : MonoBehaviour
{
    public enum CocinaType
    {
        horno,olla,sarten
    }
    [Header("Tipo de cocina")]
    public CocinaType CocinaTipo;
    [Header("Ajustes")]
    [Space(5)]
    public GameObject salidaPosgameObject;
    public bool usesAnimation = false;
    public float velocidad = 2;
    public float variabilidadVelocidad = 0.2f;
    public float alturaMax = 5;
    public float despMax = 0.05f;
    public AnimationCurve multiplicadorAltura;
    public int maxIngredientes = 3;
    public float radioCacharro = 4;
    [Header("Debug")]
    [Space(5)]
    public bool isDebug = false;
    public GameObject ingredienteDebug1;
    public GameObject ingredienteDebug2;
    public GameObject ingredienteDebug3;

    private Vector3 salidaPos;
    private List<ObjetoIngrediente> ingredientes;

    public struct ObjetoIngrediente
    {
        public GameObject objeto;
        public bool subiendo;
        public Vector3 posDir;
        public float vel;
        public int tCocinado;
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
        //salidaPos = salidaPosgameObject.transform.position;
        ingredientes = new List<ObjetoIngrediente>(maxIngredientes);
        if (!isDebug)
        {
            ingredienteDebug1.SetActive(false);
            ingredienteDebug2.SetActive(false);
            ingredienteDebug3.SetActive(false);
        }
        else
        {
            AnadirIngrediente(ingredienteDebug1);
            AnadirIngrediente(ingredienteDebug2);
            AnadirIngrediente(ingredienteDebug3);
        }
    }

    void Update()
    {
        if (usesAnimation)
        {
            for (int i = 0; i < ingredientes.Count; i++)
            {
                ingredientes[i] = animateIngredient(ingredientes[i]);
            }
        }
    }

    private ObjetoIngrediente animateIngredient(ObjetoIngrediente ing)
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
        return ing;
    }

    public bool AnadirIngrediente(GameObject ingrediente)
    {
        if (ingredientes.Count < maxIngredientes)
        {
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
