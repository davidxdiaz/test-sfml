#include "coca.h"
#include <iostream>
using namespace std;
coca::coca()
{
    setNombre("");
    setTipo(0);
    setSiguiente(0);
}

coca::coca(string n,int t)
{
    setNombre(n);
    setTipo(t);
    setSiguiente(0);
}
coca * coca::getSiguiente()
{
    return sig;
}

string coca::getNombre()
{
    return nombre;
}
int coca::getTipo()
{
    return tipo;
}
void coca::setSiguiente(coca * s)
{
    sig=s;
}
void coca::setNombre(string n)
{
    nombre=n;
}
void coca::setTipo(int t)
{
    tipo=t;
}
