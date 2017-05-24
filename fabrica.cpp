#include "fabrica.h"
#include "cola.h"
#include "coca.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "teclado.h"
#include <conio.h>
#include <windows.h>
#include <sstream>
#include <string>
using namespace std;

fabrica::fabrica()
{
    lista=new cola();
    llenarNombres();
}

void fabrica::llenarLista(int cn,int cl,int cz)
{
    for(int i=0;i<cn;i++)
    {
        string nombret = nombres[rand()%10];
        lista->encolar(nombret,0);
    }

    for(int c=0;c<cl;c++)
    {
        string nombret = nombres[rand()%10];
        lista->encolar(nombret,1);
    }

    for(int c=0;c<cz;c++)
    {
        string nombret = nombres[rand()%10];
        lista->encolar(nombret,2);
    }
}

void fabrica::llenarNombres()
{
    nombres[0]="Ester";
    nombres[1]="Riner";
    nombres[2]="Raul";
    nombres[3]="Oscar";
    nombres[4]="David";
    nombres[5]="Julio";
    nombres[6]="Jaime";
    nombres[7]="Miguel";
    nombres[8]="Andy";
    nombres[9]="Exter";
}

void fabrica::simulacion(string empresa,int cn,int cl,int cz)
{
    sf::Font fuente;

    sf::Text txtEmpresa;
    sf::Text txtCant;
    sf::Text txtTipo;
    sf::Text txtNombre;
    sf::Text txtCn;
    sf::Text txtCL;
    sf::Text txtCz;
    sf::Text txtTotal;

    sf::Texture txtScanner[2];
    sf::Texture txtCocas[3];
    sf::Texture txtfondo;
    sf::Texture txtvacio;
    sf::Texture txtTv;
    sf::Texture txtMadera;

    sf::Sprite spcoca1;
    sf::Sprite spcoca2;
    sf::Sprite spcoca3;
    sf::Sprite spScant;
    sf::Sprite spScan;
    sf::Sprite spTv;
    sf::Sprite spMadera;

    sf::Sprite spfondo;
    sf::RenderWindow win(sf::VideoMode(960, 708), "Cuarto de envio");
    txtfondo.loadFromFile("fondoFabrica.jpg");
    spfondo.setTexture(txtfondo);

    txtCocas[0].loadFromFile("cocan.png");
    txtCocas[1].loadFromFile("cocal.png");
    txtCocas[2].loadFromFile("cocaz.png");
    txtScanner[0].loadFromFile("scanner.png");
    txtScanner[1].loadFromFile("scannert.png");
    txtTv.loadFromFile("tv.png");
    txtMadera.loadFromFile("madera.png");

    spScan.setTexture(txtScanner[0]);
    spScant.setTexture(txtScanner[1]);
    spTv.setTexture(txtTv);
    spMadera.setTexture(txtMadera);

    spScan.setPosition(320,510);
    spScant.setPosition(320,510);
    spTv.setPosition(10,20);
    spMadera.setPosition(0,620);

    fuente.loadFromFile("arial.ttf");

    txtNombre.setFont(fuente);
    txtEmpresa.setFont(fuente);
    txtCant.setFont(fuente);
    txtTipo.setFont(fuente);
    txtTotal.setFont(fuente);
    txtCL.setFont(fuente);
    txtCn.setFont(fuente);
    txtCz.setFont(fuente);

    txtNombre.setStyle(sf::Text::Bold);
    txtCant.setStyle(sf::Text::Bold);
    txtTipo.setStyle(sf::Text::Bold);
    txtEmpresa.setStyle(sf::Text::Bold);
    txtTotal.setStyle(sf::Text::Bold);
    txtCL.setStyle(sf::Text::Bold);
    txtCn.setStyle(sf::Text::Bold);
    txtCz.setStyle(sf::Text::Bold);

    int s=15;

    txtNombre.setCharacterSize(s);
    txtEmpresa.setCharacterSize(s+5);
    txtTipo.setCharacterSize(s);
    txtCant.setCharacterSize(s);
    txtTotal.setCharacterSize(s);
    txtCL.setCharacterSize(s);
    txtCn.setCharacterSize(s);
    txtCz.setCharacterSize(s);

    txtNombre.setColor(sf::Color::White);
    txtEmpresa.setColor(sf::Color::White);
    txtTipo.setColor(sf::Color::White);
    txtCant.setColor(sf::Color::White);
    txtCn.setColor(sf::Color::White);
    txtCL.setColor(sf::Color::White);
    txtCz.setColor(sf::Color::White);
    txtTotal.setColor(sf::Color::White);

    int x=60,h=75;
    txtEmpresa.setPosition(x,h);
    txtCant.setPosition(x,h+30);
    txtTipo.setPosition(x,h+60);
    txtNombre.setPosition(x,h+90);
    txtTotal.setPosition(x,h+120);
    txtCn.setPosition(x,h+150);
    txtCL.setPosition(x,h+180);
    txtCz.setPosition(x,h+210);

    txtEmpresa.setString("Empresa: "+empresa);
    int cont=0,cont1=0,cont2=0;
    int contT=0;

    // LLeno la lista de coca colas
    llenarLista(cn,cl,cz);

    float x1=-110,x2=-110,x3=-110,y=520,v=0.5;
    coca *tmp;
    if(!lista->vacia()){
        tmp=lista->desencolar();
        spcoca1.setTexture(txtCocas[tmp->getTipo()]);
        x1=-109;
        cont++;
    }
    if(tmp->getTipo()==1)
        contT=1;
    else if(tmp->getTipo()==2)
        contT=2;

    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
        }


        if(x1==320 || x2==320 || x3==320 )
        {

            txtNombre.setString("Nombre: "+tmp->getNombre());
            string temporalTipo="Normal";
            if(tmp->getTipo()==1)
                temporalTipo="Light";
            else if(tmp->getTipo()==2)
                temporalTipo="Zero";
            string cadena = "";
            stringstream stream;

            stream << cont;
            cadena = stream.str();
            txtCant.setString("Cantidad de Coca Colas "+temporalTipo+": "+cadena);
            txtTipo.setString("Tipo de Coca Cola: "+temporalTipo);
        }

        if(x1==320 || x2==320 || x3==320 )
        {


            if(!lista->vacia())
            {
                cont++;


                if(x1==-110)
                {
                    tmp = lista->desencolar();
                    spcoca1.setTexture(txtCocas[tmp->getTipo()]);
                    x1=-109;
                }
                else if(x2==-110)
                {
                    tmp = lista->desencolar();
                    spcoca2.setTexture(txtCocas[tmp->getTipo()]);
                    x2=-109;
                }

                else if(x3==-110)
                {
                    tmp = lista->desencolar();
                    spcoca3.setTexture(txtCocas[tmp->getTipo()]);
                    x3=-109;
                }
                   if(tmp->getTipo()==1)
                    contT=1;
                else if(tmp->getTipo()==2)
                    contT=2;

                if(contT==1)
                {
                    cont1++;
                    cont=cont1;
                }

                else if(contT==2)
                {
                    cont2++;
                    cont=cont2;
                }


            }
            else
            {
                int total= cn +cl+ cz;
                string cadena = "";
                stringstream stream;
                stream << total;
                cadena = stream.str();
                txtTotal.setString("Total de latas: "+cadena);

                string cadena1 = "";
                stringstream stream1;
                stream1 << cl;
                cadena1 = stream1.str();
                txtCL.setString("Total de latas Light: "+cadena1);

                string cadena2 = "";
                stringstream stream2;
                stream2 << cn;
                cadena2 = stream2.str();
                txtCn.setString("Total de latas Normales: "+cadena2);

                string cadena3 = "";
                stringstream stream3;
                stream3 << cz;
                cadena3 = stream3.str();
                txtCz.setString("Total de latas Zero: "+cadena3);
            }
        }


        if(x1>-110 && x1<960)
            x1+=v;
        else
            x1=-110;

        if(x2>-110 && x2<960)
            x2+=v;
        else
            x2=-110;

        if(x3>-110 && x3<960)
            x3+=v;
        else
            x3=-110;
        spcoca1.setPosition(x1,y);
        spcoca2.setPosition(x2,y);
        spcoca3.setPosition(x3,y);

        win.clear();
        win.draw(spfondo);
        win.draw(spTv);
        win.draw(txtEmpresa);
        win.draw(txtNombre);
        win.draw(txtTipo);
        win.draw(txtCant);
        win.draw(txtTotal);
        win.draw(txtCn);
        win.draw(txtCL);
        win.draw(txtCz);
        win.draw(spScan);
        win.draw(spcoca1);
        win.draw(spcoca2);
        win.draw(spcoca3);
        win.draw(spScant);
        win.draw(spMadera);
        win.display();
    }
}

