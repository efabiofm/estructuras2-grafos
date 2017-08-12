//#include <QApplication>
#include <iostream>
#include "grafo.h"
#include "Vertice.h"
#include "HashNode.h"
#include "HashTable.h"

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

	cout << endl;
	HashTable * Htable = new HashTable;

	//EDIT 10AGO2017: ESTO SE CAMBIARIA POR LOS VERTICES EN CASO DE QUERER HACER PRUEBAS
	Vertice * p1 = new Vertice(1, "San Jose", "123456789");
	Vertice * p2 = new Vertice(2, "Cartago", "a1b2c3d4e");
	Vertice * p3 = new Vertice(3, "Heredia", "5f6g7h8i9");
	Vertice * p4 = new Vertice(4, "Alajuela", "0o9i8u7y6");
	Vertice * p5 = new Vertice(5, "Limon", "1qwe2ee39"); //no se ingresa

	Htable->addVertice(Htable->hashing(p1), new HashNode(p1));
	Htable->addVertice(Htable->hashing(p2), new HashNode(p2));
	Htable->addVertice(Htable->hashing(p3), new HashNode(p3));
	Htable->addVertice(Htable->hashing(p4), new HashNode(p4));

	HashNode * v = Htable->getVertice(Htable->hashing(p1), p1); // Buscamos
	HashNode * v2 = Htable->getVertice(Htable->hashing(p4), p4);
	HashNode * v3 = Htable->getVertice(Htable->hashing(p3), p3);

	cout << "Provincia: " << (v ? (v->getVertice())->toString() : "No hay registro") << " | " << v << endl;
	cout << "Provincia: " << (v2 ? (v2->getVertice())->toString() : "No hay registro") << " | " << v2 << endl;
	cout << "Provincia: " << (v3 ? (v3->getVertice())->toString() : "No hay registro") << " | " << v3 << endl;

	delete Htable;
	cout << "Press any key to continue...";
	cin.get();
	return 0;
}
