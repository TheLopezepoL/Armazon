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
<<<<<<< Updated upstream
    void append(Order data);
=======
    void append(Order *data, bool side = false);
    void push(Order *data);
    bool isEmpty();
>>>>>>> Stashed changes
    NodeOrder* pop();

};

#endif // ORDERQUEUE_H
