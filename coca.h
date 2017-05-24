#ifndef COCA_H
#define COCA_H
#include <iostream>
using namespace std;

class coca
{
    public:
        coca();
        coca(string n,int t);
        coca * getSiguiente();
        string getNombre();
        int getTipo();
        void setSiguiente(coca * s);
        void setNombre(string n);
        void setTipo(int t);


    private:
      string nombre;
      coca * sig;
      int tipo;

};

#endif // COCA_H
