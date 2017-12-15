#include "OrderModel.h"

OrderModel::OrderModel()
{
}

void OrderModel::addMenuPizza(MenuPizzaModel& menuPizza)
{
    menuPizzaVec.push_back(menuPizza);
}

void OrderModel::write(ofstream& fout) const
{
    int menuPizzaCount = menuPizzaVec.size();

    fout.write((char*)(&menuPizzaCount), sizeof(int));

    for(int i = 0; i < menuPizzaCount; i++)
    {
        menuPizzaVec[i].write(fout);
    }
}

void OrderModel::read(ifstream& fin)
{
    int menuPizzaCount = menuPizzaVec.size();

    fin.read((char*)(&menuPizzaCount), sizeof(int));

    MenuPizzaModel order;
    for(int i = 0; i < menuPizzaCount; i++)
    {
        order.read(fin);
        addMenuPizza(order);
    }
}

istream& operator >>(istream& in, OrderModel& order)
{
    int pizzaCount;
    in >> pizzaCount;

    MenuPizzaModel menuPizza;
    for(unsigned int i = 0; i < order.menuPizzaVec.size(); i++)
    {
        in >> order;
        order.addMenuPizza(menuPizza);
    }
    return in;
}

ostream& operator <<(ostream& out, const OrderModel& order)
{
    for(unsigned int i = 0; i < order.menuPizzaVec.size(); i++)
    {
        out << order.menuPizzaVec[i] << endl;
    }
    return out;
}
