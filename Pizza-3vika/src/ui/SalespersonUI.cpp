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
        cout << "3. Back to main menu.                      " << endl;
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
        system("CLS");
        vector<MenuPizzaModel> menuPizzaVec = menuPizza_repo.retrieveAllMenuPizza();
        MenuPizzaModel menuPizza;
        int menuPizzaSelection = -1;
        while (menuPizzaSelection != 0)
        {
            cout << "Enter a number for pizza on menu to choose. (0 if you are finished)" << endl;
            for (unsigned int i = 0; i < menuPizzaVec.size(); i++)
            {
                cout << i+1 << ". " << menuPizzaVec[i] << endl;
            }
            cin >> menuPizzaSelection;

            if (menuPizzaSelection > 0 && menuPizzaSelection <= (int)menuPizzaVec.size())
            {
                menuPizza.addMenuPizza(menuPizzaVec[menuPizzaSelection - 1]);
            }
        }
        cout << endl;
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
            for (unsigned int i = 0; i < toppingsVec.size(); i++)
            {
                cout << i+1 << ". " << toppingsVec[i];
            }
            cin >> toppingselection;

            if (toppingselection > 0 && toppingselection <= (int)toppingsVec.size())
            {
                topping.addTopping(toppingsVec[toppingselection - 1]);
            }
        }
        cout << endl;
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
