#include "ToppingService.h"

ToppingService::ToppingService()
{
    vector<ToppingService> toppings;
    char name = ' ';
    double price = 0.0;
}

ToppingService::ToppingService(vector<ToppingService>& toppings, char *name, double price)
{
    this->toppings = toppings;
    this->name[30] = name[30];
    this->price = price;
}

void ToppingService::fill_topping(vector<ToppingService>& toppings, char *name, double price)
{
    cout << "How many toppings would you like to price?";
    //cin >> toppings;

    for (int i = 0; i < toppings.size(); i++)
    {
       // cin >>
    }
}

istream& operator >> (istream& in, ToppingService& toppings)
{
    cout << "How many toppings would you like to price?";
    in >> toppings;

    return in;
}

ostream& operator << (ostream& out, const ToppingService& toppings)
{
    out << toppings.name << " " << toppings.price;

    return out;
}
