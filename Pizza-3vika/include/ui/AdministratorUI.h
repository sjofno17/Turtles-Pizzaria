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

        ToppingsRepository topping_repo;
        SizeCrustRepository sizeCrust_repo;
        MenuPizzaRepository menuPizza_repo;
        DrinksRepository drinks_repo;
        LocationRepository location_repo;

        /*ToppingsModel create_toppings();
        toppingsService topping_service;

        SizeCrustModels create_size_crust();
        SizeCrustService sizecrust_service;

        MenuPizzaModel create_menupizza();
        MenuPizzaService menupizza_service;

        DrinksModel create_drinks();
        DrinksService drinks_service;

        LocationModel create_location();
        LocationService location_service;*/

};

#endif // ADMINISTRATORUI_H
