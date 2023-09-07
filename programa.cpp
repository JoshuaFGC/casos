#include <iostream>
#include <string>
#include <vector>
#include "TDA.h"
#include "operaciones.h"



using namespace std;
int main()
{

    listaD listad;
    listad.agr(END, "HOLA PEDRO NEED");
    listad.agr(END, "CARROS CAEN");
    listad.agr(END, "NEED FOR SPEED");
    listad.agr(END, "HOT WHEELS");
    listad.agr(END, "ADIOS RAMON");

    listad.mostrar();
    cout<<"mostar"<<endl;
    listad.mostrar_especificos("NEED");
    cout<<"especificos"<<endl;
    listad.eliminar("HOLA");
    cout<<"eliminar"<<endl;
    listad.reorganizar(1, +2);

    listad.mostrar();
    cout<<"waza"<<endl;

};
