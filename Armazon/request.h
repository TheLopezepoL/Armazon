#ifndef REQUEST_H
#define REQUEST_H
#include "article.h"

//SOLICITUD: LLEVA UN PUNTERO A UN ARTICULO Y DETERMINA SI LA ORDEN ESTA COMPLETA O NO
struct Request {
    //ARTICULO
    QString article;
    //TOTAL DE PRODUCTOS PEDIDOS
    int total;
    //SI HAY PRODUCTOS DISPONIBLES EN ALMACEN, LOS DEPOSITA AQUI.
    int reserved;
    //CANTIDAD FABRICADA DEL ARTICULO
    int created;

    //Constructor
    //REQUEST RESERVED SIEMPRE EMPIEZA EN CERO
    Request(QString article_, int total_){
        article = article_;
        total = total_;
        reserved = 0;
        created = 0;
    };
    //Methods
    void imprimir();
    void sumReserved(int num);
};

#endif // REQUEST_H
