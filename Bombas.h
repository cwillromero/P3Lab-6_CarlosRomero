#include <string>
#include <iostream>
#include "Item.h"
using namespace std;

#ifndef BOMBAS_H
#define BOMBAS_H

class Bombas{

    private:
        int contador;
    public:

        Bombas();
        Bombas(int);
        int getContador();
        void setContador(int);
	string toString();
    ~Bombas();


};//Fin de la clase


#endif
