#include "balancer.h"
#include <QDebug>

void Balancer::__init__(OrderQueue* pedidos, OrderQueue* fabricados, OrderQueue* alisto, ArticleList* articulos){
    pause = false;
    play = true;
    this->pedidos = pedidos;
    this->fabricar = fabricados;
    this->alisto = alisto;
    this->articulos = articulos;
}

Balancer::Balancer(){}

void Balancer::Pause(){
    pause = true;
}

void Balancer::Unpause(){
    pause = false;
}

void Balancer::run(){
    qDebug()<<"alv";
    while (play){
        while (pause)
            sleep(1);
        pedidos->mutex->lock();
        NodeOrder* order = pedidos->pop();
        pedidos->mutex->unlock();
        if (order != nullptr){
            if (reserveMaterial(order->data)){
                alisto->mutex->lock();
                alisto->append(order->data);
                alisto->mutex->unlock();
                qDebug() << "Alisto: " << order->data->clientID << Qt::endl;
            }
            else {
                fabricar->mutex->lock();
                fabricar->append(order->data);
                fabricar->mutex->unlock();
                qDebug() << "Fabrica: " << order->data->clientID << Qt::endl;
            }
        }
    }
}

bool Balancer::reserveMaterial(Order *order){
    NodeRequest* request = order->requestQueue->first;
    while (request != nullptr){
        NodeArticle* article = this->articulos->searchArticle(request->data->article);
        int dif = article->data->stock - request->data->total;
        if (dif < 0){
            article->data->stock = 0;
            request->data->reserved = request->data->total + dif;
        }
        else {
            article->data->stock = dif;
            request->data->reserved = request->data->total;
        }
        request = request->nxt;
    }
    order->isDone();
    return order->done;
}
