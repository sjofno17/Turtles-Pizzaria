#ifndef SALESPERSONUI_H
#define SALESPERSONUI_H

#include <iostream>
#include <MainMenuUI.h>
using namespace std;

class SalespersonUI
{
    public:
        SalespersonUI();
        void salesperson_menu();

    private:
        void validate_input(char input);
};

#endif // SALESPERSONUI_H
