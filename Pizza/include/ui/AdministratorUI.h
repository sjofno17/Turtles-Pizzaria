#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include <iostream>

#include "MainMenuUI.h"
#include "AdministratorInfo.h"
#include "ToppingsModel.h"
#include "toppingsService.h"

#include "SizeCrustModels.h"
#include "SizeCrustService.h"
#include "PizzaMenuModel.h"
using namespace std;

class AdministratorUI
{
    public:
        AdministratorUI();
        void administrator_menu();


    private:
        void validate_input(char input);

        ToppingsModel create_toppings();
        toppingsService model_service;

        SizeCrustModels create_size_crust();
        SizeCrustService model_services;
        PizzaMenuModel create_pizza_menu();


};

#endif // ADMINISTRATORUI_H
