
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

        void reorganizar(string dato){
            nododoble *aux = head;
            while(aux != nullptr){
                if(aux->data == dato){
                    if(aux == head){
                        head = head->sig;
                        head->ant = nullptr;
                        tail->sig = aux;
                        aux->ant = tail;
                        aux->sig = nullptr;
                        tail = aux;
                        break;
                    }else if(aux == tail){
                        break;
                    }else{
                        aux->ant->sig = aux->sig;
                        aux->sig->ant = aux->ant;
                        tail->sig = aux;
                        aux->ant = tail;
                        aux->sig = nullptr;
                        tail = aux;
                        break;
                    }
                }
                aux = aux->sig;
            }
        }
};
#endif