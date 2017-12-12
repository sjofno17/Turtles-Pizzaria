#include "SalespersonUI.h"

SalespersonUI::SalespersonUI()
{
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
        cout << "3. Delivered or picked up.                 " << endl;
        cout << "4. View total prize.                       " << endl;
        cout << "5. Back to main menu.                      " << endl;
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
        vector<ToppingsModel> toppings = topping_repo.retrieveAllToppings();
        ToppingsModel topping;
        int toppingselection = -1;
        while (toppingselection != 0)
        {
            cout << "Enter a number for topping to choose on the pizza. (0 if you are finished)" << endl;
            for (unsigned int i = 0; i <toppings.size(); i++)
            {
                cout << i+1 << ". " << toppings[i] << endl;
            }
            cin >> toppingselection;

            if (toppingselection > 0 && toppingselection <= (int)toppings.size())
            {
                topping.addTopping(toppings[toppingselection - 1]);
            }
        }
        topping_repo.storeAllToppings(toppings);
        cout << endl;
    }

    ///delivered or picked up.
    else if(input == '3')
    {

    }

    ///total price
    else if(input == '4')
    {

    }

    else if(input == '5')
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
