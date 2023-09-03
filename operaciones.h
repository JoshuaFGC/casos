
#ifndef operaciones
#define operaciones 

#include <iostream>
#include <string>
#include "TDA.h"



using namespace std;

struct operacion{
    private:
        struct listaD *funcionTDA; 

    public:
        void agregar(listaD *funcionTDA, string dato){
            funcionTDA->agr(dato);
        }
        

        void eliminarN(listaD *funcionTDA, vector<string> lista){
            for (string palabra : lista){
                funcionTDA->eliminar(palabra);
            }
        }

        void mostrarN(){
            funcionTDA->mostrar();
        }

        void mostrarE(listaD *funcionTDA, vector<string> lista){
            for(string palabra : lista){
                funcionTDA->mostrar_especificos(palabra);
            }
        };
};
#endif
