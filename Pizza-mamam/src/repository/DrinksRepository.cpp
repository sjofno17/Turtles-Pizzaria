#include "DrinksRepository.h"

DrinksRepository::DrinksRepository()
{
    //ctor
}

void DrinksRepository::storeAllDrinks(const vector<DrinksModel>& drinksVec)
{
    ofstream fout;
    fout.open("drinks.bin", ios::binary|ios::app);

    int drinksCount = drinksVec.size();

    fout.write ((char*)(&drinksCount), sizeof(int));

    for (int i = 0; i < drinksCount; i++)
    {
        drinksVec[i].write(fout);
    }

    fout.close();
}

vector<DrinksModel> DrinksRepository::retrieveAllDrinks()
{
    vector<DrinksModel> drinksVec;
    DrinksModel drink;

    ifstream fin;
    fin.open("drinks.bin", ios::binary);

    if (fin.is_open())
    {
        int drinksCount;
        fin.read((char*)(&drinksCount),sizeof(int));

        for (int i = 0; i < drinksCount; i++)
        {
            drink.read(fin);
            drinksVec.push_back(drink);
        }
        fin.close();
    }
    return drinksVec;
}
