#include "teclado.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

#include <conio.h>
#include <windows.h>
using namespace std;

teclado::teclado()
{
    palabra="";
}

void teclado::limpiar()
{
    palabra="";
}

string teclado::leerString()
{

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            palabra=palabra+"a";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::B))
            palabra=palabra+"b";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::C))
            palabra=palabra+"c";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            palabra=palabra+"d";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
            palabra=palabra+"e";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::F))
            palabra=palabra+"f";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::G))
            palabra=palabra+"g";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::H))
            palabra=palabra+"h";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::I))
            palabra=palabra+"i";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::J))
            palabra=palabra+"j";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::K))
            palabra=palabra+"k";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::L))
            palabra=palabra+"l";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::M))
            palabra=palabra+"m";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::N))
            palabra=palabra+"n";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::O))
            palabra=palabra+"o";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            palabra=palabra+"p";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
            palabra=palabra+"q";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            palabra=palabra+"r";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            palabra=palabra+"s";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::T))
            palabra=palabra+"t";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::U))
            palabra=palabra+"u";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::V))
            palabra=palabra+"v";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            palabra=palabra+"w";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::X))
            palabra=palabra+"x";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
            palabra=palabra+"y";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
            palabra=palabra+"z";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            palabra=palabra+" ";
         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
            palabra=palabra+"0";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
            palabra=palabra+"1";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
            palabra=palabra+"2";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
            palabra=palabra+"3";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
            palabra=palabra+"4";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
            palabra=palabra+"5";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
            palabra=palabra+"6";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
            palabra=palabra+"7";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
            palabra=palabra+"8";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
            palabra=palabra+"9";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad0))
            palabra=palabra+"0";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1))
            palabra=palabra+"1";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2))
            palabra=palabra+"2";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3))
            palabra=palabra+"3";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4))
            palabra=palabra+"4";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5))
            palabra=palabra+"5";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6))
            palabra=palabra+"6";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7))
            palabra=palabra+"7";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8))
            palabra=palabra+"8";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9))
            palabra=palabra+"9";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
        {
            palabra.replace(palabra.length()-1,1,"");
        }

     return palabra;

}

int teclado::leerInt()
{
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
            palabra=palabra+"0";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
            palabra=palabra+"1";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
            palabra=palabra+"2";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
            palabra=palabra+"3";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
            palabra=palabra+"4";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
            palabra=palabra+"5";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
            palabra=palabra+"6";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
            palabra=palabra+"7";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
            palabra=palabra+"8";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
            palabra=palabra+"9";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad0))
            palabra=palabra+"0";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1))
            palabra=palabra+"1";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2))
            palabra=palabra+"2";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3))
            palabra=palabra+"3";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4))
            palabra=palabra+"4";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5))
            palabra=palabra+"5";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6))
            palabra=palabra+"6";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7))
            palabra=palabra+"7";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8))
            palabra=palabra+"8";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9))
            palabra=palabra+"9";
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
            palabra.replace(palabra.length()-1,1,"");

     return atoi(palabra.c_str());

}


