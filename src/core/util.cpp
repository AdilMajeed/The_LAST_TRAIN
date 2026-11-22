#include "util.h"
#include <iostream>
using namespace std;
// Primitive helper utilities, clamping, and screen control

int clampInt(int val, int minVal, int maxVal){
    if (val < minVal){
        return minVal;
    }
    else if (val > maxVal){
        return maxVal;
    }
    else return val;
}

//testing if this works