#ifndef MENUPIZZAREPOSITORY_H
#define MENUPIZZAREPOSITORY_H

#include "MenuPizzaModel.h"
#include <fstream>

class MenuPizzaRepository
{
    public:
        MenuPizzaRepository();
        void add_menupizza(const MenuPizzaModel& menupizza_info);

    private:
};

#endif // MENUPIZZAREPOSITORY_H
