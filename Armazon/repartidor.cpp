#include "repartidor.h"

Repartidor::Repartidor(){}

void Repartidor::__init__(OrderQueue *recibidos, OrderQueue *queueA, OrderQueue *queueB, OrderQueue *queueC, ArticleList* articles){
    this->recibidos = recibidos;
    this->queueA = queueA;
    this->queueB = queueB;
    this->queueC = queueC;
    this->articles = articles;
    this->play = true;
    this->pause = false;
}

void Repartidor::run(){
    while (play){
        while(pause)
            sleep(1);
        recibidos->mutex->lock();
        NodeOrder* order = recibidos->pop();
        recibidos->mutex->unlock();
        if (order != nullptr) {
            Category category = searchCategory(order);
            switch (category) {
            case A:
                queueA->mutex->lock();
                queueA->append(order->data);
                queueA->mutex->unlock();
                break;
            case B:
                queueB->mutex->lock();
                queueB->append(order->data);
                queueB->mutex->unlock();
                break;
            case C:
                queueC->mutex->lock();
                queueC->append(order->data);
                queueC->mutex->unlock();
                break;
            default:
                break;
            }
        }
        sleep(1);
    }
}


Category Repartidor::searchCategory(NodeOrder *order){
    NodeRequest* request = order->data->requestQueue->first;
    Category category = Special;
    while (request != nullptr){
        if (request->data->total != (request->data->reserved + request->data->created)){
            articles->mutex->lock();
            category = articles->searchArticle(request->data->article)->data->category;
            articles->mutex->unlock();
            break;
        }
        request = request->nxt;
    }
    return category;
}
