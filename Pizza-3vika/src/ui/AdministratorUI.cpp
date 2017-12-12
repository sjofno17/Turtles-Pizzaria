#include "AdministratorUI.h"
#include <stdlib.h>

AdministratorUI::AdministratorUI()
{
}

void AdministratorUI::administrator_menu()
{
    while(true)
    {
        cout << endl;
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
            system("CLS");
            string name;
            int price;
            vector<ToppingsModel> toppingVec;

            cout << "Enter name for topping: ";
            cin >> name;
            cout << "Enter a price for: " << name << ": ";
            cin >> price;

            ToppingsModel toppings_info(name, price);
            cout << "You have successfully registered: " << name << ", " << price << endl;
            toppingVec.push_back(toppings_info);

            topping_repo.storeAllToppings(toppingVec);
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
            cout << "You have successfully registered: " << name << ", " << price << endl;
            sizeCrustVec.push_back(sizecrust_info);

            sizeCrust_repo.storeAllSizeCrust(sizeCrustVec);
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
            cout << "You have successfully registered: " << name << ", " << pizza_size << ", " << price << endl;
            menuPizzaVec.push_back(menupizza_info);

            menuPizza_repo.storeAllMenuPizza(menuPizzaVec);
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
            cout << "You have successfully registered: " << name << ", " << price << endl;
            drinksVec.push_back(drinks_info);

            drinks_repo.storeAllDrinks(drinksVec);
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
            system("CLS");
            string name;
            vector<LocationModel> locationVec;

            cout << "Enter a name for location: ";
            cin >> name;
            cout << endl;

            LocationModel location_info(name);
            cout << "You have successfully registered: " << name << endl;
            locationVec.push_back(location_info);

            location_repo.storeAllLocations(locationVec);
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

/*ToppingsModel AdministratorUI::create_toppings()
{
    system("cls");
    string name;
    int price;

    cout << "Enter name for topping: ";
    cin >> name;
    cout << "Enter a price for " << name << ": ";
    cin >> price;

    ToppingsModel toppings_info(name, price);
    cout << "You have successfully registered: ";
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
    cout << "You have successfully registered: ";
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
    cout << "You have successfully registered: ";
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
    cout << "You have successfully registered: ";
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
    cout << "You have successfully registered: ";
    return location_info;
}
*/
