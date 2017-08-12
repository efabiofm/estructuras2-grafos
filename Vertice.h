#ifndef  VERTICE_H
#define VERTICE_H
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
//#include "Arco.h"
using namespace std;

class Vertice {
public:
	int numeroV;
	string Provincia;
	string Distrito;
	//Arco * Asucesor;
	//Arco * Apredecesor;
	Vertice * sig;
	string toString();
	string getProvincia();
	string getDistrito();
	void setProvincia(string pprovin);
	void setDistrito(string pdist);
	int getId();
	Vertice(int id,string pprovin,string pdist);

};

#endif // ! VERTICE_H
