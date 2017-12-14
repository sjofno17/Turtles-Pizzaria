#include "MainMenuUI.h"


MainMenuUI::MainMenuUI()
{

}

void MainMenuUI::main_menu()
{
    while(true)
    {
           /* cout << "               (_)              " << endl;
            cout << "          _ __  _ __________ _  " << endl;
            cout << "Turtles  | '_ \| |_  /_  / _` | " << endl;
            cout << "         | |_)|| |/ / / / (_| | " << endl;
            cout << "         | .__/|_/___/___\__,_| " << endl;
            cout << "         | |                    " << endl;
            cout << "         |_|                    " << endl;*/
            cout << "********************************" << endl;
            cout << "Choose one of the following: (1, 2, 3 or 4)" << endl;
            cout << "-------------------------------------------" << endl;
            cout << "1. Administrator.                          " << endl;
            cout << "2. Salesperson.                            " << endl;
            cout << "3. Baker.                                  " << endl;
            cout << "4. Employee.                               " << endl;
            cout << "5. Quit.                                   " << endl;
            cout << "-------------------------------------------" << endl;

            char input;
            cin >> input;
            validate_input(input);
    }
}

void MainMenuUI::validate_input(char input)
{
    if(input == '1')
    {
        system("cls");
        AdministratorUI adminui;
        adminui.administrator_menu();
    }
    else if(input == '2')
    {
        system("cls");
        SalespersonUI salesui;
        salesui.salesperson_menu();
    }
    else if(input == '3')
    {
        system("cls");
        BakerUI bakerui;
        bakerui.baker_menu();
    }
    else if(input == '4')
    {
        system("cls");
        EmployeeUI employeeui;
        employeeui.employee_menu();
    }
    else if(input == '5')
    {
        exit(0);
    }
    else
    {
        system("cls");
        cout << "*******************************" << endl;
        cout << "Invalid input please try again. " << endl;
        cout << "*******************************" << endl;
    }
}

