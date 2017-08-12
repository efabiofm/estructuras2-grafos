#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include "Vertice.h"
using namespace std;

//class Grafo {
	// agregar veritice solo recibe etiqueta
	//agregar arco (costo origen y destino)

//};

class Grafo {
public:
	void dijkstra(void);
	void mascorto(void);
	void caminos(int i, int j);
	Grafo(void); //inicializa la matriz de costos y los vectores temporales
	int D[8]; //aqui van quedando los costos minimos
private:
	int vertices[8]; //se guardan los vertices
	int p[8][8]; //se utiliza para sacar los caminos
	int costos[8][8]; //matriz donde estan los costos de ir de un vertice a otro
	int vertices2[8]; //aqui van quedando los vertices visitados
	int w; //contiene el vertice visitado actualmente
	int buscaminimo(void);
	int min(int x, int y);
	Vertice * getVertice(int id);
};