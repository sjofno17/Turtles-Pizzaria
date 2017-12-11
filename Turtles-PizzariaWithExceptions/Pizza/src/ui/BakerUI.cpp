#include "BakerUI.h"
#include <stdlib.h>

BakerUI::BakerUI()
{
    //ctor
}

void BakerUI::baker_menu()
{
    while(true)
    {
        cout << "Baker" << endl;
        cout << "*****" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. User picks their location.                         " << endl;
        cout << "2. View list of ordered pizza, only for this location." << endl;
        cout << "3. View an ordered pizza                              " << endl;
        cout << "4. Flag as processing                                 " << endl;
        cout << "5. Flag as ready                                      " << endl;
        cout << "6. Back to Main Menu.                                 " << endl;
        cout << "------------------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void BakerUI::validate_input(char input)
{
    if(input == '1')
    {

    }
    else if(input == '2')
    {

    }
    else if(input == '3')
    {

    }
    else if(input == '4')
    {

    }
    else if(input == '5')
    {

    }
    else if(input == '6')
    {
        system("cls");
        MainMenuUI ui;
        ui.main_menu();
    }
    else
    {
        cout << "Invalid input please try again. " << endl;
    }
}

