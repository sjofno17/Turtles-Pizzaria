#ifndef TOPPINGREPOSITORY_H
#define TOPPINGREPOSITORY_H
#include <iostream>
#include <fstream>
#include "ToppingService.h"
using namespace std;

class ToppingRepository
{
    public:
        ToppingRepository();
        void storeToppings(const ToppingService& topping);
        void retrieveToppings();

    private:
};

#endif // TOPPINGREPOSITORY_H
