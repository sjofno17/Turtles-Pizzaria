#ifndef MENUPIZZASERVICE_H
#define MENUPIZZASERVICE_H

#include "MenuPizzaModel.h"
#include "MenuPizzaRepository.h"

class MenuPizzaService
{
    public:
        MenuPizzaService();
        void add_menupizza(const MenuPizzaModel& menupizza_info);

    private:
        MenuPizzaRepository menupizza_info_repo;
};

#endif // MENUPIZZASERVICE_H
