#ifndef nododoble_h
#define nododoble_h 2

#include <iostream>
#include <string>

using namespace std;


struct nododoble {
    string titulo;
    struct nododoble* sig = nullptr;
    struct nododoble* ant = nullptr;

};

#endif