/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "HashTable.h"
#include "HashNode.h"

HashTable::HashTable() {
    for (int i = 0; i < MAX; i++) {
        m_vector[i] = 0;
    }
}

HashTable::~HashTable() {
    for (int i = 0; i < MAX; i++)        
        if (m_vector[i] != 0)
            delete m_vector[i];
}

void HashTable::addVertice(int indice, HashNode* ptr) {
    if (m_vector[indice] == 0) {
        m_vector[indice] = ptr;
    } else {
        HashNode * aux = m_vector[indice];
        while (aux->getSig() != 0) {
            aux = aux->getSig();
        }
        aux->setSig(ptr);
    }
}

HashNode * HashTable::getVertice(int indice, Vertice * pvertice) {
    HashNode * aux = m_vector[indice];
    while (aux != 0 && ((aux->getVertice())->getProvincia() + (aux->getVertice())->getDistrito()) 
            != (pvertice->getProvincia() + pvertice->getDistrito())) {
        aux = aux->getSig();
    }
    return aux;
}

//-------- FUNCIONES HASH

int HashTable::hashString(Vertice * pvertice){
    string data = (pvertice->getProvincia() + pvertice->getDistrito());
    int sum = 0;
    for (int k = 0; k < data.length(); k++)
        sum = sum + int(data[k]);
    return sum % MAX;
}
