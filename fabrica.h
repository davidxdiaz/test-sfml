#ifndef FABRICA_H
#define FABRICA_H
#include "cola.h"
#include "coca.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "teclado.h"
#include <conio.h>
#include <windows.h>
using namespace std;

class fabrica
{
    public:
        fabrica();
        void menu();
        void registro();
        void dibujarCocas();
        int dibujar();
        void simulacion(string empresa,int cn,int cl,int cz);

    private:
        cola * lista;
        string nombres[10];
        void llenarLista(int cn,int cl,int cz);
        void llenarNombres();





};

#endif // FABRICA_H
