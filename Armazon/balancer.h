#ifndef BALANCER_H
#define BALANCER_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"
#include <QDateTime>

//ESTRUCTURA DEL BALANCEADOR
class Balancer : public QThread {

public:
    OrderQueue* pedidos;
    OrderQueue* fabricar;
    OrderQueue* alisto;
    ArticleList* articulos;
    QString message;


    bool play;
    bool pause;

    Balancer();

    void __init__(OrderQueue* pedidos, OrderQueue* fabricados, OrderQueue* alisto, ArticleList* articulos);
    void run();
    void Pause();
    void Unpause();
    bool reserveMaterial(Order* order);



};

#endif // BALANCER_H
