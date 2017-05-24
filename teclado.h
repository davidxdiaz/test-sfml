#ifndef TECLADO_H
#define TECLADO_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#include <conio.h>
#include <windows.h>
using namespace std;


class teclado
{
    public:
        teclado();
        string leerString();
        int leerInt();
        string palabra;
        void limpiar();


};

#endif // TECLADO_H
