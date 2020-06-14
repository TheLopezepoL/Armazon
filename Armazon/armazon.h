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
    SimpleList *clientes;
    ArticleList *articulos;
    bool runner;



    //Constructors
    Armazon(){}

    //Methods
    void start(QString clients_,QString articles_,QString pathArmazon);

};

#endif // ARMAZON_H
