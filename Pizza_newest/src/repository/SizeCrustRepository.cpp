#include "SizeCrustRepository.h"

SizeCrustRepository::SizeCrustRepository()
{
    //ctor
}

void SizeCrustRepository::add_size_crust(const SizeCrustModels& sizecrust_info)
{
    ofstream fout;
    fout.open("sizecrustIn.txt", ios::app);

    if(fout.is_open())
    {
        fout << sizecrust_info;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
