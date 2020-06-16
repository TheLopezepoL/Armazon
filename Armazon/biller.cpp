#include "biller.h"

void Biller::__init__(OrderQueue* queue){
    this->queue = queue;
    this->play = true;
    this->pause = false;
}

void Biller::run(){
    while(play){
        while(pause)
            sleep(1);
        queue->mutex->lock();
        NodeOrder* order = queue->pop();
        queue->mutex->unlock();
        if (order != nullptr){
            sleep(order->data->requestQueue->size());
            order->data->binnacle.append("A empaque:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            sleep(1);
            order->data->binnacle.append("Finalizado:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            order->data->binnacle.append("\n" + order->data->orderReport);
            QString path = "/home/thelopezepol/Escritorio/C++/Armazon/Terminados/";
            path.append(QString::number(order->data->orderNum) + "_" + order->data->clientID + "_" + QDateTime::currentDateTime().toString("yyyy-MM-d_h:m:s_ap"));
            FileManager::writeFileN(order->data->binnacle, path);
        }
        sleep(1);
    }
}

void Biller::Pause(){
    this->pause = true;
}

void Biller::Unpause(){
    this->pause = false;
}
