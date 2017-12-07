#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include <iostream>

#include "MainMenuUI.h"
#include "AdministratorInfo.h"
#include "ToppingModel.h"
#include "toppingsService.h"
#include "ToppingsRepository.h"

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
