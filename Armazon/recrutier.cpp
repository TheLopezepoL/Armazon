#include "recrutier.h"

Recrutier::Recrutier(){}

void Recrutier::__init__(OrderQueue *arriving, OrderQueue* outgoing, ArticleList *articles, int id){
    this->play = true;
    this->pause = false;
    this->active = true;
    this->arriving = arriving;
    this->outgoing = outgoing;
    this->articles = articles;
    this->id = id;
}

void Recrutier::run(){
    while (play){
        if (pause)
            active = false;
        while (pause)
            sleep(1);
        active = true;
        arriving->mutex->lock();
        NodeOrder* order = arriving->pop();
        arriving->mutex->unlock();
        if (order != nullptr){
            active = false;
            NodeRequest* request = order->data->requestQueue->first;
            order->data->orderReport.append("Alisto:\tAlistador #" + QString::number(this->id) + "\n");
            while (request != nullptr){
                if (request->data->reserved > 0)
                    sleep(calculateTime(order, request->data));
                request = request->nxt;
            }
            order->data->binnacle.append("Alsito:\t" + QDateTime::currentDateTime().toString("yyyy-MM-d h:m:s ap") + "\n");
            outgoing->mutex->lock();
            outgoing->append(order->data);
            outgoing->mutex->unlock();
        }
        sleep(1);
        active = true;
    }
}

int Recrutier::calculateTime(NodeOrder* order, Request *request){
    int time = 0;
    articles->mutex->lock();
    NodeArticle* article = articles->searchArticle(request->article);
    if (article != nullptr){
        QString pos = article->data->position;
        time = article->data->getTimeVault();
        order->data->orderReport.append(request->article + "\tUbicacion: " + pos + "\t" + QString::number(time) + " segundos\n");

    }
    articles->mutex->unlock();
    return time;
}
