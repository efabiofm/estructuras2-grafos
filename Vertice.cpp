#include "Vertice.h"



string Vertice::toString()
{
	return "soy " + getProvincia();
}

string Vertice::getProvincia()
{
	return Provincia;
}

string Vertice::getDistrito()
{
	return Distrito;
}

void Vertice::setProvincia(string pprovin)
{
	Provincia = pprovin;
}

void Vertice::setDistrito(string pdist)
{
	Distrito = pdist;
}

int Vertice::getId() {
	return numeroV;
}

Vertice::Vertice(int id, string pprovin, string pdist)
{
	numeroV = id;
	setProvincia(pprovin);
	setDistrito(pdist);
}


