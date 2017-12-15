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
    OrderModel orderedpizzas;

    ifstream fin;
    fin.open("orderedpizzas.bin", ios::binary);

    if(fin.is_open())
    {
        int ordercount;
        while(fin.read((char*)(&ordercount),sizeof(int)))
        {
            for(int i = 0; i < ordercount; i++)
            {
            orderedpizzas.read(fin);
            orderVec.push_back(orderedpizzas);
            }
        }
        fin.close();
    }
    return orderVec;
    //throw FileNotFoundException();
    //setja exception hér muna eftir því!!!
}