void fabrica::menu()
{
    sf::Text encargar;
    sf::Font fuente;
    sf::Text titulo;
    sf::Text salir;
    sf::Texture txtfondo;
    sf::Sprite spfondo;
    sf::RenderWindow win(sf::VideoMode(1200, 720), "Menu");

    txtfondo.loadFromFile("fondo.jpg");
    fuente.loadFromFile("arial.ttf");
    spfondo.setTexture(txtfondo);

    encargar.setString("1. Encargar");
    titulo.setString("Cerveceria Hondureña");
    salir.setString("2. Salir");

    encargar.setCharacterSize(48);
    titulo.setCharacterSize(72);
    salir.setCharacterSize(48);

    encargar.setColor(sf::Color::White);
    titulo.setColor(sf::Color::White);
    salir.setColor(sf::Color::White);

    encargar.setStyle(sf::Text::Bold);
    titulo.setStyle(sf::Text::Bold);
    salir.setStyle(sf::Text::Bold);

    encargar.setFont(fuente);
    titulo.setFont(fuente);
    salir.setFont(fuente);

    encargar.setPosition(450,280);
    salir.setPosition(450,380);
    titulo.setPosition(200,50);
    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            if(event.type== sf::Event::KeyPressed)
            {
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
                {
                    win.close();
                    registro();
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
                {
                    win.close();
                }
            }
        }

        win.clear();

        win.draw(spfondo);
        win.draw(encargar);
        win.draw(titulo);
        win.draw(salir);
        win.display();
    }
}

