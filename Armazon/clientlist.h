#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"
#include <QMutex>

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
    QMutex* mutex;

    //Constructor
    SimpleList(){}

    SimpleList(QMutex* mutex){
        first =nullptr;
        this->mutex = mutex;
    };

    //Methods
    void append(Client* data);
    NodeClient* searchClient(QString id);
    void printList();

};

#endif // CLIENTLIST_H
