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
        cout << "1. Register toppings.                                " << endl;
        cout << "2. Register different types of pizza (size/crust).   " << endl;
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
    if(input == '1')
    {
        //register toppings
        model_service.add_topping_info(create_toppings());
    }
    else if(input == '2')
    {
        //Register different types of pizza (size/crust).
        model_services.add_size_crust(create_size_crust());
    }
    else if(input == '3')
    {
        //Register specific combinations by name (menu).
    }
    else if(input == '4')
    {
        //Register other products, e.g. soda & bread sticks.
    }
    else if(input == '5')
    {
        //Register locations / pick-up points.
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

ToppingsModel AdministratorUI::create_toppings()
{
    system("cls");
    string name;
    int price;

    cout << "Enter name for topping";
    cin >> name;
    cout << "Enter a price for " << name << ": ";
    cin >> price;

    ToppingsModel toppings_info(name, price);
    return toppings_info;
}

SizeCrustModels AdministratorUI::create_size_crust()
{
    system("cls");
    string name;
    string pizza_size;
    int price;

    cout << "Enter name for pizza crust: ";
    cin >> name;
    cout << "Is it a small, medium or large " << name << "? ";
    cin >> pizza_size;
    cout << "Enter a price for " << name << " " << pizza_size << ": ";
    cin >> price;

    SizeCrustModels sizecrust_info(name, pizza_size, price);
    cout << "THIS" << sizecrust_info;
    return sizecrust_info;
}

