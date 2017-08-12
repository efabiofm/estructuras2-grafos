#ifndef HASHNODE_H
#define HASHNODE_H
#include "Vertice.h"
//Hay que hacer include del vertice

using namespace std;

class HashNode {
public:
	HashNode();
	HashNode(Vertice * pvertice, HashNode * ptr = 0);
	~HashNode();
	void setVertice(Vertice * pvertice);
	void setSig(HashNode * ptr);
	Vertice * getVertice();
	HashNode * getSig();
private:
	Vertice * vertice;
	HashNode * m_sig;
};

#endif /* HASHNODE_H */

