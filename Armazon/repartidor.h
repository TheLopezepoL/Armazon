#ifndef REPARTIDOR_H
#define REPARTIDOR_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"

class Repartidor : public QThread {
public:
    OrderQueue* recibidos;
    OrderQueue* queueA;
    OrderQueue* queueB;
    OrderQueue* queueC;
    bool play;
    bool pause;

    Repartidor();

    void __init__(OrderQueue* recibidos, OrderQueue* queueA, OrderQueue* queueB, OrderQueue* queueC);
    void run();
    void Pause();
    void Unpause();

};

#endif // REPARTIDOR_H
