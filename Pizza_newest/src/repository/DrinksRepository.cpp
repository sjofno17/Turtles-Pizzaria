#include "DrinksRepository.h"
#include "DrinksModel.h"
#include <fstream>

using namespace std;

DrinksRepository::DrinksRepository()
{
    //ctor
}

void DrinksRepository::add_drinks(const DrinksModel& drinks_info)
{
    ofstream fout;
    fout.open("drinksIn.txt", ios::app);

    if(fout.is_open())
    {
        fout << drinks_info;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
