#ifndef ARMAZON_H
#define ARMAZON_H
#include "structcreator.h"
#include "filemanager.h"
#include <QString>

struct Armazon{

    //Attributes
    QString pathArmazon;
    SimpleList *clientes;
    ArticleList *articulos;
    OrderQueue *colaPedidos;

    //Constructors

};

#endif // ARMAZON_H
