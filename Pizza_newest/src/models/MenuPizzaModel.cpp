#include "MenuPizzaModel.h"

MenuPizzaModel::MenuPizzaModel(string name, string pizza_size, int price)
{
    this->name = name;
    this->pizza_size = pizza_size;
    this->price = price;
}

string MenuPizzaModel::get_name()
{
    return this->name;
}
string MenuPizzaModel::get_pizza_size()
{
    return this->pizza_size;
}
int MenuPizzaModel::get_price()
{
    return this->price;
}

ostream& operator << (ostream& out, const MenuPizzaModel& menupizza_info)
{
    out << menupizza_info.name << "," << menupizza_info.pizza_size << "," << menupizza_info.price << endl;
    return out;
}
