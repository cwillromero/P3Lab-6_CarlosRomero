#include "Espina.h"
#include <iostream>
#include <string>

using namespace std;

Espina::Espina(int cantidad){
    this->simbolo=simbolo;
}

Espina::Espina(){

}

string Espina::getSimbolo(){
    return simbolo;
}

void Espina:: setSimbolo(string simbolo){

    this->simbolo=simbolo;

}

int Espina::getCantidad(){
    return cantidad;
}

void Espina:: setCantidad(int cantidad){

    this->cantidad=cantidad;

}

Espina::~Espina(){
}

string Espina::toString(){
	return simbolo;
}
