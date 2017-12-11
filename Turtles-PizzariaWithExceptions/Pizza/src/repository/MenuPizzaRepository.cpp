#include "MenuPizzaRepository.h"

MenuPizzaRepository::MenuPizzaRepository()
{
    //ctor
}

void MenuPizzaRepository::add_menupizza(const MenuPizzaModel& menupizza_info)
{
    ofstream fout;
    fout.open("menupizzaIn.txt", ios::app);

    if(fout.is_open())
    {
        fout << menupizza_info;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
