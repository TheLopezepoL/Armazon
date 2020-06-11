#ifndef CLIENT_H
#define CLIENT_H
#include <QString>



//ESTRUCTURA DE CLIENTE
struct Client {
    //CODIGO
    QString id;
    //NOMBRE DEL CLIENTE
    QString name;
    //PRIORIDAD 1-10
    int priority;

    //Constructor
    Client(QString _id, QString _name, int _priority){
        id = _id;
        name = _name;
        priority = _priority;
       }
       //Methods
       void imprimir();
       int getPrio();
};

#endif // CLIENT_H
