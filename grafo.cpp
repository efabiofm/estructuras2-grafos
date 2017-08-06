/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   grafo.h
 * Author: fabio
 *
 * Created on August 6, 2017, 1:16 AM
 */

using namespace std;
#include <cstdlib>
#include <iostream>
#include <string>
#include "grafo.h"

Grafo::Grafo()
{
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 7; j++)
            costos[i][j] = 10000;

    costos[1][2] = 200;
    costos[1][4] = 150;
    costos[2][3] = 100;
    costos[3][1] = 50;
    costos[3][7] = 25;
    costos[4][3] = 500;
    costos[4][5] = 200;
    costos[5][6] = 175;
    costos[6][3] = 250;
    costos[7][5] = 300;

    for (int i = 1; i <= 7; i++) {
        vertices[i] = i;
        vertices2[i] = i;
    }
}

void Grafo::dijkstra(void) //calcula los caminos minimos desde el vertice 1 hacia los demas
{
    int conjunto[8]; // aqui se van guardando los vertices no visitados
    int posconjunto = 1;
    vertices[posconjunto] = 0;
    D[1] = 0;
    for (int i = 2; i <= 7; i++)
        D[i] = costos[1][i]; //inicializa el vector con los costos de 1 a i
    for (int i = 1; i <= 7 - 1; i++) {
        w = buscaminimo(); //deja en w el vertice no visitado con el menor costo en ese momento
        posconjunto++;
        conjunto[posconjunto] = w; //inserta al vertice en los visitados
        vertices2[w] = 0; //saca al vertice los no visitados
        for (int v = 7 - posconjunto; v <= 7; v++)
            D[v] = min(D[v], D[w] + costos[w][v]); //analiza si es menor por este camino(w) o por el que esta en este momento
    }
};

int Grafo::buscaminimo(void)//busca el vertice con costo minimo de los no visitados
{
    int minimo = 10000, pos = 10000;
    for (int i = 1; i <= 7; i++) {
        if (vertices2[i] != 0)
            if (D[i] < minimo) {
                minimo = D[i];
                pos = i;
            }
    }
    return pos;
};

int Grafo::min(int x, int y)//retorna el valor con menor costo
{
    if (x < y)
        return x;
    else
        return y;
};

void Grafo::mascorto(void)//saca la ruta de caminos mas cortos entre los vertices
{
    int i, j, k;
    int a[8][8];
    for (i = 1; i <= 7; i++)
        for (j = 1; j <= 7; j++) {
            a[i][j] = costos[i][j];
            p[i][j] = 0;
        }
    for (i = 1; i <= 7; i++)
        a[i][i] = 0;
    for (k = 1; k <= 7; k++)
        for (i = 1; i <= 7; i++)
            for (j = 1; j <= 7; j++)
                if ((a[i][k] + a[k][j])<(a[i][j])) {
                    a[i][j] = a[i][k] + a[k][j];
                    p[i][j] = k;
                }
};

void Grafo::caminos(int i, int j)//imprime la ruta mas corta desde el vertice i hasta el j
{
    int k;
    char c = ' ';
    k = p[i][j];
    if (k == 0)
        return;
    caminos(i, k);
    cout << k;
    cout << c;
    caminos(k, j);
}