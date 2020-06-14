#include "armazon.h"

void Armazon::start(QString clients_, QString articles_, QString pathArmazon){
    this->clientes = StructCreator::clientListCreator(clients_);
    clientes->printList();
    this->articulos = StructCreator::articleListCreator(articles_,pathArmazon);
    articulos->printList();
}
