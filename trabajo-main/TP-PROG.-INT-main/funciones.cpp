#include <iostream>
#include "funciones.h"

using namespace std;

int tirada(){
    return rand ()% 6+1;
}

void hacerTirada(int vecDado[6])
{
    int x;
for(x=0; x<6; x++)
{
vecDado[x] = x+1;
}
}

void mostrarTirada(int vecDado[6])
{
    int x;
    for(x=0; x<6; x++)
    {
        cout << vecDado[x] << endl;
    }
}

//funcion de sexteto//

int sexteto(int vecDado[])
{
    int x;
    int cont = 0;
    int numero = vecDado[0];
    for(x = 0; x < 6; x++)
    {
        if(numero == vecDado[x])
        {
            cont++;
        }
    }
    if(cont == 6)
    {
        return numero;
    }
    else
    {
        return 0;
    }
}

//funcion de escalera//

bool escalera(int vecDado[6])
{
    bool esEscalera;
    int cont = 0;
    int x;
    for(x = 0; x < 6; x++)
    {
        int y;
        for(y = x+1; y < 6; y++)
        {
            if(vecDado[x] == vecDado[y])
            {
                cont++;
            }
        }
    }
    if(cont == 0)
    {
        esEscalera = true;
    }
    else
    {
        esEscalera = false;
    }
    return esEscalera;
}


 //Puntaje de la ronda//
int PuntajeMaxRonda(int tiradaA, int tiradaB, int tiradaC)
{
    int puntajeRonda;

if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}

return puntajeRonda;

}
//suma total de dados//
int x;
int SumarDados (int vecDado[6])

{
int suma = 0;
for (x=0; x<6; x++)
    {
        suma += vecDado[x];
    }
return suma;
}
