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
    QString clientID;
    //BITACORA
    QString binnacle;
    //ARTICULOS
    RequestList* requestQueue;
    //Constructor
    Order(int idOrder, QString idClient,RequestList* _requestQueue){
        orderNum = idOrder;
        clientID = idClient;
        requestQueue = _requestQueue;
        binnacle = "";
    }
    //Method
    void isDone();
    void imprimir();

};

#endif // ORDER_H
