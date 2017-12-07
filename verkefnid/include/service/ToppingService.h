#ifndef TOPPINGSERVICE_H
#define TOPPINGSERVICE_H
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class ToppingService
{
    public:
        ToppingService();
        ToppingService(vector<ToppingService>& toppings,char *name, double price);
        void fillTopping(vector<ToppingService>& toppings, char *name, double price);

        friend ostream& operator << (ostream& out, const ToppingService& toppings);
        friend istream& operator >> (istream& in, ToppingService& toppings);

    private:
        vector<ToppingService> toppings;
        char name[30];
        double price;
};

#endif // TOPPINGSERVICE_H
