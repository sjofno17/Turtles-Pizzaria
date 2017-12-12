#include "MenuPizzaService.h"

MenuPizzaService::MenuPizzaService()
{
    //ctor
}
void MenuPizzaService::add_menupizza(const MenuPizzaModel& menupizza_info)
{
    if(isValidName(menupizza_info) && isValidPizza_Size(menupizza_info) && isValidPrice(menupizza_info))
    {
        add_menupizza(menupizza_info);
        cout << menupizza_info << endl;
    }
}
bool MenuPizzaService::isValidName(const MenuPizzaModel& menupizza_info)
{
    string name = menupizza_info.get_name();

    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (!isalpha(name[i]) || name.length() > 15 || name.length() < 2)
        {
            throw (InvalidMenuPizzaException("The name of menu pizza is not valid!"));
        }
    }
    return true;
}
bool MenuPizzaService::isValidPizza_Size(const MenuPizzaModel& menupizza_info)
{
    string pizza_size = menupizza_info.get_pizza_size();

        if (pizza_size != "small" && pizza_size != "medium" && pizza_size != "large")
        {
            throw (InvalidMenuPizzaException("The name of size is not valid! Please write small, medium or large."));
        }
    return true;
}
bool MenuPizzaService::isValidPrice(const MenuPizzaModel& menupizza_info)
{
    int price = menupizza_info.get_price();

    if (price < 0 || price > 1000000)
    {
        throw (InvalidMenuPizzaException("Price is not a valid input!"));
    }
    return true;
}
