#ifndef MENUPIZZASERVICE_H
#define MENUPIZZASERVICE_H

#include "MenuPizzaRepository.h"

#include "InvalidMenuPizzaException.h"

class MenuPizzaService
{
    public:
        MenuPizzaService();
        void add_menupizza(MenuPizzaModel& menupizza_info, vector<MenuPizzaModel>& menuPizzaVec);

    private:
        MenuPizzaRepository menupizza_info_repo;

        bool isValidName(const MenuPizzaModel& menupizza_info);
        bool isValidPizza_Size(const MenuPizzaModel& menupizza_info);
        bool isValidPrice(const MenuPizzaModel& menupizza_info);
};

#endif // MENUPIZZASERVICE_H
