#ifndef TOPPINGMODEL_H
#define TOPPINGMODEL_H
#include <string>
#include "AdministratorUI.h"
#include <iostream>

using namespace std;

class toppingmodel
{
    public:
        toppingmodel();
        toppingmodel(string name, int price);
        string get_name();
        int get_price();

        friend ostream& operator << (ostream& out, const toppingmodel& topping_info);


    private:
        string name;
        int price;
};

#endif // TOPPINGMODEL_H
