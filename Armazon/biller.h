#ifndef BILLER_H
#define BILLER_H
#include <QThread>
#include <QDateTime>
#include "filemanager.h"
#include "orderqueue.h"

//ESTRUCTURA DE ETAPA FINAL FACTURACION
class Biller : public QThread{
public:
    OrderQueue* queue;
    bool play;
    bool pause;

    Biller(){}

    void __init__(OrderQueue* queue);
    void run();
    void Pause();
    void Unpause();
};

#endif // BILLER_H
