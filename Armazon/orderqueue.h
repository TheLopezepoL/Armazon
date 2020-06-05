#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H
#include "order.h"

//ESTRUCTURA DE NODO
struct NodeOrder {
    Order* data;
    NodeOrder* nxt;

    NodeOrder();
};
//COLA DE PEDIDOS
struct OrderQueue {
    //TOP
    NodeOrder* first;
    //LAST(?)
    NodeOrder* last;

    OrderQueue();
    //METHODS
    void append(Order data);
    NodeOrder* pop();

};

#endif // ORDERQUEUE_H
