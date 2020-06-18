#ifndef REPARTIDOR_H
#define REPARTIDOR_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"
#include <QDebug>

class Repartidor : public QThread {
public:
    OrderQueue* recibidos;
    OrderQueue* queueA;
    OrderQueue* queueB;
    OrderQueue* queueC;
    ArticleList* articles;
    bool play;
    bool pause;

    Repartidor();

    void __init__(OrderQueue* recibidos, OrderQueue* queueA, OrderQueue* queueB, OrderQueue* queueC, ArticleList* articles);
    void run();
    Category searchCategory(NodeOrder* order);
    void Pause();
    void Unpause();

};

#endif // REPARTIDOR_H
