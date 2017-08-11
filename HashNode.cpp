/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "HashNode.h"

HashNode::HashNode() {
    vertice = 0;
    m_sig = 0;
}

HashNode::HashNode(Vertice * pvertice, HashNode* ptr) {
    vertice = pvertice;
    m_sig = ptr;
}

HashNode::~HashNode() {
    if (m_sig != 0) {
        delete m_sig;
    }
}

void HashNode::setVertice(Vertice * pvertice) {
    vertice = pvertice;
}

Vertice * HashNode::getVertice() {
    return vertice;
}

void HashNode::setSig(HashNode* ptr) {
    m_sig = ptr;
}

HashNode* HashNode::getSig() {
    return m_sig;
}
