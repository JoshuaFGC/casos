#ifndef nododoble_h
#define nododoble_h 2

#include <iostream>
#include <string>

using namespace std;
struct noticia{
    string titulo;
};

struct nododoble {
    struct noticia data;
    struct nododoble* sig = nullptr;
    struct nododoble* ant = nullptr;

};

#endif