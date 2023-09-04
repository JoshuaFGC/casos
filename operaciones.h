
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
        void agregar(struct noticia *dato){
            funcionTDA->agr(dato);
        }
        

        void eliminarN(vector<string> lista){
            for (string palabra : lista){
                funcionTDA->eliminar(palabra);
            }
        }

        void mostrarN(){
            funcionTDA->mostrar();
        }

        void mostrarE(vector<string> lista){
            for(string palabra : lista){
                funcionTDA->mostrar_especificos(palabra);
            }
        };

        void reorganizarN(int rActual, int rNueva){
            funcionTDA->reorganizar(rActual, rNueva);
        };
};
#endif