void fabrica::registro()
{
    int op=0,cantN=0,cantL=0,cantZ=0;
    string nempresa="";
    teclado * scan=new teclado();
    sf::Font fuente;
    //Creo las texturas text que apareceran en la ventana
    sf::Text nombre;

    sf::Text titulo;
    sf::Text cantidadN;
    sf::Text cantidadL;
    sf::Text cantidadZ;

    sf::Text name;
    sf::Text cN;
    sf::Text cL;
    sf::Text cZ;

    sf::Texture txtfondo;
    sf::Sprite spfondo;
    sf::RenderWindow win(sf::VideoMode(1200, 720), "Menu");
    //Cargo la imagen a la ventana y cargo una fuente para las text
    txtfondo.loadFromFile("fondo.jpg");
    fuente.loadFromFile("arial.ttf");
    spfondo.setTexture(txtfondo);


    titulo.setString("Registro de Datos");


    nombre.setCharacterSize(30);
    titulo.setCharacterSize(60);
    cantidadN.setCharacterSize(30);
    cantidadL.setCharacterSize(30);
    cantidadZ.setCharacterSize(30);
    name.setCharacterSize(30);
    cN.setCharacterSize(30);
    cL.setCharacterSize(30);
    cZ.setCharacterSize(30);


    nombre.setColor(sf::Color::White);
    titulo.setColor(sf::Color::White);
    cantidadN.setColor(sf::Color::White);
    cantidadL.setColor(sf::Color::White);
    cantidadZ.setColor(sf::Color::White);
    name.setColor(sf::Color::White);
    cN.setColor(sf::Color::White);
    cL.setColor(sf::Color::White);
    cZ.setColor(sf::Color::White);

    nombre.setStyle(sf::Text::Bold);
    titulo.setStyle(sf::Text::Bold);
    cantidadN.setStyle(sf::Text::Bold);
    cantidadL.setStyle(sf::Text::Bold);
    cantidadZ.setStyle(sf::Text::Bold);
    name.setStyle(sf::Text::Bold);
    cN.setStyle(sf::Text::Bold);
    cL.setStyle(sf::Text::Bold);
    cZ.setStyle(sf::Text::Bold);

    nombre.setFont(fuente);
    titulo.setFont(fuente);
    cantidadN.setFont(fuente);
    cantidadL.setFont(fuente);
    cantidadZ.setFont(fuente);
    name.setFont(fuente);
    cN.setFont(fuente);
    cL.setFont(fuente);
    cZ.setFont(fuente);


    nombre.setPosition(100,80);
    cantidadN.setPosition(100,240);
    cantidadL.setPosition(100,400);
    cantidadZ.setPosition(100,560);
    titulo.setPosition(100,0);
    name.setPosition(100,160);
    cN.setPosition(100,320);
    cL.setPosition(100,480);
    cZ.setPosition(100,640);

    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            if(event.type== sf::Event::KeyPressed)
            {
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
                {
                    op++;
                    scan->limpiar();
                    if(op==1)
                       nombre.setString("1. Ingrese el nombre de la Empresa");
                    if(op==2)
                       cantidadN.setString("2. Ingrese la cantidad de coca-colas Normales");
                    if(op==3)
                       cantidadL.setString("3. Ingrese la cantidad de coca-colas Light");
                    if(op==4)
                       cantidadZ.setString("4. Ingrese la cantidad de coca-colas Zero");
                    if(op==5)
                    {
                        win.close();
                        simulacion(nempresa,cantN,cantL,cantZ);
                    }
                }
                else if(op==1)
                {
                    nempresa=scan->leerString();
                    name.setString(nempresa);
                }
                else if(op==2)
                {
                    cantN=scan->leerInt();
                    stringstream stream;
                    stream << cantN;
                    cN.setString(stream.str());
                }
                else if(op==3)
                {
                    cantL=scan->leerInt();
                    stringstream stream;
                    stream << cantL;
                    cL.setString(stream.str());
                }
                else if(op==4)
                {
                    cantZ=scan->leerInt();
                    stringstream stream;
                    stream << cantZ;
                    cZ.setString(stream.str());
                }
            }
        }
        win.clear();
        win.draw(spfondo);
        win.draw(nombre);
        win.draw(name);
        win.draw(cN);
        win.draw(cL);
        win.draw(cZ);
        win.draw(titulo);
        win.draw(cantidadN);
        win.draw(cantidadL);
        win.draw(cantidadZ);
        win.display();
    }
}

int fabrica::dibujar()
{
    //menu();
    simulacion("hola",3,2,1);
    return 0;
}

