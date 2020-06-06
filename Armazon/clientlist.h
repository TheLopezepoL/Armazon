#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"

//NODO DE ESTRUCTURA CLIENTE
struct NodeClient {
    Client* data;
    NodeClient* nxt;

    NodeClient(Client *data_){
        data = data_;
        nxt = nullptr;
    };
    //Methods
    //Compara un data recibido con el del mismo nodo
    bool compare(QString data){
            return this->data->id == data;
        }
};

//LISTA SIMPLE DE CLIENTES
struct SimpleList {
    NodeClient* first;

    //Constructor
    SimpleList(){
        first =nullptr;
    };

    //Methods
    void append(Client* data);
    NodeClient* searchClient(QString id);
    void printList();

};

#endif // CLIENTLIST_H
