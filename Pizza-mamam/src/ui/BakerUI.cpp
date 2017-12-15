#include "BakerUI.h"
#include <stdlib.h>

BakerUI::BakerUI()
{
    //ctor
}

void BakerUI::baker_menu()
{
    char input;
    while(input != '2')
    {
        cout << "Baker" << endl;
        cout << "*****" << endl;
        cout << "------------------------" << endl;
        cout << "1. View orders and bake." << endl;
        cout << "2. Back to Main Menu.   " << endl;
        cout << "------------------------" << endl;

        cout << "Input: ";
        cin >> input;
        validate_input(input);
    }
}

void BakerUI::validate_input(char input)
{
    if(input == '1')
    {
        retrieve_order();
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

void BakerUI::retrieve_order()
{
    system("CLS");
    vector<OrderModel> orderVec = order_repo.retrievePizza();

    BakerModel order;
    int menuPizzaSelection;

    cout << "Choose an order to bake.                         " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "No:                                              " << endl;
    cout << "-------------------------------------------------" << endl;
    for (unsigned int i = 0; i < orderVec.size(); i++)
    {
        cout << i+1 << ". " << orderVec[i];
    }
    cin >> menuPizzaSelection;
    cout << endl;

    if (menuPizzaSelection > 0 && menuPizzaSelection <= (int)orderVec.size())
    {
        order.addOrder(orderVec[menuPizzaSelection - 1]);
    }

    baker_repo.storeOrder(order);
    cout << endl;
}

