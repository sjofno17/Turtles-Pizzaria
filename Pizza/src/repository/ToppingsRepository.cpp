#include "ToppingsRepository.h"

ToppingsRepository::ToppingsRepository()
{

}



void ToppingsRepository::add_info(const toppingsService& topping)
{
    ofstream fout;
    fout.open("toppingsIn", ios::app);

    if(fout.is_open())
    {
        fout << admin;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
