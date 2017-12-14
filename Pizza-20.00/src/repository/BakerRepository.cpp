#include "BakerRepository.h"

BakerRepository::BakerRepository()
{
}

/*void BakerRepository::storeOrder(const BakerModel& baker)
{
    ofstream fout;
    fout.open("orderedpizzas.bin", ios::binary | ios::app);

    order.write(fout);

    fout.close();
}

BakerModel BakerRepository::retrievePizza()
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
}*/
