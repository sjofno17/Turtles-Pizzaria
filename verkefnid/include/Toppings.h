#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <iostream>
#include <string.h>
#include "Administrator.h"
using namespace std;

class Toppings
{
    public:
        Toppings();
        Toppings(char* name, double price);

        friend ostream& operator << (ostream& out, const Toppings& topping);

    private:
        char name[30];
        double price;
};

#endif // TOPPINGS_H
