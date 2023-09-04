#include <iostream>
#include <string>
#include <vector>

#include "operaciones.h"

using namespace std;
    
int op;
int rActual;
int rNueva;
string dato;
vector<string> palabras;
vector<string> arr;
vector<string> arr2;
string palabraME;
string palabraM;
string palabraE;

int main()
{
    struct operacion *funcionesOperaciones;

    cout << "1. AGREGAR NOTICIA" << endl;
    cout << "2. MOSTRAR NOTICIAS POR RELEVANCIA" << endl;
    cout << "3. MOSTRAR NOTICIAS ESPECIFICAS" << endl;
    cout << "4. ELIMINAR NOTICIA" << endl;
    cout << "5. REORGANIZAR NOTICIA" << endl;
    cout << "6. SALIR\n"<<endl;
    cin >> op;

    switch (op) {
        case 1:
            cout << "Ingrese el titular" << endl;
            cin >> dato;
            funcionesOperaciones->agregar(operacion *funcionesOperaciones, string dato);
            break;
        case 2:
            funcionesOperaciones->mostrarN();
            break;

        case 3:
            cout << "Ingrese las palabras clave" << endl;
            while(cin >> palabraME){
                palabras.push_back(palabraME);
            };
            funcionesOperaciones->mostrarE(operacion *funcionesOperaciones, palabras);
            break;

        case 4:
            cout << "Ingrese las palabras clave" << endl;
            while(cin >> palabraE){
                arr.push_back(palabraE);
            };
            funcionesOperaciones->eliminarN(operacion *funcionesOperaciones, vector<string> arr);
            break;

        case 5:
            cout << "Ingrese la relevancia actual de la noticia: " << endl;
            cin>> rActual;
            cout<<"Ingrese la nueva relevancia: "<<endl;
            cin>>rNueva;
            funcionesOperaciones->reorganizarN(operacion *funcionesOperaciones, int rActual, int rNueva);
            break;

        case 6:
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;

    }
    while (op != 0);

    return 0;
}
