#include "Toppings.h"

Toppings::Toppings()
{
    char name = ' ';
    double price = 0.0;
}

Toppings::Toppings(char *name, double price)
{
    strcpy(this->name = name);
    this->price = price;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << topping.name << " " << topping.price;

    return out;
}