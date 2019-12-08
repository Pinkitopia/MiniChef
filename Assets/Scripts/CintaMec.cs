using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CintaMec : MonoBehaviour
{

    public GameObject[] waypoints;
    public GameObject salida;
    public float vel = 2f;
    public enum entradatype{
        Horizontal, Vertical
    }
    public entradatype orientacionEntrada;

    private List<Comida> comidas = new List<Comida>();
    private List<Comida> comidasABorrar = new List<Comida>();

    public struct Comida
    {
        public GameObject obj;
        public int wpIndex;

        public Comida(GameObject newObj, int index)
        {
            obj = newObj;
            wpIndex = index;
        }
    }
    
    void Update()
    {
        for(int i = 0; i<comidas.Count; i++)
        {
            if (Mathf.Abs(comidas[i].obj.transform.position.x - waypoints[comidas[i].wpIndex].transform.position.x) < 1 &&
                Mathf.Abs(comidas[i].obj.transform.position.z - waypoints[comidas[i].wpIndex].transform.position.z) < 1)
            {
                if(comidas[i].wpIndex >= waypoints.Length-1)
                {
                    sacarComida(comidas[i]);
                }
                else
                {
                    comidas[i] = incIndex(comidas[i]);
                }
            }
            else
            {
                comidas[i].obj.transform.position = Vector3.Lerp(comidas[i].obj.transform.position, waypoints[comidas[i].wpIndex].transform.position, Time.deltaTime * vel);
            }
        }
        for (int j = 0; j < comidasABorrar.Count; j++)
        {
            salida.GetComponent<CookWare>().AnadirIngrediente(comidasABorrar[j].obj);
            comidas.Remove(comidasABorrar[j]);
        }
        comidasABorrar.Clear();
    }

    private Comida incIndex(Comida com)
    {
        return new Comida(com.obj, com.wpIndex + 1);
    }

    public void sacarComida(Comida com)
    {
        comidasABorrar.Add(com);
    }

    public void AnadirComida(GameObject comida)
    {
        comidas.Add(new Comida(comida, 1));
        comida.transform.SetParent(null);
        comida.transform.SetParent(this.transform);
        Vector3 cpos = comida.transform.position;
        Vector3 wppos = waypoints[0].transform.position;
        if(orientacionEntrada == entradatype.Horizontal)
        {
            comida.transform.position = new Vector3(cpos.x, wppos.y, cpos.z = wppos.z);
        }else if (orientacionEntrada == entradatype.Vertical)
        {
            comida.transform.position = new Vector3(cpos.x = wppos.x, wppos.y, cpos.z);
        }
    }
}
