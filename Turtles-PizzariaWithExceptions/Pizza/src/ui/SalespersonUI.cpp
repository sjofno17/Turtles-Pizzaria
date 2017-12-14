#include "SalespersonUI.h"
#include <stdlib.h>

SalespersonUI::SalespersonUI()
{
    //ctor
}

void SalespersonUI::salesperson_menu()
{
    while(true)
    {
        cout << "Salesperson" << endl;
        cout << "***********" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Place order from menu.                  " << endl;
        cout << "2. Make pizza.                             " << endl;
        cout << "2. Add drinks.                             " << endl;
        cout << "3. Pick up or delivery(maybe address?      " << endl;
        cout << "4. Total prize.                            " << endl;
        cout << "5. Back to main menu.                      " << endl;
        cout << "-------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    if(input == '1')
    {

        //Place order from menu + add drinks.
    }
    else if(input == '2')
    {
        //Make pizza + add drinks.
    }
    else if(input == '3')
    {
        //Pick up or delivery(maybe address?
    }
    else if(input == '4')
    {
        //Total prize.
    }
    else if(input == '5')
    {
        system("cls");
        MainMenuUI ui;
        ui.main_menu();
    }
    else
    {
        cout << "Invalid input please try again. " << endl;
    }
}

