#ifndef SIMPLESENCADEADA_H__
#define SIMPLESENCADEADA_H__
#include <iostream>
using namespace std;

class SimplesEncadeada{
    public:
        SimplesEncadeada();
        ~SimplesEncadeada();
        void insereInicio(int val);
        bool busca(int val);
    private:
        No* primeiro;
};

#endif