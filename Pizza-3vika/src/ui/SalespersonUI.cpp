#include "SalespersonUI.h"

SalespersonUI::SalespersonUI()
{
}

void SalespersonUI::salesperson_menu()
{
    while(true)
    {
        cout << endl;
        cout << "Salesperson" << endl;
        cout << "***********" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Pizza from menu.                        " << endl;
        cout << "2. Make pizza.                             " << endl;
        cout << "3. Read orders.                            " << endl;
        cout << "5. Back to main menu.                      " << endl;
        cout << "-------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    ///Pizza from menu and then asked about soda, delivery and shown full price.
    if(input == '1')
    {

    }

    ///make pizza and then asked about soda, delivery and shown full price.
    else if(input == '2')
    {
        system("CLS");
        vector<ToppingsModel> toppingsVec = topping_repo.retrieveAllToppings();
        ToppingsModel topping;
        int toppingselection = -1;
        while (toppingselection != 0)
        {
            cout << "Enter a number for topping to choose on the pizza. (0 if you are finished)" << endl;
            for (unsigned int i = 0; i <toppingsVec.size(); i++)
            {
                cout << i+1 << ". " << toppingsVec[i] << endl;
            }
            cin >> toppingselection;

            if (toppingselection > 0 && toppingselection <= (int)toppingsVec.size())
            {
                topping.addTopping(toppingsVec[toppingselection - 1]);
            }
        }
        topping_repo.storeAllToppings(toppingsVec);
        cout << endl;
    }

    ///viewing orders
    else if(input == '3')
    {

    }

    else if(input == '4')
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
