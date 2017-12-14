#include "OrderReposotory.h"

OrderReposotory::OrderReposotory()
{
    //ctor
}

OrderReposotory::~OrderReposotory()
{
    //dtor
}

void OrderReposotory::storePizza(const OrderModel& order)
{
    ofstream fout;
    fout.open("orderedpizzas.bin", ios::binary | ios::app);

    order.write(fout);

    fout.close();
}



OrderModel OrderReposotory::retrievePizza()
{
    ifstream fin;
    fin.open("orderedpizzas.bin", ios::binary | ios::app);

    if(fin.is_open())
    {
    OrderModel order;
    order.read(fin);

    fin.close();

    return order;
    }
    throw FileNotFoundException();
    //setja exception hér muna eftir því!!!
}
