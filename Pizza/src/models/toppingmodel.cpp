#include "toppingmodel.h"

ToppingModel::ToppingModel()
{
    //ctor
}

ToppingModel::ToppingModel(string name, double price)
{
    this->name = name;
    this->price = price;
}

string ToppingModel::get_name()
{
    return this->name;
}
double ToppingModel::get_price()
{
    return this->price;
}


istream& operator >> (istream& in, ToppingModel& toppings)
{
    in >> toppings.name >> toppings.price;
    return in;
}
