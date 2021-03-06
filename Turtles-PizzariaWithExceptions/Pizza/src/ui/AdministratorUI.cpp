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
        cout << "Administrator Menu                                        " << endl;
        cout << "******************                                        " << endl;
        cout << "Choose one of the following: (1, 2, 3 or 4)               " << endl;
        cout << "--------------------------------------------------        " << endl;
        cout << "1. Register toppings.                                     " << endl;
        cout << "2. Register different types of pizza (size/crust).        " << endl;
        cout << "3. Register menu pizza.                                   " << endl;
        cout << "4. Register drinks.                                       " << endl;
        cout << "5. Register locations / pick-up points.                   " << endl;
        cout << "6. Back to main menu.                                     " << endl;
        cout << "--------------------------------------------------        " << endl;

        char input;
        cout << "Input: ";
        cin >> input;
        validate_input(input);

    }
}

void AdministratorUI::validate_input(char input)
{
    if(input == '1')
    {
        try
        {
            topping_service.add_topping_info(create_toppings());
        }
        catch(InvalidToppingException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
    }
    else if(input == '2')
    {
        try
        {
            sizecrust_service.add_size_crust(create_size_crust());
        }
        catch(InvalidSizeCrustException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }

    }
    else if(input == '3')
    {
        try
        {
            menupizza_service.add_menupizza(create_menupizza());
        }
        catch(InvalidMenuPizzaException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
    }
    else if(input == '4')
    {
        try
        {
            drinks_service.add_drinks(create_drinks());
        }
        catch(InvalidDrinksException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
    }
    else if(input == '5')
    {
        try
        {
            location_service.add_location(create_location());
        }
        catch(InvalidLocationException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
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

    cout << "Enter name for topping: ";
    cin >> name;
    cout << "Enter a price for " << name << ": ";
    cin >> price;

    ToppingsModel toppings_info(name, price);
    cout << "You have succesfully registered: ";
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
    cout << "Enter small, medium or large " << name << "? ";
    cin >> pizza_size;
    cout << "Enter a price for " << pizza_size << " " << name << ": ";
    cin >> price;
    cout << endl;

    SizeCrustModels sizecrust_info(name, pizza_size, price);
    cout << "You have succesfully registered: ";
    return sizecrust_info;
}

MenuPizzaModel AdministratorUI::create_menupizza()
{
    system("cls");
    string name;
    string pizza_size;
    int price;

    cout << "Enter name for menu pizza: ";
    cin >> name;
    cout << "Enter small, medium or large " << name << "? ";
    cin >> pizza_size;
    cout << "Enter a price for " << pizza_size << " " << name << ": ";
    cin >> price;
    cout << endl;

    MenuPizzaModel menupizza_info(name, pizza_size, price);
    cout << "You have succesfully registered: ";
    return menupizza_info;
}
DrinksModel AdministratorUI::create_drinks()
{
    system("cls");
    string name;
    int price;

    cout << "Enter name for drink: ";
    cin >> name;
    cout << "Enter a price for " << name << ": ";
    cin >> price;
    cout << endl;

    DrinksModel drinks_info(name, price);
    cout << "You have succesfully registered: ";
    return drinks_info;
}
LocationModel AdministratorUI::create_location()
{
    system("cls");
    string name;

    cout << "Enter a name for location: ";
    cin >> name;
    cout << endl;

    LocationModel location_info(name);
    cout << "You have succesfully registered: ";
    return location_info;
}




