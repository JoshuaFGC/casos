
#ifndef TDA_h
#define TDA_h 0

#include <iostream>
#include <string>
#include "nododoble.h"
#include "news.cpp"

string dato;
string palabra;
int rActual;
int rNueva;

struct listaD{
    private:
        nododoble* head = nullptr;
        nododoble* tail = nullptr;
    

    public:
        void agr(int pPosition, const string &pDato){
            nododoble* nuevo = (nododoble*)malloc(sizeof(struct nododoble));
            nuevo->titulo=pDato;
            if(head == nullptr){
                head = nuevo;
                tail = nuevo;
                nuevo->sig = head;
                nuevo->ant = tail;
            }else{
                if(pPosition == 0){
                    nuevo->sig = head;
                    nuevo->ant = tail;
                    head->ant = nuevo;
                    tail->sig = nuevo;
                
            }else{
                int pActual = 0;
                nododoble* aux = head;

                while(aux!=tail && pActual<pPosition){
                    aux = aux->sig;
                    pActual++;
                }
                nuevo->sig=aux->sig;
                nuevo->ant=aux;
                aux->sig=nuevo;
                if(aux==tail){
                    tail=nuevo;
                    head->sig=nuevo;
                }
            }
        }
        }
        

        void mostrar(){
            nododoble *aux = head;

            while(aux != nullptr){

                cout<<aux->titulo<<endl;
                aux = aux->sig;
   
            }
        }

        void mostrar_especificos(string palabra){
            nododoble *aux = head;
            while(aux != nullptr){
                if(aux->titulo==palabra){
                    cout<<aux->titulo<<endl;
                }
                 aux = aux->sig;

            }
            
        }

        void eliminar(string dato){
            nododoble *aux = head;
            while(aux != nullptr){
                if(aux->titulo == dato){
                    if(aux == head){
                        head = head->sig;
                        head->ant = nullptr;
                    }else if(aux == tail){
                        tail = tail->ant;
                        tail->sig = nullptr;
                    }else{
                        aux->ant->sig = aux->sig;
                        aux->sig->ant = aux->ant;
                    }
                    delete aux;
                    return;
                }
                aux = aux->sig;
            }
        }

        nododoble* buscarNodo(int rActual){
            nododoble *nActual = head;
            nododoble *cola = tail;
            for(int i=0; i<rActual; i++){
                cola = nActual;
                nActual = nActual->sig;
            }
            return nActual;
        }

        void reorganizar(int rActual, int rNueva){
            nododoble *nActual = buscarNodo(rActual);
            if (rNueva >= 0){
                for(int i = 0; i < rNueva; i++){
                    nActual = nActual->ant;
                }
            }else{
                for(int i=0; i>rNueva; i--){
                    nActual= nActual->sig;
                }
            }
        }


        void mostrarNoticiasApi(){
            Newsapi newsapi;
            vector<News *> allrecords = newsapi.getRecords();
            for (const News *record : allrecords) {
                cout << record->getTitle() << endl;
            }
        }

};

#endif