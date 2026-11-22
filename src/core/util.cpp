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

void trimWhitespace(char* str){
    if (!str) return;
    
    char* letters = str;
    while (*letters == ' ' || *letters== '\t' || *letters == '\r' || *letters == '\n') {
        letters++;
    }

    char* write = str;
    while (*letters != '\0'){
        *write = *letters;
        write++;
        letters++;
    }
    *write = '\0';

    while (write > str){
        char prev = *(write - 1);
        if (prev == ' ' || prev == '\t' || prev == '\r' || prev == '\n') {
            write--;
            *write = '\0';
        } 
        else break;
    }
}

bool stringEquals(const char* a, const char* b){
    
    if (!a || !b) return 0;
    
    while (*a && *b){
        if (*a != *b) return 0;
    a++;
    b++;}
    return (*a == *b);
}

void printHeader(const char* title){
    cout << "\n********************************************" << endl;
    if (title){
        cout << "  " << title << endl;
    }
    cout << "********************************************" << endl;
}

void clearScreen(){
    cout << "\n============================================" << endl;
}