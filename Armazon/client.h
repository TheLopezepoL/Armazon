#ifndef CLIENT_H
#define CLIENT_H
#include <QString>

struct Client {
    int id;
    QString name;
    short priority;

    Client();
};

#endif // CLIENT_H
