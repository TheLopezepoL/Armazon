#include "armazon.h"

/*
 * E:
 * S:
 * D:
 */
void Armazon::preStart(QString clients_, QString articles_, QString pathArmazon){
    //MUTEX
    this->m = new QMutex();
    this->mC =new QMutex();
    this->m0 = new QMutex();
    this->m1 = new QMutex();
    this->m2 = new QMutex();
    this->m3 = new QMutex();
    this->m4 = new QMutex();
    this->m5 = new QMutex();
    //ESTRUCTURAS
    this->path = pathArmazon;
    this->clientes = StructCreator::clientListCreator(clients_,mC);
    this->articulos = StructCreator::articleListCreator(articles_,pathArmazon,m);
    //qDebug() << "Clientes/Articulos Listos";
    //qDebug() <<"";
    this->loader = new ThreadLoader();
    this->balancer = new Balancer();
    //COLAS BALANCER
    this->firstCola = new OrderQueue(m0);
    this->alisto = new OrderQueue(m1);
    this->fabricados = new OrderQueue(m2);
    //qDebug() << "Loader/Balancer Listos";
    //qDebug() <<"";
    //THREAD REPARTIDOR
    this->repartidor = new Repartidor();
    //qDebug() << "Repartidor Listo";
    //qDebug() <<"";
    //COLAS DE FABRICA
    this->queueA = new OrderQueue(m3);
    this->queueB = new OrderQueue(m4);
    this->queueC = new OrderQueue(m5);
    //FABRICAS
    this->factoryA = new Factory();
    this->factoryB = new Factory();
    this->factoryC = new Factory();
    this->factoryE = new Factory();
    //qDebug() << "Fabricas Listas";
    //qDebug() <<"";



}

void Armazon::run(){
    //INITS
    //LOADER
    loader->__init__("/home/rev/Documents/GitHub/Armazon",clientes,articulos,firstCola);
    //BALANCER
    balancer->__init__(firstCola,fabricados,alisto,articulos);
    //REPARTIDOR
    repartidor->__init__(fabricados,queueA,queueB,queueC,articulos);
    //FACTORIES
    factoryA->__init__(A,firstCola,articulos,queueA);
    factoryB->__init__(B,firstCola,articulos,queueB);
    factoryC->__init__(C,firstCola,articulos,queueC);
    factoryE->__init__(Special,firstCola,articulos,queueA,queueB);
    //STARTS
    loader->start();
    balancer->start();
    repartidor->start();
    factoryA->start();
    factoryB->start();
    factoryC->start();
    factoryE->start();

}


void Armazon::pauseEverything(){
    this->loader->pauser();
    this->balancer->Pause();
    this->factoryA->Pause();
    this->factoryB->Pause();
    this->factoryC->Pause();
    this->factoryE->Pause();
}





