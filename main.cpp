/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: fabio
 *
 * Created on August 5, 2017, 7:14 PM
 */

#include <QApplication>
#include <iostream>
#include "grafo.h"

using namespace std;

int main(void) {
    Grafo *g = new Grafo();


    //grafo g;
    g->dijkstra();
    g->mascorto();
    char c = ' ';
    char s[20] = "\nCamino Mínimo: ";
    char s2[20] = "Costo: ";
    for (int i = 1; i <= 7; i++)//este ciclo imprime los caminos minimos desde el vertice 1 hasta los demas
    {
        cout << s;
        cout << 1;
        cout << c;

        g->caminos(1, i);
        cout << i;
        cout << c;


        cout << s2;
        cout << g->D[i];


    }
    return 0;
}
