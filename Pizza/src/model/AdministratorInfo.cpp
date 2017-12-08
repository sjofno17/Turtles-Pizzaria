#include "administratorinfo.h"

AdministratorInfo::AdministratorInfo()
{
    //ctor
}


AdministratorInfo::AdministratorInfo(string name, string pizza_size, double price)

{
    this->name = name;
    this->pizza_size = pizza_size;
    this->price = price;
}


string AdministratorInfo::get_name()
{
    return this->name;
}
string AdministratorInfo::get_pizza_size()
{
    return this->pizza_size;
}
double AdministratorInfo::get_price()
{
    return this->price;
}
