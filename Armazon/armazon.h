#ifndef ARMAZON_H
#define ARMAZON_H
#include <QString>
#include <QTimer>
#include "structcreator.h"
#include "filemanager.h"
//#include "balancer.h"
//#include "factory.h"
//#include "threadloader.h"
struct Armazon{

    //Attributes
    QStringList *directorioPedidos;
    SimpleList *clientes;
    ArticleList *articulos;
    OrderQueue *colaPedidosInicio, colaPedidosPrioridad;
    bool runner;



    //Constructors
    Armazon(SimpleList *clie_,ArticleList *art_){
        articulos = art_;
        clientes = clie_;
    }

    //Methods
    void run();

};

#endif // ARMAZON_H
