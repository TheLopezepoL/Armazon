#include "order.h"
#include <QDebug>
//CAMBIA EL ESTADO DEL PEDIDO
void Order::isDone(){
    NodeRequest* ptr = requestQueue->first;
    while (ptr != nullptr){
        if(ptr->data->total != (ptr->data->reserved + ptr->data->created)){
            done = false;
            return;
        }
        ptr = ptr->nxt;
    }
    done = true;
}

//IMPRIMIR ORDER
void Order::imprimir(){
    qDebug() << "----------------------------------";
    qDebug() <<"ID de Pedido" << this->orderNum;
    qDebug() << "";
    qDebug() <<"ID de Cliente" << this->clientID;
    qDebug() << "";
    qDebug() <<"Estado: " << this->done;
    qDebug() << "";
    this->requestQueue->imprimir();
    qDebug() << "----------------------------------";
}
