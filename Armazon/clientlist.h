#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"

//NODO DE ESTRUCTURA CLIENTE
struct NodeClient {
    Client* data;
    NodeClient* nxt;

    NodeClient();
};

//LISTA SIMPLE DE CLIENTES
struct SimpleList {
    NodeClient* first;

    SimpleList();

    void append(Client data);
    NodeClient* deleteIndex(int index);

};

#endif // CLIENTLIST_H
