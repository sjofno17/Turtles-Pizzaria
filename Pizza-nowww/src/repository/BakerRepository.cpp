#include "BakerRepository.h"

BakerRepository::BakerRepository()
{
}

void BakerRepository::storeOrder(const BakerModel& baker)
{
    ofstream fout;
    fout.open("readyorders.bin", ios::binary | ios::app);

    baker.write(fout);

    fout.close();
}

vector<BakerModel> BakerRepository::retrieveOrder()
{
    vector<BakerModel> bakerVec;
    BakerModel order;

    ifstream fin;
    fin.open("readyorders.bin", ios::binary);

    if(fin.is_open())
    {
        int ordercount = 0;
        while(fin.read((char*)(&ordercount),sizeof(int)))
        {
            for(int i = 0; i < ordercount; i++)
            {
                order.read(fin);
                bakerVec.push_back(order);
            }
        }
        fin.close();
    }
    return bakerVec;

    //throw FileNotFoundException();
    //setja exception hér muna eftir því!!!
}
