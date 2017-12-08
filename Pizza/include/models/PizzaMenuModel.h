#ifndef PIZZAMENUMODEL_H
#define PIZZAMENUMODEL_H
#include <iostream>
#include <string>
using namespace std;

class PizzaMenuModel
{
    public:
        PizzaMenuModel();
        PizzaMenuModel(string name, int price);
        string get_name();
        int get_price();
        friend ostream& operator << (ostream& out, const PizzaMenuModel& pizza_menu_info);

    private:
        string name;
        double price;
};

#endif // PIZZAMENUMODEL_H
