#include "comp.h"

Comp::Comp(){

}

int Comp::min(int x, int y){
    if(x < y){
        return x;
    }
    return y;
}

int Comp::max(int x, int y){
    if(x > y){
        return x;
    }
    return y;
}

double Comp::min(double x, double y){
    if(x < y){
        return x;
    }
    return y;
}

double Comp::max(double x, double y){
    if(x > y){
        return x;
    }
    return y;
}
