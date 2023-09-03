
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

/*
noticia *n1;
n1.titular="hola joshua";
n1.relevancia=1;

noticia *n2;
n2.titular="WERTYUJKJHGF";
n2.relevancia=2;

noticia *n3;
n3.titular="FGHJKL";
n3.relevancia=3;

noticia *n4;
n4.titular="QWERTY";
n4.relevancia=4;

noticia *n5;
n5.titular="NFAS";
n5.relevancia=5;
TDA.agr(n1);
TDA.agr(n2);
TDA.agr(n3);
TDA.agr(n4);
TDA.agr(n5);
*/

listaD* TDA = new listaD();

int main()
{
   /*cout<<"1. AGREGAR NOTICIA"<<endl;
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
            TDA->agr(dato);
            break;
        case 2:
            TDA->mostrar();
            break;
        case 3:
            cout<<"Ingrese las palabras clave"<<endl;
            cin>> palabras;
            //operaciones.mostrarNoticia(palabras);
            break;
        case 4:
            cout<<"Ingrese las palabras clave"<<endl;
            cin>> arr2;
            //operaciones.eliminarNoticia(arr2);
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
    */

  TDA->agr("hola");
  TDA.agr("mundo");
  TDA.agr("hola");

  vector<string> lista = {"hola", "mundo"};

  TDA.mostrar();

  TDA.eliminar(lista);

  TDA.mostrar();

  return 0;
}


