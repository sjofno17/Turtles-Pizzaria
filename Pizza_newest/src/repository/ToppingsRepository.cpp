#include "ToppingsRepository.h"

ToppingsRepository::ToppingsRepository()
{

}

void ToppingsRepository::add_topping_info(const ToppingsModel& topping_info)
{
    ofstream fout;
    fout.open("toppingsIn.txt", ios::app);

    if(fout.is_open())
    {
        fout << topping_info;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
