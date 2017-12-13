#ifndef SALESPERSONUI_H
#define SALESPERSONUI_H
#include <stdlib.h>
#include <iostream>
#include <MainMenuUI.h>
#include "ToppingsRepository.h"
#include "MenuPizzaRepository.h"
using namespace std;

class SalespersonUI
{
    public:
        SalespersonUI();
        void salesperson_menu();
        void pizzaMenuDrinks();

    private:
        void validate_input(char input);

        ToppingsRepository topping_repo;
        MenuPizzaRepository menuPizza_repo;
};

#endif // SALESPERSONUI_H
