#ifndef COLA_H
#define COLA_H
#include "coca.h"
#include <iostream>
using namespace std;

class cola
{
    public:
        cola();
        void encolar(string n,int t);
        coca* desencolar();
        bool vacia();
        coca * getHead();
        coca * head;
        coca * fin;
        // si retorna true no esta vacia si retorna false esta vacia

    private:

};

#endif // COLA_H
