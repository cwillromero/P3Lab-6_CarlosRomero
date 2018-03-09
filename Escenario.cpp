#include "Escenario.h"
#include <iostream>
#include <string>

using namespace std;

Escenario::Escenario(string nombre){
    this->nombre = nombre;
}

Escenario:: ~Escenario(){
}

Escenario::setNombre(string nombre){
    this->nombre = nombre;
}
