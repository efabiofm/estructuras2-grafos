
#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "HashNode.h"
#include <string>

using namespace std;

class HashTable {
public:
	HashTable();
	~HashTable();
	void addVertice(int indice, HashNode * ptr);
	HashNode * getVertice(int indice, Vertice * pvertice);
	int hashString(Vertice * pvertice);
	int hashing(Vertice * pvertice);
	enum { MAX = 30 };
private:
	HashNode * m_vector[MAX];
};

#endif /* HASHTABLE_H */

