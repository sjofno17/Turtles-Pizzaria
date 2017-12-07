#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include "MainMenuUI.h"
#include <iostream>
using namespace std;

class AdministratorUI
{
    public:
        AdministratorUI();
        void administrator_menu();


    private:
        void validate_input(char input);
};

#endif // ADMINISTRATORUI_H
