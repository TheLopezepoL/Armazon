#ifndef REQUESTQUEUE_H
#define REQUESTQUEUE_H
#include "request.h"

//NODO DE COLA SOLICITUD
struct NodeRequest {
    Request* data;
    NodeRequest* nxt, *prv;

    NodeRequest(Request *data_){
        data = data_;
        nxt = prv = nullptr;
    }

    //Metodos
    void imprimir();
};

//COLA SOLICITUD
struct RequestQueue {
    NodeRequest* first;
    NodeRequest* last;

    RequestQueue(){
        first = last = nullptr;
    };
    //Methods
    void append(Request *data);
    NodeRequest *search(QString id);
    void imprimir();

};
#endif // REQUESTQUEUE_H
