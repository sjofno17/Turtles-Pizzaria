#include "BakerModel.h"

BakerModel::BakerModel()
{
}

void BakerModel::addBaker(OrderModel& order)
{
    orderVec.push_back(order);
}

void BakerModel::write(ofstream& fout) const
{
    int orderCount = orderVec.size();

    fout.write((char*)(&orderCount), sizeof(int));

    for(int i = 0; i < orderCount; i++)
    {
        orderVec[i].write(fout);
    }
}

void BakerModel::read(ifstream& fin)
{
    int orderCount = orderVec.size();

    fin.read((char*)(&orderCount), sizeof(int));

    OrderModel order;
    for(int i = 0; i < orderCount; i++)
    {
        order.read(fin);
        addBaker(order);
    }
}

istream& operator >>(istream& in, BakerModel& baker)
{
    return in;
}

ostream& operator <<(ostream& out, const BakerModel& baker)
{
    return out;
}
