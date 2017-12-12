#ifndef MENUPIZZAREPOSITORY_H
#define MENUPIZZAREPOSITORY_H

#include "MenuPizzaModel.h"
#include <fstream>

using namespace std;

class MenuPizzaRepository
{
    public:
        MenuPizzaRepository();
        void storeAllMenuPizza(const vector<MenuPizzaModel>& menuPizzaVec);
        vector<MenuPizzaModel> retrieveAllMenuPizza();

    private:
};

#endif // MENUPIZZAREPOSITORY_H
