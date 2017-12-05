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
        Toppings(char* name[32], double price);

        friend ostream& operator << (ostream& out, const Toppings& topping);
        friend istream& operator >> (istream& in, const Topping& topping);

    private:
        char name[32];
        double price;
};

#endif // TOPPINGS_H
