#ifndef REQUEST_H
#define REQUEST_H
#include "article.h"

//SOLICITUD: LLEVA UN PUNTERO A UN ARTICULO Y DETERMINA SI LA ORDEN ESTA COMPLETA O NO
struct Request {
    //ARTICULO
    Article* article;
    //TOTAL DE PRODUCTOS PEDIDOS
    int total;
    //SI HAY PRODUCTOS DISPONIBLES EN ALMACEN, LOS DEPOSITA AQUI.
    int reserved;

    //Constructor
    Request();
};

#endif // REQUEST_H
