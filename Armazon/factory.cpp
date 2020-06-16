#include "factory.h"

Factory::Factory(){}

void Factory::__init__(Category category,OrderQueue *balancerQueue, ArticleList* articles,OrderQueue* first, OrderQueue* second){
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
            fabricate(order);
            balancerQueue->mutex->lock();
            balancerQueue->append(order->data, true);
            balancerQueue->mutex->unlock();
        }
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
    sleep(time);
    request->data->created = quant;
}
