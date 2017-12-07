#ifndef TOPPINGMODEL_H
#define TOPPINGMODEL_H
#include <string>
#include "AdministratorUI.h"
#include <iostream>

#include "toppingsService.h"

using namespace std;

class ToppingModel
{
    public:
        ToppingModel();
        ToppingModel(string name, double price);
        string get_name();
        double get_price();


    private:
        string name;
        double price;
};

#endif // TOPPINGMODEL_H
