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
        cout << "1. Register different types of pizza (size/crust).   " << endl;
        cout << "2. Register toppings.                                " << endl;
        cout << "3. Register specific combinations by name (menu).    " << endl;
        cout << "4. Register other products, e.g. soda & bread sticks." << endl;
        cout << "5. Register locations / pick-up points.              " << endl;
        cout << "6. Back to main menu.                                " << endl;
        cout << "-----------------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);

    }
}

void AdministratorUI::validate_input(char input)
{
    int input_num;
    int input_num2;
    string name;
    double price;
    ///Checking how many sizes and crust to price and what to price them.
    if(input == '1')
    {
        cout << "How many types of sizes?";
        cin >> input_num;
        for (int i = 0; i < input_num; i++)
        {
            cout << "Name of size: ";
            cin >> name;
            cout << "Price of size: ";
            cin >> price;
        }

        cout << "How many crusts?";
        cin >> input_num2;
        for (int i = 0; i < input_num2; i++)
        {
            cout << "Name of crust: ";
            cin >> name;
            cout << "Price of crust: ";
            cin >> price;
        }
    }

    ///Checking how many topping the administrator wants to price.
    else if(input == '2')
    {
        cout << "How many toppings? ";
        char input_num;
        cin >> input;

        double price;

        for(int i = 0; i < input_num; i++)
        {
            cout << "Name of topping: ";
            cin >> name;
            cout << endl;
            cout << "Price: ";
            cin >> price;
    }
    else if(input == '3')
    {
        //menu
    }
    else if(input == '4')
    {
        //other
    }
    else if(input == '5')
    {
        //location
    }
    else if(input == '6')
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
