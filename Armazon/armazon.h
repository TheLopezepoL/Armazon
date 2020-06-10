#ifndef ARMAZON_H
#define ARMAZON_H
#include "structcreator.h"
#include "filemanager.h"
#include <QString>

struct Armazon{

    //Attributes
    SimpleList *clientes;
    ArticleList *articulos;
    OrderQueue *colaPedidos;

    //Constructors
    Armazon(){}

    //Methods


};

#endif // ARMAZON_H
