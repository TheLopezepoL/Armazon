#ifndef FACTOR_H
#define FACTOR_H
#include <QThread>
#include "orderqueue.h"
#include "articlelist.h"


class Factory : public QThread {
public:
    Category category;
    OrderQueue queues[];


    Factory();
};

#endif // FACTOR_H
