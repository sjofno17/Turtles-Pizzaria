#include "PizzaMenuRepository.h"

PizzaMenuRepository::PizzaMenuRepository()
{
    //ctor
}

void PizzaMenuRepository::add_pizzamenu_info(const PizzaMenuModel& pizzamenu_info)
{
    ofstream fout;
    fout.open("pizzamenuIn", ios::app);

    if(fout.is_open())
    {
        fout << pizzamenu_info;
        fout.close();
    }
    else
    {
        cout << "Invalid" << endl;
    }
}
