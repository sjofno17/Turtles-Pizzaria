#include "PizzaMenuModel.h"

PizzaMenuModel::PizzaMenuModel()
{
    //ctor
}
PizzaMenuModel::PizzaMenuModel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string PizzaMenuModel::get_name()
{
    return this->name;
}

int PizzaMenuModel::get_price()
{
    return this->price;
}

ostream& operator << (ostream& out, const PizzaMenuModel& pizza_menu_info)
{
    out << pizza_menu_info.name << "," << pizza_menu_info.price << endl;
    return out;
}
