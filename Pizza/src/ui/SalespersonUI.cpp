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
        cout << "5. View total price.                       " << endl;
        cout << "6. Register comments.                      " << endl;
        cout << "7. Flag Pizza for specific location.       " << endl;
        cout << "8. Back to main menu.                      " << endl;
        cout << "-------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    ///
    if(input == '1')
    {

    }

    ///The salesperson can add to the order.
    else if(input == '2')
    {

    }

    ///is the pizza paid or unpaid.
    else if(input == '3')
    {

    }

    ///Pickup or delivery.
    else if(input == '4')
    {

    }

    ///View total price.
    else if(input == '5')
    {

    }

    ///are there any comments?
    else if(input == '6')
    {

    }

    ///specific location?
    else if (input == '7')
    {

    }

    ///back to main menu
    else if(input == '8')
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

