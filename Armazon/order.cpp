#include "order.h"
#include <QDebug>
//CAMBIA EL ESTADO DEL PEDIDO
void Order::changeDoneState(){
    this->done = !this->done;
}

//IMPRIMIR ORDER
void Order::imprimir(){
    qDebug() << "";
    qDebug() <<"ID de Pedido" << this->orderNum;
    qDebug() << "";
    qDebug() <<"ID de Cliente" << this->clientID;
    qDebug() << "";
    qDebug() <<"Estado: " << this->done;
    qDebug() << "";
    this->requestQueue.imprimir();
    qDebug() << "";
}
