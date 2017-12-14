#include "EmployeeUI.h"
#include <stdlib.h>

EmployeeUI::EmployeeUI()
{
    //ctor
}

void EmployeeUI::employee_menu()
{
    char input;
    while(input != '7')
    {
        cout << "Employee" << endl;
        cout << "********" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "1. User picks their location.                         " << endl;
        cout << "2. View list of orders, only for this location.       " << endl;
        cout << "3. View list of ready orders only for this location.  " << endl;
        cout << "4. View a specific order.                             " << endl;
        cout << "5. Flag order as paid for.                            " << endl;
        cout << "6. Flag order as delivered.                           " << endl;
        cout << "7. Back to Main Menu.                                 " << endl;
        cout << "------------------------------------------------------" << endl;

        cin >> input;
        validate_input(input);
    }
}

void EmployeeUI::validate_input(char input)
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

    }
    else if(input == '7')
    {
        system("cls");
        return;
    }
    else
    {
        cout << "Invalid input please try again. " << endl;
    }
}
