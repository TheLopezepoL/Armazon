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
    short priority;

    //Constructors
    Client(int code, QString name_,short priority_){
        id =code;
        name=name_;
        priority = priority_;
    };
    //Methods
};

#endif // CLIENT_H
