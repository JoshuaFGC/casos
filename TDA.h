
#ifndef TDA_h
#define TDA_h 0

#include <iostream>
#include <string>
#include "nododoble.h"



struct listaD{
    private:
        nododoble *head = nullptr;
        nododoble *tail = nullptr;
    

    public:
        void agr(string dato){
            nododoble *nuevo = new nododoble;
            nuevo->data = dato;
            if(head == nullptr){
                head = nuevo;
                tail = nuevo;
            }else{
                tail->sig = nuevo;
                nuevo->ant = tail;
                tail = nuevo;
            }
        }

        void mostrar(){
            nododoble *aux = head;
            while(aux != nullptr){
                cout<<aux->data<<endl;
                aux = aux->sig;
            }
        }

        void mostrar_especificos(string palabra){
            nododoble *aux = head;
            while(aux != nullptr){
                cout<<aux->data<<endl;

            }
            aux = aux->sig;
        }

        void eliminar(string dato){
            nododoble *aux = head;
            while(aux != nullptr){
                if(aux->data == dato){
                    if(aux == head){
                        head = head->sig;
                        head->ant = nullptr;
                        delete aux;
                        break;
                    }else if(aux == tail){
                        tail = tail->ant;
                        tail->sig = nullptr;
                        delete aux;
                        break;
                    }else{
                        aux->ant->sig = aux->sig;
                        aux->sig->ant = aux->ant;
                        delete aux;
                        break;
                    }
                }
                aux = aux->sig;
            }
        }

        nododoble* buscarNodo(int rActual,  listaD *head, listaD *tail){
            nododoble *nActual = head;
            tail = head;
            for(int i=0; i<rActual; i++){
                tail = nActual;
                nActual = nActual->sig;
            }
            return nActual;
        }
        void reorganizar(int rActual, int rNueva){
            nododoble *nodo = buscarNodo(rActual, listaD.head, nullptr)
            if (rNueva > 0){
                for(int i = 0; i < rNueva; i++){
                    nActual--;
                    nododoble* nAnt = nActual->ant;
                    nododoble* nSig = nActual->sig;

                    nAnt->sig = nSig;
                    nSig->ant = nAnt;
                }
            }else{
                for(int i=0; i>rNueva; i--){
                    nActual++;

                    nododoble* nAnt = nActual->ant;
                    nododoble* nSig = nActual->sig;

                    nAnt->sig = nSig;
                    nSig->ant = nAnt;
                }
            }
        }
};
#endif