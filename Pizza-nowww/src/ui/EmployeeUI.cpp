#include "EmployeeUI.h"
#include <stdlib.h>

EmployeeUI::EmployeeUI()
{
    //ctor
}

void EmployeeUI::employee_menu()
{
    char input;
    while(input != '2')
    {
        cout << "Employee                   " << endl;
        cout << "********                   " << endl;
        cout << "---------------------------" << endl;
        cout << "1. View baked pizza orders." << endl;
        cout << "2. Back to Main Menu.      " << endl;
        cout << "---------------------------" << endl;

        cin >> input;
        validate_input(input);
    }
}

void EmployeeUI::validate_input(char input)
{
    if(input == '1')
    {
        system("CLS");
    }

    else if(input == '2')
    {
        system("CLS");
        return;
    }

    else
    {
        cout << "*******************************" << endl;
        cout << "Invalid input please try again. " << endl;
        cout << "*******************************" << endl;
    }
}
