#ifndef RECRUTIER_H
#define RECRUTIER_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"
#include <QDateTime>


//ALISTADOR QUE RECORRE EL ALAMACEN RECOGIENDO LOS ARTICULOS SOLICITADOS POR EL PEDIDO
class Recrutier : public QThread{   // Guardar en un array en Armazon
    bool play;
    bool pause;
    OrderQueue* arriving;
    OrderQueue* outgoing;
    ArticleList* articles;
    int id;
    bool active;

    Recrutier();

    void __init__(OrderQueue* arriving, OrderQueue* outgoing, ArticleList* articles, int id);
    void run();
    void Pause();
    void Unpause();
    int calculateTime(NodeOrder* order, Request* request);
};

#endif // RECRUTIER_H
