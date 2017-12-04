#ifndef TOPPINGS_H
#define TOPPINGS_H
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

class Toppings
{
    public:
        Toppings();
        Toppings(char* name, double price);

    private:
        char name[30];
        double price;
};

#endif // TOPPINGS_H
