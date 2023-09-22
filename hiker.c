#include "hiker.h"

int calcFB(int a){
    return a%15 == 0? 1500:(a%5==0? 500:(a%3==0?300:a));
}