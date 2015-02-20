#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

//Devuele la suma de todos los elementos de mi_pila (dado) y mi_cola (dado)
float sumarElementos(stack<float> mi_pila, queue<float> mi_cola)
{
   float container1=0;
   float container2=0;
   float total=0;
   while(!mi_pila.empty()){
    container1 = container1 + mi_pila.top();
    mi_pila.pop();
   }
   while(!mi_cola.empty()){
    container2 = container2 + mi_cola.front();
    mi_cola.pop();
   }
   total = container1 + container2;
   return total;
}

//Devuelve true si mi_vector (dado) tiene valores repetidos
bool existenRepetidos(vector<string> mi_vector)
{
    return false;
}

//Devuelve la cantidad de elementos en edades (dado) que son mayores o iguales que 18
int contarMayoresDeEdad(list<int>edades)
{
    int counter=0;
    while(!edades.empty())
    {
        if(edades.front()>= 18)
            counter++;
        edades.pop_front();
    }
    return counter;
}
//Devolver el un mapa con los siguientes valores dados en la tabla
//   LLave      |   Valor
//----------------------------
//  "Lolo"      |   98923212
//  "Lola""     |   92123243
//  "Rufo"      |   93212322
//  "Punpun"    |   99321273
//  "Ponpon"    |   92133243
map<string,int> obtenerAgenda()
{
    map<string,int> agenda;
    agenda["Lolo"]=98923212;
    agenda["Lola"]=92123243;
    agenda["Rufo"]=93212322;
    agenda["Punpun"]=99321273;
    agenda["Ponpon"]=92133243;
    return agenda;
}

//Devuelve el numero menor en mi_set (dado)
double obtenerMenor(set<double> mi_set)
{
    set<double>::iterator x=mi_set.begin();
    double comparison=0;
    while(x!=mi_set.end()){
        if(comparison<*x){
            comparison = *x;
        }
        x++;
    }
    return comparison;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
