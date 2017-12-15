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
        cout << "------------------------------------------------------" << endl;
        cout << "1. View an ordered pizza                              " << endl;
        cout << "2. Back to Main Menu.                                 " << endl;
        cout << "------------------------------------------------------" << endl;


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
        cout << "Invalid input please try again. " << endl;
    }
}

void BakerUI::retrieve_order()
{
    system("CLS");
//    vector<OrderModel> orderVec = order_repo.retrievePizza();
    BakerModel baker;

    //OrderModel order = order_repo.retrievePizza();
    cout << baker << endl;
}

