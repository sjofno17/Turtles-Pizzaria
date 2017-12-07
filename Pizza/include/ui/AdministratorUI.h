#ifndef ADMINISTRATORUI_H
#define ADMINISTRATORUI_H
#include <stdlib.h>
#include <iostream>

#include "MainMenuUI.h"
#include "AdministratorInfo.h"
#include "ToppingModel.h"

using namespace std;

class AdministratorUI
{
    public:
        AdministratorUI();
        void administrator_menu();
        friend ostream& operator << (ostream& out, const AdministratorUI admin);



    private:
        void validate_input(char input);
};

#endif // ADMINISTRATORUI_H
