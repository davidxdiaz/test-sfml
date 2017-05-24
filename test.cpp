#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#include <conio.h>
#include <windows.h>
#include <fstream>
#include <ostream>
#include "fabrica.h"
using namespace std;

int main()
{
    fabrica *emb= new fabrica();
    return emb->dibujar();
}

