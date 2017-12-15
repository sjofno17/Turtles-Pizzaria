#include "MainMenuUI.h"

MainMenuUI::MainMenuUI()
{
}

void MainMenuUI::main_menu()
{
    while(true)
    {
        cout << " _______              __   __                 " << endl;
        cout << "|_     _|.--.--.----.|  |_|  |.-----.-----.   " << endl;
        cout << "  |   |  |  |  |   _||   _|  ||  -__|__ --|   " << endl;
        cout << "  |___|  |_____|__|  |____|__||_____|_____|   " << endl;
        cout << " ______ __                          __        " << endl;
        cout << "|   __ |__|.-----.-----.-----.----.|__|.---.-." << endl;
        cout << "|    __|  ||-- __|-- __|  -__|   _||  ||  _  |" << endl;
        cout << "|___|  |__||_____|_____|_____|__|  |__||___._|" << endl;
        cout << "-------------------------------------------   " << endl;
        cout << "Choose one of the following: (1, 2, 3 or 4)   " << endl;
        cout << "-------------------------------------------   " << endl;
        cout << "1. Administrator.                             " << endl;
        cout << "2. Salesperson.                               " << endl;
        cout << "3. Baker.                                     " << endl;
        cout << "4. Employee.                                  " << endl;
        cout << "5. Quit.                                      " << endl;
        cout << "-------------------------------------------   " << endl;

        char input;
        cout << "Input: ";
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

