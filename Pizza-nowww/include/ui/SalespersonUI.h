#ifndef SALESPERSONUI_H
#define SALESPERSONUI_H
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "ToppingsRepository.h"
#include "MenuPizzaRepository.h"
#include "SizeCrustRepository.h"
#include "OrderService.h"
using namespace std;

class SalespersonUI
{
public:
    SalespersonUI();
    void salesperson_menu();

private:
    void validate_input(char input);

    MenuPizzaRepository menuPizza_repo;

    OrderRepository order_repo;
    OrderService order_service;

    void  menupizza_order();
};

#endif // SALESPERSONUI_H
