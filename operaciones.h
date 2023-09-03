
#ifndef operaciones
#define operaciones 1

#include <iostream>
#include <string>
#include "TDA.h"



using namespace std;

void agregar(string dato){
    agr(dato);
}

void eliminarN(vectot<string> lista){
    for (string palabra : lista){
        eliminar(palabra);
    }
}

void mostrarN(){
    mostrar();
}

void mostrarE(vector<string> lista){
    for(string palabra:lista){
        mostrar(palabra);
    }
}
#endif
