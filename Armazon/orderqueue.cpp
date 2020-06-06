#include "orderqueue.h"
#include <QDebug>
void NodeOrder::imprimir(){
    qDebug() << this->data->clientID;
    qDebug() << this->data->orderNum;
}
