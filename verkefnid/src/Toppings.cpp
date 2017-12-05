#include "Toppings.h"

Toppings::Toppings()
{
    char name = '\0';
    double price = 0.0;
}

Toppings::Toppings(char *name, double price)
{
    strcpy(this->name, name);
    this->price = price;
}

ostream& operator << (ostream& out, const Toppings& topping)
{
    out << "Pizza with toppings: " << endl;

    for(int i = 0; i < admin.toppingCount; i++){
        out << admin.toppings[i] << endl;
    }

    return out;
}

istream& operator >> (istream& in, const Toppings& topping){

    cout << "Name: ";
    in >> topping.name;

    cout << "Price: ";
    in >> topping.price;

    return in;
}
