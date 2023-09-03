
#ifndef operaciones
#define operaciones 

#include <iostream>
#include <string>
#include "TDA.h"



using namespace std;

struct operacion{
    private:
        struct listaD *f; 

    public:
        void agregar(listaD *f, string dato){
            f.agr(dato);
        }
        

        void eliminarN(listaD *f, vector<string> lista){
            for (string palabra : lista){
                f.eliminar(palabra);
            }
        }

        void mostrarN(){
            f.mostrar();
        }

        void mostrarE(listaD *f, vector<string> lista){
            for(string palabra:lista){
                f.mostrar(palabra);
            }
        };
};
#endif
