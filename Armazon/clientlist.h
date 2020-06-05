#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"

//NODO DE ESTRUCTURA CLIENTE
struct NodeClient {
    Client* data;
    NodeClient* nxt;

<<<<<<< Updated upstream
    NodeClient(Client* _data){
        data = _data;
        nxt = nullptr;
    }

    //Compara un data recibido con el del mismo nodo
    bool compare(QString _data){
            return this->data->id == _data;
=======
    NodeClient(Client *data_){
        data = data_;
        nxt = nullptr;
    };
    //Methods
    //Compara un data recibido con el del mismo nodo
    bool compare(QString data){
            return this->data->id == data;
>>>>>>> Stashed changes
        }
};

//LISTA SIMPLE DE CLIENTES
struct SimpleList {
    NodeClient* first;

<<<<<<< Updated upstream
    //Constructor
    SimpleList(){
        first =nullptr;
    }
=======
    SimpleList(){
        first = nullptr;
    };
>>>>>>> Stashed changes

    //Methods
    void append(Client* data);
    NodeClient* searchClient(QString id);
    void printList();

};

#endif // CLIENTLIST_H
