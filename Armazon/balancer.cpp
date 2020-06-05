#include "balancer.h"

Balancer::Balancer() {}

void Balancer::__init__(){
    pause = false;
    play = true;
}

void Balancer::Pause(){
    pause = true;
}

void Balancer::Unpause(){
    pause = false;
}

void Balancer::run(){
    while (play){
        if (pause)
            sleep(1);

    }
}
