#include "OrderRepository.h"

OrderRepository::OrderRepository()
{
}

void OrderRepository::storePizza(const OrderModel& order)
{
    ofstream fout;
    fout.open("orderedpizzas.bin", ios::binary | ios::app);

    order.write(fout);

    fout.close();
}

OrderModel OrderRepository::retrievePizza()
{
    ifstream fin;
    fin.open("orderedpizzas.bin", ios::binary);

    OrderModel order;
    if(fin.is_open())
    {
    order.read(fin);

    fin.close();
    }
    return order;
    //throw FileNotFoundException();
    //setja exception hér muna eftir því!!!
}
