#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include <iostream>

#include "MainMenuUI.h"
#include "AdministratorUI.h"

#include "ToppingsModel.h"
#include "toppingsService.h"
#include "ToppingsRepository.h"

#include "SizeCrustModels.h"
#include "SizeCrustService.h"

#include "MenuPizzaModel.h"
#include "MenuPizzaService.h"

#include "DrinksModel.h"
#include "DrinksService.h"

#include "LocationModel.h"
#include "LocationService.h"
using namespace std;

class AdministratorUI
{
    public:
        AdministratorUI();
        void administrator_menu();

    private:
        void validate_input(char input);

        toppingsService topping_service;
        SizeCrustService sizecrust_service;
        MenuPizzaService menupizza_service;
        DrinksService drinks_service;
        LocationService location_service;

        ToppingsModel create_toppings();
        SizeCrustModels create_size_crust();
        MenuPizzaModel create_menupizza();
        DrinksModel create_drinks();
        LocationModel create_location();

};

#endif // ADMINISTRATORUI_H
