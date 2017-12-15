#include "BakerModel.h"

BakerModel::BakerModel()
{
}

void BakerModel::write(ofstream& fout) const
{
    /*int toppingCount = toppingsVec.size();

    fout.write((char*)(&toppingCount), sizeof(int));

    for(int i = 0; i < toppingCount; i++)
    {
        toppingsVec[i].write(fout);
    }*/
}

void BakerModel::read(ifstream& fin)
{
    /*int toppingCount = orderVec.size();

    fin.read((char*)(&toppingCount), sizeof(int));

    OrderModel order;
    for(int i = 0; i < toppingCount; i++)
    {
        order.read(fin);
        addTopping(order);
    }*/
}

istream& operator >>(istream& in, BakerModel& baker)
{
    return in;
}

ostream& operator <<(ostream& out, const BakerModel& baker)
{

    return out;
}
