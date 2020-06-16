#ifndef RECRUTIER_H
#define RECRUTIER_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"


//ALISTADOR QUE RECORRE EL ALAMACEN RECOGIENDO LOS ARTICULOS SOLICITADOS POR EL PEDIDO
class Recrutier : public QThread{
    bool play;
    bool pause;
    OrderQueue* queue;
    int id;
    bool active;

    Recrutier();

    void __init__(OrderQueue* queue, int id);
    void run();
    void Pause();
    void Unpause();
};

#endif // RECRUTIER_H
