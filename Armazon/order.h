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
    //COLA DE PEDIDOS
    RequestQueue requestQueue;


    Order();

};

#endif // ORDER_H
