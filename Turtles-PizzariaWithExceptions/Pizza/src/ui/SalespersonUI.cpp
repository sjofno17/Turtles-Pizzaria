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
        cout << "1. Pizza from menu + drinks.               " << endl;
        cout << "2. Make pizza + drinks .                   " << endl;
        cout << "3. Back to main menu.                      " << endl;
        cout << "-------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    ///Pizza from menu + drinks.
    if(input == '1')
    {

    }

    ///make pizza + drinks.
    else if(input == '2')
    {

    }

    else if(input == '3')
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

void SalespersonUI::pizzaMenuDrinks()
{
    string pizza;
    cout << "What pizza would you like to add to the order?";
    cin >> pizza;

    char input;
    cout << "Would you like to add drink? y/n";
    if (input == 'y')
    {
        string drink;
        cout << "Drink to add to order: ";
        cin >> drink;
    }

    else if (input == 'n')
    {
        system("CLS");
        SalespersonUI ui;
        ui.salesperson_menu();
    }

    else
    {

    }
}

/*void SalespersonUI::makePizzaDrinks()
{

}

void SalespersonUI::deliveryPickUp()
{

}

void SalespersonUI::totalPrice()
{

}*/
