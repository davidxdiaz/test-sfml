#include "cola.h"
#include "coca.h"
#include <iostream>
using namespace std;
cola::cola()
{
    head=0;
    fin=0;
}

void cola::encolar(string n,int t)
{
    coca * c= new coca(n,t);
    if(head==0)
        head=c;
    else
        fin->setSiguiente(c);
    fin=c;
}
coca * cola::desencolar()
{
    if(head==0)
        return 0;
    coca * c=head;
    head=head->getSiguiente();
    return c;
}
bool cola::vacia()
{
    return head==0 ? true:false;
}

coca * cola::getHead()
{
    return head;
}
