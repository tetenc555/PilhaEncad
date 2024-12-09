#include <iostream>
using namespace std;

#include "Pilha.h"
#include "No.h"

//Pilha::Pilha()
//{
//    primeiro= nullptr;
//}
//
//Pilha::~Pilha()
//{
//    No *p = primeiro;
//    while (p!= nullptr)
//    {
//        No *t = p->getProx();
//        delete p;
//        p = t;
//    }
//}
//
//void Pilha::insereInicio(int val)
//{
//    No *p = new No;
//    p->setInfo(val);
//    p->setProx(primeiro);
//    primeiro = p;
//}
//
//bool Pilha::busca (int val)
//{
//    No* busca = primeiro;
//    while (busca!=nullptr)
//    {
//        if (busca->getInfo()==val)
//            return true;
//        busca=busca->getProx();
//    }
//    return false;
//}

Pilha::Pilha()
{
    topo = nullptr;
}

Pilha::~Pilha()
{
    No* p = topo;
    while(topo != nullptr)
    {
        topo = p ->getProx();
        delete p;
        p= topo;
    }
}

int Pilha::getTopo()
{
    if (this->vazia())
        return NULL;
    return this->topo->getInfo();
}

void Pilha::empilha(int val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(this->topo);
    this->topo = p;
}

void Pilha::desempilha()
{
    if (this->vazia())
        return;
    No* p = this->topo;
    this->topo = p->getProx();
    delete p;

}

bool Pilha::vazia()
{
    return (this->topo == nullptr);
}