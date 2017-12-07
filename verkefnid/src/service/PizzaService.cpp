#include "PizzaService.h"

PizzaService::PizzaService()
{
    vector<PizzaService> pizzas;
    char name = ' ';
    double price = 0.0;
}

PizzaService::PizzaService(vector<PizzaService>& pizzas, char *name, double price)
{
    this->pizzas = pizzas;
    this->name[30] = name[30];
    this->price = price;
}

void PizzaService::menu_pizza(vector<PizzaService>& pizzas, char *name, double price)
{
    cout << "How many pizzas would you like to price?";
    //cin >> pizzas;

    for (int i = 0; i < pizzas.size(); i++)
    {
       // cin >>
    }
}

istream& operator >> (istream& in, PizzaService& pizzas)
{
    cout << "How many pizzas would you like to price?";
    in >> pizzas;

    return in;
}

ostream& operator << (ostream& out, const PizzaService& pizzas)
{
    out << pizzas.name << " " << pizzas.price;

    return out;
}
