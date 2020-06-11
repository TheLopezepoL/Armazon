#include "client.h"

#include <QDebug>
void Client::imprimir(){
    qDebug() <<"ID Cliente: " << this->id;
    qDebug() <<"Nombre Cliente: " << this->name;
    qDebug() <<"Priority: " << this->priority;
    qDebug() << "";
}

int Client::getPrio(){
    return this->priority;
}
