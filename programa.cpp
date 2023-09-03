
#include <iostream>
#include <string>
#include <vector>

#include "operaciones.h"

using namespace std;

int op;
string dato;
string palabras;
string arr;
string arr2;
string pal;
string palabra;
string titular;

int main()
{   
    private:
        struct operacion *funcionesOperaciones;
    cout<<"1. AGREGAR NOTICIA"<<endl;
    cout<<"2. MOSTRAR NOTICIAS POR RELEVANCIA"<<endl;
    cout<<"3. MOSTRAR NOTICIAS ESPECIFICAS"<<endl;
    cout<<"4. ELIMINAR NOTICIA"<<endl;
    cout<<"5. REORGANIZAR NOTICIA"<<endl;
    cout<<"6. SALIR\n"<<
    cin >> op;
    switch(op){
        case 1:
            cout<<"Ingrese el titular"<<endl;
            cin>>dato;
            funcionesOperaciones->agregar(dato);
            break;
        case 2:
            funcionesOperaciones->mostrarN();
            break;
        case 3:
            cout<<"Ingrese las palabras clave"<<endl;
            cin>> palabras;
            funcionesOperaciones->mostrarE(palabras);
            break;
        case 4:
            cout<<"Ingrese las palabras clave"<<endl;
            cin>> arr2;
            funcionesOperaciones->eliminarN(arr2);
            break;
        case 5:
        
            break;
        case 6:
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    while(op!=0);



  return 0;
}


