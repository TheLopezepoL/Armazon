#ifndef ORDER_H
#define ORDER_H
#include "requestqueue.h"
//ESTRUCTURA DEL PEDIDO
struct Order {
    //BOOL PARA DETERMINAR COMPLETADO
    bool done;
    //BOOL'S PARA SABER POR DONDE YA HA ESTADO EL ORDER
    bool balancerFT;
    bool factoryFT;
    bool vaultFT;
    //CODIGO DEL PEDIDO
    int orderNum;
    //CODIGO DEL CLIENTE QUE ENVIO EL PEDIDO
    QString clientID;
    //BITACORA
    QString binnacle; //Actuliza cuando entra a un thread
    QString orderReport; //Guarda los objetos fabricados y los sacados del almacen
    //ARTICULOS
    RequestList* requestQueue;
    //Constructor
    Order(int idOrder, QString idClient,RequestList* _requestQueue){
        orderNum = idOrder;
        clientID = idClient;
        requestQueue = _requestQueue;
        binnacle = "";
        orderReport = "";
        balancerFT = true;
        factoryFT = true;
        vaultFT = true;
    }
    //Method
    void isDone();
    void imprimir();

};

#endif // ORDER_H
