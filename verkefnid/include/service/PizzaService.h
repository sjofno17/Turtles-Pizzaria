#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class PizzaService
{
    public:
        PizzaService();
        PizzaService(vector<PizzaService>& pizzas,char *name, double price);
        void menu_pizza(vector<PizzaService>& pizzas, char *name, double price);

        friend ostream& operator << (ostream& out, const PizzaService& pizzas);
        friend istream& operator >> (istream& in, PizzaService& pizzas);

    private:
        vector<PizzaService> pizzas;
        char name[30];
        double price;
};
#endif //PIZZASERVICE_H
