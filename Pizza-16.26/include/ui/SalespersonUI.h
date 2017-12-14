#ifndef SALESPERSONUI_H
#define SALESPERSONUI_H
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <MainMenuUI.h>
#include "ToppingsRepository.h"
#include "MenuPizzaRepository.h"
#include "SizeCrustRepository.h"
#include "OrderRepository.h"
#include "OrderService.h"
using namespace std;

class SalespersonUI
{
    public:
        SalespersonUI();
        void salesperson_menu();

    private:
        void validate_input(char input);

        ToppingsRepository topping_repo;
        MenuPizzaRepository menuPizza_repo;
        SizeCrustRepository sizeCrust_repo;

        OrderService order_service;
        OrderRepository order_repo;

        void menupizza_order();
        void toppings_order();
        void sizeCrust_order();
};

#endif // SALESPERSONUI_H
