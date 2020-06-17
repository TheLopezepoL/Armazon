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
    SimpleList *clientes;
    ArticleList *articulos;
    //LOADER
    ThreadLoader *loader;
    //BALANCER
    Balancer *balancer;
    bool runner;
    //MUTEX
    QMutex *mC;
    QMutex *m;
    QMutex *m0;
    QMutex *m1;
    QMutex *m2;
    QMutex *m3;
    QMutex *m4;
    QMutex *m5;
    //COLAS
    OrderQueue *firstCola;
    OrderQueue *alisto;
    OrderQueue *fabricados;
    //THREAD REPARTIDOR
    Repartidor *repartidor;
    //COLA DE THREAD REPARTIDOR
    OrderQueue *queueA;
    OrderQueue *queueB;
    OrderQueue *queueC;
    //FABRICAS
    Factory *factoryA;
    Factory *factoryB;
    Factory *factoryC;
    Factory *factoryE;


    //Constructors
    Armazon(){}

    //Methods
    void preStart(QString clients_,QString articles_,QString pathArmazon);
    void run();
    void pauseEverything();

};

#endif // ARMAZON_H
