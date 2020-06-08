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
struct RequestList {
    NodeRequest* first;
    NodeRequest* last;
    QMutex* mutex;

    RequestList(){
        first = last = nullptr;
    };

    RequestList(QMutex* mutex){
        first = last = nullptr;
        this->mutex = mutex;
    };

    //Methods
    void append(Request *data);
    NodeRequest *search(QString id);
    void imprimir();

};
#endif // REQUESTQUEUE_H
