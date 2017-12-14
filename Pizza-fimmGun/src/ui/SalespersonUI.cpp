#include "SalespersonUI.h"

SalespersonUI::SalespersonUI()
{
}

void SalespersonUI::salesperson_menu()
{
    char input;
    while(input != '3')
    {
        cout << "Salesperson" << endl;
        cout << "***********" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Order pizza from menu.                  " << endl;
        cout << "2. Order pizza with chosen toppings.       " << endl;
        cout << "3. Back to main menu.                      " << endl;
        cout << "-------------------------------------------" << endl;

        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    ///Pizza from menu and then asked about soda, delivery and shown full price.
    if(input == '1')
    {
       menupizza_order();
    }

    ///make pizza and then asked about soda, delivery and shown full price.
    else if(input == '2')
    {
        sizeCrust_order();
        toppings_order();

    }

    else if(input == '3')
    {
        system("CLS");
        return;
    }
    else
    {
        cout << "Invalid input please try again. " << endl;
    }
}

void SalespersonUI::menupizza_order()
{
    system("CLS");
        vector<MenuPizzaModel> menuPizzaVec = menuPizza_repo.retrieveAllMenuPizza();
        OrderModel order;
        int menuPizzaSelection = -1;
        while (menuPizzaSelection != 0)
        {
            cout << "Enter a number for pizza on the menu to choose. (0 when you are finished)" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            cout << "No: Pizza:\tsize:\tprice:" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            for (unsigned int i = 0; i < menuPizzaVec.size(); i++)
            {
                cout << i+1 << ". " << menuPizzaVec[i];
            }
            cin >> menuPizzaSelection;
            cout << endl;

            if (menuPizzaSelection > 0 && menuPizzaSelection <= (int)menuPizzaVec.size())
            {
                order.addTopping(menuPizzaVec[menuPizzaSelection - 1]);
            }
        }
        order_repo.storePizza(order);
        cout << endl;
}

void SalespersonUI::sizeCrust_order()
{
    system("CLS");
        vector<SizeCrustModels> sizeCrustVec = sizeCrust_repo.retrieveAllSizeCrust();
        OrderModel order;
        int sizeCrustSelection = -1;
        while (sizeCrustSelection != 0)
        {
            cout << "Enter a number for crust and size of pizza. (0 when you are finished)" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            cout << "No: Crust:\tSize:\tprice:" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            for (unsigned int i = 0; i < sizeCrustVec.size(); i++)
            {
                cout << i+1 << ". " << sizeCrustVec[i];
            }
            cin >> sizeCrustSelection;
            cout << endl;

            if (sizeCrustSelection > 0 && sizeCrustSelection <= (int)sizeCrustVec.size())
            {
                sizeCrust.addSizeCrust(sizeCrustVec[sizeCrustSelection - 1]);
            }
        }
        cout << endl;
}


void SalespersonUI::toppings_order()
{
    system("CLS");
        vector<ToppingsModel> toppingsVec = topping_repo.retrieveAllToppings();
        OrderModel order;
        int toppingselection = -1;
        while (toppingselection != 0)
        {
            cout << "Enter a number for topping to choose on pizza. (0 when you are finished)" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            cout << "No: Topping:\tprice:" << endl;
            cout << "-----------------------------------------------------------------------" << endl;
            for (unsigned int i = 0; i < toppingsVec.size(); i++)
            {
                cout << i+1 << ". " << toppingsVec[i];
            }
            cin >> toppingselection;
            cout << endl;

            if (toppingselection > 0 && toppingselection <= (int)toppingsVec.size())
            {
                order.addTopping(toppingsVec[toppingselection - 1]);
            }
        }
        order_repo.storePizza(order);

        cout << endl;
}
