#include "OrderModel.h"

OrderModel::OrderModel()
{
}
void OrderModel::addTopping(ToppingsModel topping)
{
    toppingsVec.push_back(topping);
}

void OrderModel::write(ofstream& fout) const
{
    int toppingCount = toppingsVec.size();

    fout.write((char*)(&toppingCount), sizeof(int));

    for(int i = 0; i < toppingCount; i++)
    {
        toppingsVec[i].write(fout);
    }
}

void OrderModel::read(ifstream& fin)
{
    int toppingCount;

    fin.read((char*)(&toppingCount), sizeof(int));

    ToppingsModel topping;
    for(int i = 0; i < toppingCount; i++)
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
    for(unsigned int i = 0; i < order.toppingsVec.size(); i++)
    {
        in >> topping;
        order.addTopping(topping);
    }
    return in;
}

ostream& operator <<(ostream& out, const OrderModel& order)
{
    out << "Crust and size of pizza: " << endl;
    out << order.sizeCrustVec.size() << endl;
    out << "Pizza with toppings: " << endl;

    for(unsigned int i = 0; i < order.toppingsVec.size(); i++)
    {
        out << order.toppingsVec[i] << endl;
    }
    return out;
}
