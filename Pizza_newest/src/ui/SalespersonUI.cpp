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
        cout << "1. Register an order.                      " << endl;
        cout << "2. Add pizzas (and other stuff) to order.  " << endl;
        cout << "3. Flag order as paid for.                 " << endl;
        cout << "4. Register pick-up or delivery.           " << endl;
        cout << "4. View total prize.                       " << endl;
        cout << "5. Register comments.                      " << endl;
        cout << "6. Flag Pizza for specific location        " << endl;
        cout << "7. Back to main menu.                               " << endl;
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

    }
    else if(input == '2')
    {

    }
    else if(input == '3')
    {

    }
    else if(input == '4')
    {

    }
    else if(input == '5')
    {

    }
    else if(input == '6')
    {

    }
    else if(input == '7')
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

