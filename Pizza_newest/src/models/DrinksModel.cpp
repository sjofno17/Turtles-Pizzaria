#include "DrinksModel.h"

DrinksModel::DrinksModel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string DrinksModel::get_name()
{
    return this->name;
}
int DrinksModel::get_price()
{
    return this->price;
}


ostream& operator << (ostream& out, const DrinksModel& drinks_info)
{
    out << drinks_info.name << "," << drinks_info.price << endl;
    return out;
}
