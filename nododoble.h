#ifndef nododoble_h
#define nododoble_h 2

#include <iostream>
#include <string>
using namespace std;
struct nododoble {
    string data;
    nododoble *sig = nullptr;
    nododoble *ant = nullptr;

};

#endif