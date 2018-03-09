#include <string>
#include <iostream>

using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item{
    private:
        int tipo;
    public:
        Item();
        Item(int);

        int getTipo();
        void setTipo(int);

    ~Item();

};

#endif
