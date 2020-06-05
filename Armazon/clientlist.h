#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"

//NODO DE ESTRUCTURA CLIENTE
struct NodeClient {
    Client* data;
    NodeClient* nxt;

    NodeClient(Client* _data){
        data = _data;
        nxt = nullptr;
    }

    //Compara un data recibido con el del mismo nodo
    bool compare(QString _data){
            return this->data->id == _data;
        }
};

//LISTA SIMPLE DE CLIENTES
struct SimpleList {
    NodeClient* first;

    //Constructor
    SimpleList(){
        first =nullptr;
    }

    //Methods
    void append(Client* data);
    NodeClient* searchClient(QString id);
    void printList();

};

#endif // CLIENTLIST_H
