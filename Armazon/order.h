#ifndef ORDER_H
#define ORDER_H
#include "requestqueue.h"

struct Order {
    int orderNum;
    int clientID;
    RequestQueue requestQueue;


    Order();

};

#endif // ORDER_H
