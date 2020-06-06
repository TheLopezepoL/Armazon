#ifndef ORDER_H
#define ORDER_H
#include "requestqueue.h"
//ESTRUCTURA DEL PEDIDO
struct Order {
    //BOOL PARA DETERMINAR COMPLETADO
    bool done;
    //CODIGO DEL PEDIDO
    int orderNum;
    //CODIGO DEL CLIENTE QUE ENVIO EL PEDIDO
    int clientID;
    //ARTICULOS
    RequestQueue requestQueue;
    //Constructor
    Order(int idOrder, int idClient,RequestQueue _requestQueue){
        orderNum = idOrder;
        clientID = idClient;
        requestQueue = _requestQueue;
    }
    //Method
    void changeDoneState();
    void imprimir();

};

#endif // ORDER_H
