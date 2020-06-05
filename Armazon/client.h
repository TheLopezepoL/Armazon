#ifndef CLIENT_H
#define CLIENT_H
#include <QString>


//ESTRUCTURA DE CLIENTE
struct Client {
    //CODIGO
    int id;
    //NOMBRE DEL CLIENTE
    QString name;
    //PRIORIDAD 1-10
    int priority;

    Client();
};

#endif // CLIENT_H
