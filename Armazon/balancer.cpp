#include "balancer.h"
#include <QDebug>

void Balancer::__init__(OrderQueue* pedidos, OrderQueue* fabricados, OrderQueue* alisto, ArticleList* articulos){
    pause = false;
    play = true;
    message = "";
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
    //qDebug()<<"alv";
    while (play){
        while (pause)
            sleep(1);
        pedidos->mutex->lock();
        NodeOrder* order = pedidos->pop();
        pedidos->mutex->unlock();
        if (order != nullptr){
            if (order->data->balancerFT)
                order->data->binnacle.append("A Balanceador:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            if (reserveMaterial(order->data)){
                alisto->mutex->lock();
                alisto->append(order->data);
                alisto->mutex->unlock();
                message.append("Se esta alistando el pedido ID: " + QString::number(order->data->orderNum) +" del cliente " +order->data->clientID+"\n");
                qDebug() << "Alisto el pedido: " << order->data->orderNum << Qt::endl;
            }
            else {
                fabricar->mutex->lock();
                fabricar->append(order->data);
                fabricar->mutex->unlock();
                message.append("Se ha enviado a fabricas el pedido ID: " + QString::number(order->data->orderNum) +" del cliente " +order->data->clientID+"\n");
                qDebug() << "Fabrica el pedido: " << order->data->orderNum << Qt::endl;
            }

        }
        sleep(1);
    }
}

bool Balancer::reserveMaterial(Order *order){
    order->isDone();
    if (order->balancerFT && !order->done){
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
        order->balancerFT = false;
    }
    return order->done;
}
