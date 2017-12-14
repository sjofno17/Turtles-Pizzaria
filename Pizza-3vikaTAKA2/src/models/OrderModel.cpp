#include <stddef.h>
#include "OrderModel.h"

OrderModel::OrderModel()
{
    //ctor
}

OrderModel::~OrderModel()
{
    //dtor
}
void OrderModel::addTopping(ToppingsModel topping)
{
    toppings.push_back(topping);
}

void OrderModel::write(ofstream& fout) const
{
    int tCount = toppings.size();

    fout.write((char*)(&tCount), sizeof(int));

    for(int i = 0; i < tCount; i++)
    {
        toppings[i].write(fout);
    }
}

void OrderModel::read(ifstream& fin)
{
    int tCount;

    fin.read((char*)(&tCount), sizeof(int));

        ToppingsModel topping;
    for(int i = 0; i < tCount; i++)
    {
        topping.read(fin);
        addTopping(topping);
    }

}

istream& operator >>(istream& in, OrderModel& order)
{
    int toppingCount;
    in >> toppingCount;

    ToppingsModel topping;
    for(unsigned int i = 0; i < order.toppings.size(); i++)
    {
        in >> topping;
        order.addTopping(topping);
    }
    return in;
}

ostream& operator <<(ostream& out, const OrderModel& order)
{
    out << "Pizza with toppings: " << endl;

    for(unsigned int i = 0; i < order.toppings.size(); i++)
    {
        out << order.toppings[i] << endl;
    }
    return out;
}
