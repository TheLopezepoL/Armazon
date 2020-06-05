#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H
#include "order.h"

struct NodeOrder {
    Order* data;
    NodeOrder* nxt;

    NodeOrder();
};

struct OrderQueue {
    NodeOrder* first;
    NodeOrder* last;

    OrderQueue();

    void append(Order data);
    NodeOrder* pop();

};

#endif // ORDERQUEUE_H
