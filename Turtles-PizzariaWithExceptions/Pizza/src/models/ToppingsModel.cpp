#include "ToppingsModel.h"

ToppingsModel::ToppingsModel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string ToppingsModel::get_name() const
{
    return this->name;
}
int ToppingsModel::get_price() const
{
    return this->price;
}


ostream& operator << (ostream& out, const ToppingsModel& topping_info)
{
    out << topping_info.name << "," << topping_info.price << endl;
    return out;
}
