#include "SalespersonUI.h"

SalespersonUI::SalespersonUI()
{
}

void SalespersonUI::salesperson_menu()
{
    char input;
    while(input != '2')
    {
        cout << "Salesperson              " << endl;
        cout << "***********              " << endl;
        cout << "-------------------------" << endl;
        cout << "1. Order pizza from menu." << endl;
        cout << "2. Back to main menu.    " << endl;
        cout << "-------------------------" << endl;

        cin >> input;
        validate_input(input);
    }
}

void SalespersonUI::validate_input(char input)
{
    ///Pizza from menu to order
    if(input == '1')
    {
        menupizza_order();
    }

    else if(input == '2')
    {
        system("CLS");
        return;
    }

    else
    {
        cout << "*******************************" << endl;
        cout << "Invalid input please try again." << endl;
        cout << "*******************************" << endl;
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
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "No: Pizza:\tsize:\tprice:" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        for (unsigned int i = 0; i < menuPizzaVec.size(); i++)
        {
            cout << i+1 << ". " << menuPizzaVec[i];
        }
        cin >> menuPizzaSelection;
        cout << endl;
        if (menuPizzaSelection > 0 && menuPizzaSelection <= (int)menuPizzaVec.size())
        {
            order.addOrder(menuPizzaVec[menuPizzaSelection - 1]);
        }
    }
    order_repo.storePizza(order);
    cout << endl;
}
