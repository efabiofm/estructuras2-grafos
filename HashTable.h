/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashTable.h
 * Author: rodrigo
 *
 * Created on July 9, 2017, 9:59 AM
 */

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
    enum {MAX = 30};
private:
    HashNode * m_vector[MAX];
};

#endif /* HASHTABLE_H */

