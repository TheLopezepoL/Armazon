#include "armazon.h"
#include <QDateTime>

/*
 * E:
 * S:
 * D:
 */
void Armazon::preStart(QString clients_, QString articles_, QString pathArmazon){
    this->path = pathArmazon;
    this->clientes = StructCreator::clientListCreator(clients_);
    //clientes->printList();
    this->articulos = StructCreator::articleListCreator(articles_,pathArmazon);
    //articulos->printList();
}

void Armazon::start(){
    qDebug() << "START!";
}






