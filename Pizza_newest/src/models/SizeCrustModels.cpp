#include "SizeCrustModels.h"

SizeCrustModels::SizeCrustModels(string name, string pizza_size, int price)
{
    this->name = name;
    this->pizza_size = pizza_size;
    this->price = price;
}

string SizeCrustModels::get_name()
{
    return this->name;
}
string SizeCrustModels::get_pizza_size()
{
    return this->pizza_size;
}
int SizeCrustModels::get_price()
{
    return this->price;
}

ostream& operator << (ostream& out, const SizeCrustModels& sizecrust_info)
{
    out << sizecrust_info.name << "," << sizecrust_info.pizza_size << "," << sizecrust_info.price << endl;
    return out;
}
