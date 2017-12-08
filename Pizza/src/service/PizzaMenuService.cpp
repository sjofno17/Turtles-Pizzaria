#include "PizzaMenuService.h"

PizzaMenuService::PizzaMenuService()
{
    //ctor
}

void PizzaMenuService::add_pizzamenu_info(const PizzaMenuModel& pizzamenu_info)
{
    pizzamenu_info_repo.add_pizzamenu_info(pizzamenu_info);
    cout << pizzamenu_info << endl;
}
