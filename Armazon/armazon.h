#ifndef ARMAZON_H
#define ARMAZON_H
#include <QString>
#include "structcreator.h"
#include "filemanager.h"
#include "balancer.h"
#include "factory.h"
#include "threadloader.h"
#include "repartidor.h"

struct Armazon{


    //Attributes
    //NORMAL INFO
    QString path;
    OrderQueue *firstCola;
    ThreadLoader *loader;
    SimpleList *clientes;
    ArticleList *articulos;
    Balancer *balancer;
    Factory *factoryA,*factoryB,*factoryC,*factoryEs;
    bool runner;
    //MUTEX
    QMutex *mutex;


    //Constructors
    Armazon(){}

    //Methods
    void preStart(QString clients_,QString articles_,QString pathArmazon);
    void start();

};

#endif // ARMAZON_H
