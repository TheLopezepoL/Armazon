#ifndef CLIENTLIST_H
#define CLIENTLIST_H
#include "client.h"

struct NodeClient {
    Client* data;
    NodeClient* nxt;

    NodeClient();
};

struct SimpleList {
    NodeClient* first;

    SimpleList();

    void append(Client data);
    NodeClient* deleteIndex(int index);

};

#endif // CLIENTLIST_H
