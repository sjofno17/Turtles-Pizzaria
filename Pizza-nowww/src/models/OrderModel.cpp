#include "OrderModel.h"

OrderModel::OrderModel()
{
}

void OrderModel::addOrder(MenuPizzaModel& menuPizza)
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
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;

    int stringlenght2;
    fin.read((char*)(&stringlenght2), sizeof(int));
    char *str2 = new char [stringlenght2];

    fin.read(str2, stringlenght2);
    pizza_size = str2;

    fin.read((char*)(&price), sizeof(double));
    delete[] str;
    delete[] str2;
}

istream& operator >>(istream& in, OrderModel& order)
{
    int pizzaCount;
    in >> pizzaCount;

    MenuPizzaModel menuPizza;
    for(unsigned int i = 0; i < order.menuPizzaVec.size(); i++)
    {
        in >> order;
        order.addOrder(menuPizza);
    }
    return in;
}

ostream& operator <<(ostream& out, const OrderModel& order)
{
    out << order.name << "\t" << order.pizza_size << "\t" << order.price << endl;
    return out;
}
