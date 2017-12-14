#ifndef MAINMENUUI_H
#define MAINMENUUI_H
#include "AdministratorUI.h"
#include "SalespersonUI.h"
#include "BakerUI.h"
#include "EmployeeUI.h"
#include <stdlib.h>
using namespace std;

class MainMenuUI
{
    public:
        MainMenuUI();
        void main_menu();


    private:
        void validate_input(char input);


};

#endif // MAINMENUUI_H
