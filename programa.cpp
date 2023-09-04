#include <iostream>
#include <string>
#include <vector>
#include "TDA.h"
#include "operaciones.h"

using namespace std;
    

int rActual;
int rNueva;
string dato;
vector<string> palabras = {"NEED"};
vector<string> arr = {"RAMON"};


int main()
{

    listaD listad;
    listad.agr("HOLA PEDRO");
    listad.agr("CARROS CAEN");
    listad.agr("NEED FOR SPEED");
    listad.agr("HOT WHEELS");
    listad.agr("ADIOS RAMON");

    listad.mostrar();

    listad.mostrar_especificos(palabras);

    listad.eliminar(arr);

    listad.reorganizar(1, +2);


}
