#include "SizeCrustRepository.h"

SizeCrustRepository::SizeCrustRepository()
{
}

void SizeCrustRepository::storeAllSizeCrust(const vector<SizeCrustModels>& sizeCrustVec)
{
    ofstream fout;
    fout.open("sizeCrust.bin", ios::binary|ios::app);

    int sizeCrustCount = sizeCrustVec.size();

    fout.write ((char*)(&sizeCrustCount), sizeof(int));

    for (int i = 0; i < sizeCrustCount; i++)
    {
        sizeCrustVec[i].write(fout);
    }

    fout.close();
}

vector<SizeCrustModels> SizeCrustRepository::retrieveAllSizeCrust()
{
    vector<SizeCrustModels> sizeCrustVec;
    SizeCrustModels sizeCrust;

    ifstream fin;
    fin.open("sizeCrust.bin", ios::binary);


    if (fin.is_open())
    {
        while (!fin.eof())
        {
            int sizeCrustCount;
            fin.read((char*)(&sizeCrustCount),sizeof(int));

            for (int i = 0; i < sizeCrustCount; i++)
            {
                sizeCrust.read(fin);
                sizeCrustVec.push_back(sizeCrust);
            }
        }
        fin.close();
    }
    return sizeCrustVec;
}
