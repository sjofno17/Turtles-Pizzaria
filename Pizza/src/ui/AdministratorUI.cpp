#include "AdministratorUI.h"
#include <stdlib.h>

AdministratorUI::AdministratorUI()
{
    //ctor
}

void AdministratorUI::administrator_menu()
{
    while(true)
    {
        cout << "Administrator                                        " << endl;
        cout << "*************                                        " << endl;
        cout << "Choose one of the following: (1, 2, 3 or 4)          " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "1. Register different types of pizza (size/crust).   " << endl;
        cout << "2. Register toppings.                                " << endl;
        cout << "3. Register specific combinations by name (menu).    " << endl;
        cout << "4. Register other products, e.g. soda & bread sticks." << endl;
        cout << "5. Register locations / pick-up points.              " << endl;
        cout << "6. Back to main menu.                                " << endl;
        cout << "-----------------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);

    }
}

void AdministratorUI::validate_input(char input)
{
    if(input == '1')
    {
        cout << "How many toppings? ";
        char input;
        cin >> input;

        for(int i = 0; i < input; i++)
        {
            ToppingModel t;
            cout << "Name of topping: ";
            cin >> t.get_name();
            cout << endl;
            cout << "Price: ";
            cin >> t.get_price();
        }
    }
    else if(input == '2')
    {
        //toppings
    }
    else if(input == '3')
    {
        //menu
    }
    else if(input == '4')
    {
        //other
    }
    else if(input == '5')
    {
        //location
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
ostream& operator << (ostream& out, const AdministratorUI admin)
{
    out << admin.name << ", " << admin.price << endl;
    return out;
}
