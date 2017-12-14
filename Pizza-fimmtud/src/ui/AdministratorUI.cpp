#include "AdministratorUI.h"
#include <stdlib.h>

AdministratorUI::AdministratorUI()
{
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
    ///Fill in toppings
    if(input == '1')
    {
        try
        {
            create_toppings();
        }
        catch(InvalidToppingException e)
        {
            system("CLS");
            cout << e.getMessage() << endl;
        }
    }

    ///fill in crust, size and price.
    else if(input == '2')
    {
        try
        {
            create_size_crust();
        }

        catch(InvalidSizeCrustException e)
        {
            system("CLS");
            cout << e.getMessage() << endl;
        }
    }

    else if(input == '3')
    {
        try
        {
            create_menupizza();
            ;
        }
        catch(InvalidMenuPizzaException e)
        {
            system("CLS");
            cout << e.getMessage() << endl;
        }
    }

    else if(input == '4')
    {
        try
        {
            create_drinks();
        }
        catch(InvalidDrinksException e)
        {
            system("CLS");
            cout << e.getMessage() << endl;
        }
    }

    else if(input == '5')
    {
        try
        {
            create_location();
        }
        catch(InvalidLocationException e)
        {
            system("CLS");
            cout << e.getMessage() << endl;
        }
    }

    else if(input == '6')
    {
        system("CLS");
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
    system("CLS");
    string name;
    int price;
    vector<ToppingsModel> toppingVec;

    cout << "Enter name for topping: ";
    cin >> name;
    cout << "Enter a price for: " << name << ": ";
    cin >> price;

    ToppingsModel topping_info(name, price);
    cout << "You have successfully registered " << name << ", " << price << endl << endl;
    toppingVec.push_back(topping_info);

    topping_service.addToppingInfo(topping_info, toppingVec);
    return topping_info;
}

SizeCrustModels AdministratorUI::create_size_crust()
{
    system("CLS");
    string name;
    string pizza_size;
    int price;
    vector<SizeCrustModels> sizeCrustVec;

    cout << "Enter name for pizza crust: ";
    cin >> name;
    cout << "Enter size for " << name << ". Small, medium or large? ";
    cin >> pizza_size;
    cout << "Enter a price for " << pizza_size << " " << name << ": ";
    cin >> price;
    cout << endl;

    SizeCrustModels sizecrust_info(name, pizza_size, price);
    cout << "You have successfully registered: " << name << ", " << price << endl << endl;
    sizeCrustVec.push_back(sizecrust_info);

    sizecrust_service.add_size_crust(sizecrust_info, sizeCrustVec);
    return sizecrust_info;
}

MenuPizzaModel AdministratorUI::create_menupizza()
{
    system("CLS");
    string name;
    string pizza_size;
    int price;
    vector<MenuPizzaModel> menuPizzaVec;

    cout << "Enter name for menu pizza: ";
    cin >> name;
    cout << "Enter small, medium or large " << name << "? ";
    cin >> pizza_size;
    cout << "Enter a price for " << pizza_size << " " << name << ": ";
    cin >> price;
    cout << endl;

    MenuPizzaModel menupizza_info(name, pizza_size, price);
    cout << "You have successfully registered: " << name << ", " << pizza_size << ", " << price << endl << endl;
    menuPizzaVec.push_back(menupizza_info);

    menupizza_service.add_menupizza(menupizza_info, menuPizzaVec);
    return menupizza_info;
}

DrinksModel AdministratorUI::create_drinks()
{
    system("CLS");
    string name;
    int price;
    vector<DrinksModel> drinksVec;

    cout << "Enter name for drink: ";
    cin >> name;
    cout << "Enter a price for " << name << ": ";
    cin >> price;
    cout << endl;

    DrinksModel drinks_info(name, price);
    cout << "You have successfully registered: " << name << ", " << price << endl << endl;
    drinksVec.push_back(drinks_info);

    drinks_service.add_drinks(drinks_info);
    return drinks_info;
}

LocationModel AdministratorUI::create_location()
{
    system("CLS");
    string name;
    vector<LocationModel> locationVec;

    cout << "Enter a name for location: ";
    cin >> name;
    cout << endl;

    LocationModel location_info(name);
    cout << "You have successfully registered: " << name << endl << endl;
    locationVec.push_back(location_info);

    location_service.add_location(location_info);
    return location_info;
}
