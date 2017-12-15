#include "ToppingsRepository.h"

ToppingsRepository::ToppingsRepository()
{

}

void ToppingsRepository::storeAllToppings(const vector<ToppingsModel>& toppingVec)
{
    ofstream fout;
    fout.open("toppings.bin", ios::binary|ios::app);

    int toppingcount = toppingVec.size();

    fout.write ((char*)(&toppingcount), sizeof(int));

    for (int i = 0; i < toppingcount; i++)
    {
        toppingVec[i].write(fout);
    }

    fout.close();
}

vector<ToppingsModel> ToppingsRepository::retrieveAllToppings()
{
    vector<ToppingsModel> toppingVec;
    ToppingsModel topping;

    ifstream fin;
    fin.open("toppings.bin", ios::binary);

    if (fin.is_open())
    {
        int toppingcount = 0;
        while(fin.read((char*)(&toppingcount),sizeof(int)))
        {
            //int toppingcount = 0;
            //fin.read((char*)(&toppingcount),sizeof(int));

            for (int i = 0; i < toppingcount; i++)
            {
                topping.read(fin);
                toppingVec.push_back(topping);
            }
        }
        fin.close();
    }
    return toppingVec;
}
