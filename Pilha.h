#ifndef PILHA_H__
#define PILHA_H__
#include "No.h"
#include <iostream>
using namespace std;

class Pilha{
    public:
        Pilha();
        ~Pilha();
        void insereInicio(int val);
        bool busca(int val);
    private:
        No* primeiro;
};

#endif