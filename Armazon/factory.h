#ifndef FACTORY_H
#define FACTORY_H

#include "orderqueue.h"

struct Factory{
    //Attributes
    Category article;
    OrderQueue orderqueue;

    //Constructors
    Factory(Category _article){
        article = _article;
    }

};

#endif // FACTORY_H
