#ifndef NO_H__
#define NO_H__
#include <iostream>
using namespace std;

class No {
    public:
        No();
        ~No();
        int getInfo();
        No* getProx();
        void setInfo(int val);
        void setProx(No *p);
    private:
        int info;
        No *prox;
};

#endif