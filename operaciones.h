
#ifndef operaciones
#define operaciones 1

#include <iostream>
#include <string>
#include <vector>
#include "TDA.h"

#define START 0
#define END 999999999


struct operacion{
    private:
        struct listaD *funcionTDA; 
        
    public:
        void agregar(listaD &funcionTDA, string dato){
            funcionTDA.agr(END, dato);

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

        void noticias(){
            Newsapi newsapi;

            vector<News *> allrecords = newsapi.getRecords();

            for(News *record : allrecords){
                cout <<"Autor: "<< record->getTitle() << endl;
                cout <<"Titulo: "<< record->getAuthor() << endl;
                cout <<"Descripcion: "<<record->getDescription() << endl;
            }
        }


};



#endif
