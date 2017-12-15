#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include <iostream>


#include "ToppingsService.h"

#include "SizeCrustService.h"

#include "MenuPizzaService.h"

#include "DrinksService.h"

#include "LocationService.h"
using namespace std;

class AdministratorUI
{
    public:
        AdministratorUI();
        void administrator_menu();

    private:
        void validate_input(char input);

        ToppingsService topping_service;
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
