#ifndef FACTOR_H
#define FACTOR_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"
#include <QDateTime>

class Factory : public QThread {
public:
    Category category;
    OrderQueue* balancerQueue;
    bool play;
    bool pause;
    ArticleList* articles;
    OrderQueue* queues[2] = {nullptr, nullptr};

    Factory();

    void __init__(Category category, OrderQueue* balancerQueue, ArticleList* articles,OrderQueue* first, OrderQueue* second = nullptr);
    void run();
    int biggerQueue();
    void fabricate(NodeOrder* node);
    void Pause();
    void Unpause();

    QString categoryName();
};

#endif // FACTOR_H
