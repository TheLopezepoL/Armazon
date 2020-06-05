#ifndef REQUESTQUEUE_H
#define REQUESTQUEUE_H
#include "request.h"

struct NodeRequest {
    Request* data;
    NodeRequest* nxt;

    NodeRequest();
};

struct RequestQueue {
    NodeRequest* first;
    NodeRequest* last;

    RequestQueue();

    void append(Request data);
    NodeRequest* pop();

};
#endif // REQUESTQUEUE_H
