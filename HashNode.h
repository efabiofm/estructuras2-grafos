/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashNode.h
 * Author: rodrigo
 *
 * Created on July 9, 2017, 9:52 AM
 */

#ifndef HASHNODE_H
#define HASHNODE_H
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

