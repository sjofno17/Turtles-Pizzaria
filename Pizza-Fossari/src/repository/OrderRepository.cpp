#include "OrderRepository.h"

/*OrderRepository::OrderRepository()
{
}*/

void OrderRepository::storePizza(const OrderModel& order)
{
    ofstream fout;
    fout.open("orderedpizzas.bin", ios::binary | ios::app);

    order.write(fout);

    fout.close();
}

vector<OrderModel> OrderRepository::retrievePizza()
{
    vector<OrderModel> orderVec;
    OrderModel order;

    ifstream fin;
    fin.open("orderedpizzas.bin", ios::binary);

    if(fin.is_open())
    {
        int ordercount = 0;
        while(fin.read((char*)(&ordercount),sizeof(int)))
        {
            order.read(fin);
            orderVec.push_back(order);
        }
        fin.close();
    }
    return orderVec;
    //throw FileNotFoundException();
    //setja exception hér muna eftir því!!!
}

