#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H
#include "order.h"

//ESTRUCTURA DE NODO
struct NodeOrder {
    Order* data;
    NodeOrder* nxt;

    NodeOrder(Order *data_){
        data = data_;
        nxt = nullptr;
    };
    //Methods
    void imprimir();


};
//COLA DE PEDIDOS
struct OrderQueue {
    //TOP
    NodeOrder* front;
    QMutex *mutex;

    OrderQueue(){}

    OrderQueue(QMutex* mutex){
        front = nullptr;
        this->mutex = mutex;
    };
    //METHODS
    void append(Order *data, bool side = false);
    bool isEmpty();
    NodeOrder* pop();
    int size();
    void imprimir();
    NodeOrder *returnFront();

};

#endif // ORDERQUEUE_H
