#include <string>
#include <iostream>
#include "Bombas.h"

using namespace std;

#ifndef NORMAL_H
#define NORMAL_H


//Inicio clase
class Normal: public Bombas{

    private:
        int alcance;
	string simbolo = "0";
    public:
        Normal();
        Normal(int);
        int getAlcance();
        void setAlcance(int);
	string toString();
    ~Normal();


};


#endif
