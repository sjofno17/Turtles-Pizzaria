#include "MenuPizzaService.h"

MenuPizzaService::MenuPizzaService()
{
    //ctor
}

void MenuPizzaService::add_menupizza(const MenuPizzaModel& menupizza_info)
{
    menupizza_info_repo.add_menupizza(menupizza_info);
    cout << menupizza_info << endl;
}
