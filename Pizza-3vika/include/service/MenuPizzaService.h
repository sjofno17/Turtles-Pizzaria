#ifndef MENUPIZZASERVICE_H
#define MENUPIZZASERVICE_H

#include "MenuPizzaModel.h"
#include "MenuPizzaRepository.h"

#include "InvalidMenuPizzaException.h"

class MenuPizzaService
{
    public:
        MenuPizzaService();
        void add_menupizza(const MenuPizzaModel& menupizza_info);

    private:
        MenuPizzaRepository menupizza_info_repo;

        bool isValidName(const MenuPizzaModel& menupizza_info);
        bool isValidPizza_Size(const MenuPizzaModel& menupizza_info);
        bool isValidPrice(const MenuPizzaModel& menupizza_info);
};

#endif // MENUPIZZASERVICE_H
