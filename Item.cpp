#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Item::Item(int tipo){
    this->tipo=tipo;
}//Fin constructor

//Constructor2
Item::Item(){

}//Fin constructor sencillo

int Item::getTipo(){
    return tipo;
}

void Item:: setTipo(int tipo){

    this->tipo=tipo;

}

Item::~Item(){
}
