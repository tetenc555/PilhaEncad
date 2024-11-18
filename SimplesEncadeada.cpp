#include <iostream>
using namespace std;

#include "SimplesEncadeada.h"
#include "No.h"

SimplesEncadeada::SimplesEncadeada()
{
    primeiro= nullptr;
}

SimplesEncadeada::~SimplesEncadeada()
{

}

void SimplesEncadeada::insereInicio(int val)
{
    No *p = new No;
    p->setInfo(val);
    p->setProx(primeiro);
    primeiro = p;
}

bool SimplesEncadeada::busca (int val)
{
    No* busca = primeiro;
    while (busca!=nullptr)
    {
        if (busca->getInfo()==val)
            return true;
        busca=busca->getProx();
    }
    return false;
}