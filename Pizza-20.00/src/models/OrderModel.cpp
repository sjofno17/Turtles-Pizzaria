#include "OrderModel.h"

OrderModel::OrderModel()
{
}
void OrderModel::addTopping(ToppingsModel& topping)
{
    toppingsVec.push_back(topping);
}

void OrderModel::addMenuPizza(MenuPizzaModel& menuPizza)
{
    menuPizzaVec.push_back(menuPizza);
}

void OrderModel::addSizeCrust(SizeCrustModels& sizeCrust)
{
    sizeCrustVec.push_back(sizeCrust);
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
    int toppingCount = toppingsVec.size();

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
    for(unsigned int i = 0; i < order.sizeCrustVec.size(); i++)
    {
        out << order.sizeCrustVec[i] << endl;
    }

    out << "Pizza with toppings: " << endl;
    for(unsigned int i = 0; i < order.toppingsVec.size(); i++)
    {
        out << order.toppingsVec[i] << endl;
    }
    return out;
}
