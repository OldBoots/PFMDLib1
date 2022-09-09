#include "min.h"

Min::Min()
{
}

int comp(int x, int y){
    if(x < y){
        return x;
    }
    return y;
}

float comp(float x, float y){
    if(x < y){
        return x;
    }
    return y;
}
