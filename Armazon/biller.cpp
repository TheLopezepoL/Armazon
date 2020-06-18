#include "biller.h"

void Biller::__init__(OrderQueue* queue){
    message = "";
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
            message.append("Se ha finalizado el pedido ID: "+ QString::number(order->data->orderNum)+"\n");
            sleep(order->data->requestQueue->size());
            order->data->binnacle.append("A empaque:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            sleep(1);
            order->data->binnacle.append("Finalizado:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            order->data->binnacle.append("\n" + order->data->orderReport);
            //home/rev/Documents/GitHub/Armazon
            //"/home/thelopezepol/Escritorio/C++/Armazon"
            QString path = "/home/rev/Documents/GitHub/Armazon/Terminados/";
            path.append(QString::number(order->data->orderNum) + "_" + order->data->clientID + "_" + QDateTime::currentDateTime().toString("yyyy_MM_d_h-m-s"));
            //path.append("Prueba.txt");
            FileManager::writeFileN(order->data->binnacle, path);
            //FileManager::writeFileN("hola soy un txt", path);
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
