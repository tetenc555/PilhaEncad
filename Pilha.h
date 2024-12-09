#ifndef PILHA_H__
#define PILHA_H__
#include "No.h"
#include <iostream>
using namespace std;

class Pilha{
    public:
        Pilha();
        ~Pilha();
        int getTopo();
        void empilha (int val);
        void desempilha();
        bool vazia ();

    private:
        No* topo;
};

#endif