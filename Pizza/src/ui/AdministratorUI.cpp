#include "AdministratorUI.h"
#include <stdlib.h>

AdministratorUI::AdministratorUI()
{
    //ctor
}

void AdministratorUI::administrator_menu()
{
    while(true)
    {
        cout << "Administrator                                        " << endl;
        cout << "*************                                        " << endl;
        cout << "Choose one of the following: (1, 2, 3 or 4)          " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "1. Register different types of pizza (size).         " << endl;
        cout << "2. Register different types of pizza (crust).        " << endl;
        cout << "3. Register toppings.                                " << endl;
        cout << "4. Register specific combinations by name (menu).    " << endl;
        cout << "5. Register other products, e.g. soda & bread sticks." << endl;
        cout << "6. Register locations / pick-up points.              " << endl;
        cout << "7. Back to main menu.                                " << endl;
        cout << "-----------------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);

    }
}

void AdministratorUI::validate_input(char input)
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
