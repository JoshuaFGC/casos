
#ifndef operaciones
#define operaciones 

#include <iostream>
#include <string>
#include "TDA.h"



using namespace std;

struct operacion{
    public:
    
        void agregar(listaD *TDA, string dato){
            TDA.agr(dato);
        }
        

        void eliminarN(listaD *TDA, vector<string> lista){
            for (string palabra : lista){
                TDA.eliminar(palabra);
            }
        }

        void mostrarN(){
            TDA.mostrar();
        }

        void mostrarE(listaD *TDA, vector<string> lista){
            for(string palabra:lista){
                TDA.mostrar(palabra);
            }
        };
};
#endif
