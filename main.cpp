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
    
    /*
    HashTable * c = new HashTable;
    
    //EDIT 10AGO2017: ESTO SE CAMBIARIA POR LOS VERTICES EN CASO DE QUERER HACER PRUEBAS
    Persona * p1 = new Persona("Juan", "Perez", "123456789");
    Persona * p2 = new Persona("Esteban", "Jimenez", "a1b2c3d4e");
    Persona * p3 = new Persona("Randal", "Fernandez", "5f6g7h8i9");
    Persona * p4 = new Persona("Julian", "Ramirez", "0o9i8u7y6");
    Persona * p5 = new Persona("Adolfo", "Mendez", "1qwe2ee39"); //no se ingresa

    c->addPersona(c->hashString(p1), new HashNode(p1));
    c->addPersona(c->hashString(p2), new HashNode(p2));
    c->addPersona(c->hashString(p3), new HashNode(p3));
    c->addPersona(c->hashString(p4), new HashNode(p4));
    
    HashNode * v = c->getPersona(c->hashString(p1), p1); // Buscamos
    HashNode * v2 = c->getPersona(c->hashString(p4), p4);
    HashNode * v3 = c->getPersona(c->hashString(p5), p5);
    
    cout << "Numero: " << (v ? (v->getPersona())->toString() : "No hay registro") << " | " << v << endl;
    cout << "Numero: " << (v2 ? (v2->getPersona())->toString() : "No hay registro") << " | " << v2 << endl;
    cout << "Numero: " << (v3 ? (v3->getPersona())->toString() : "No hay registro") << " | " << v3 << endl;

    delete c;
     */
    return 0;
}
