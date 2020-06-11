#ifndef ARMAZON_H
#define ARMAZON_H
#include "structcreator.h"
#include "filemanager.h"
#include <QString>
#include "balancer.h"
#include "factory.h"
struct Armazon{

    //Attributes
    QStringList *directorioPedidos;
    SimpleList *clientes;
    ArticleList *articulos;
    OrderQueue *colaPedidosInicio, colaPedidosPrioridad;
    Factory *fabricaC,*fabricaB,*fabricaA,*fabricaEs;
    Balancer *balancer;
    bool runner;


    //Constructors
    Armazon(){}

    //Methods


};

#endif // ARMAZON_H
