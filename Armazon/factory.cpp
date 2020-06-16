#include "factory.h"

Factory::Factory(){}

void Factory::__init__(Category category, OrderQueue *balancerQueue, ArticleList* articles,OrderQueue* first, OrderQueue* second){
    this->category = category;
    this->balancerQueue = balancerQueue;
    this->articles = articles;
    this->queues[0] = first;
    this->queues[1] = second;
    this->play = true;
    this->pause = false;
}

void Factory::run(){
    while(play){
        while(pause)
            sleep(1);
        int i = biggerQueue();
        queues[i]->mutex->lock();
        NodeOrder* order = queues[i]->pop();
        queues[i]->mutex->unlock();
        if (order != nullptr){
            if (order->data->factoryFT){
                 order->data->orderReport.append("Fabrica:\n");
                 order->data->factoryFT = false;
             }
            fabricate(order);
            balancerQueue->mutex->lock();
            balancerQueue->append(order->data, true);
            balancerQueue->mutex->unlock();
        }
        sleep(1);
    }
}

int Factory::biggerQueue(){
    int i = 0;
    if (queues[1] != nullptr){
        queues[0]->mutex->lock();
        queues[1]->mutex->lock();
        if (queues[1]->size() > queues[0]->size())
            i = 1;
        queues[0]->mutex->unlock();
        queues[1]->mutex->unlock();
    }
    return i;
}

void Factory::fabricate(NodeOrder *node){
    NodeRequest* request = node->data->requestQueue->first;
    int quant = 0;
    int time = 0;
    while (request != nullptr){
        quant = request->data->total - request->data->reserved;
        if (quant != 0){
            articles->mutex->lock();
            time = articles->searchArticle(request->data->article)->data->time * quant;
            articles->mutex->unlock();
            break;
        }
        request = request->nxt;
    }
    if (request == nullptr)
        return;
    node->data->orderReport.append("Articulo\t" + request->data->article + "\tFabricado en " + categoryName() + "\n");
    node->data->orderReport.append(QString::number(quant) + "unidades\n");
    node->data->orderReport.append("Inicio:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
    sleep(time);
    request->data->created = quant;
    node->data->binnacle.append("A Fabrica:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\tFaltaban " + QString::number(quant) + "unidad(es) de " + request->data->article);
        node->data->orderReport.append("Final:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
    }

    QString Factory::categoryName(){
        switch (this->category) {
        case A:
            return "A";
        case B:
            return "B";
        case C:
            return "C";
        default:
            return "Comodin";
        }
    }

    void Factory::Pause(){
        this->pause = true;
    }

    void Factory::Unpause(){
        this->pause = false;
}
