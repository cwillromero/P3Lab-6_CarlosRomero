#include <string>
#include <iostream>
#include "Bombas.h"
using namespace std;

#ifndef V_H
#define V_H
class V:public Bombas{
    private:
        string simbolo="V";
    public:
        V();
        V(string);
        string getSimbolo();
        void setSimbolo(string);
	string toString();
    ~V();
};


#endif
