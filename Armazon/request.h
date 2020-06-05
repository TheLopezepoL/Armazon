#ifndef REQUEST_H
#define REQUEST_H
#include "article.h"


struct Request {
    Article* article;
    int total;
    int reserved;

    Request();
};

#endif // REQUEST_H
