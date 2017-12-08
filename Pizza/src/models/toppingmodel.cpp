#include "toppingmodel.h"

toppingmodel::toppingmodel()
{
    //ctor
}

toppingmodel::toppingmodel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string toppingmodel::get_name()
{
    return this->name;
}
int toppingmodel::get_price()
{
    return this->price;
}


ostream& operator << (ostream& out, const toppingmodel& topping_info)
{
    out << topping_info.name << ", " << topping_info.price << endl;
    return out;
}
