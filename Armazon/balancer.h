#ifndef BALANCER_H
#define
#include <QThread>
#include "orderqueue.h"

//ESTRUCTURA DEL BALANCEADOR
class Balancer : public QThread {

public:
    OrderQueue pedidos;
    OrderQueue fabricar;
    OrderQueue alisto;

    bool play;
    bool pause;

    Balancer();

    void __init__();
    void run();
    void Pause();
    void Unpause();


};

#endif // BALANCER_H
