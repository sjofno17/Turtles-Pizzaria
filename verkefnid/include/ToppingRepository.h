#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include <fstream>
#include <iostream>
#include "Toppings.h"
using namespace std;

class ToppingRepository
{
    public:
        ToppingRepository();
        void storeToppings(const Toppings& topping);
        void retrieveToppings(const Toppings& topping);
    private:
};

#endif // TOPPINGREPOSITORY_H
