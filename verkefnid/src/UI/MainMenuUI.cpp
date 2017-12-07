
#include "MainMenuUI.h"
#include "AdminUI.h"

MainMenuUI::MainMenuUI()
{
    char main_menu = '\0';
}


MainMenuUI::MainMenuUI(char main_menu)
{
    this->main_menu = main_menu;
}

void MainMenuUI::start_menu()
{
    char selection = '\0';

    while (selection != 'q' && selection != 'Q')
    {
        cin >> selection;

        if (selection == '1')
        {
            AdminUI adminui;
            adminui.startAdmin();
        }

        else if (selection == '2')
        {
            //SalesPersonUI salespersonui;
        }

        else if (selection == '3')
        {
            //BakerUI bakerui;
        }

        else if (selection == '4')
        {
            //EmployeeUI; employeeui;
        }

        else
        {
            cout << "invalid!" << endl;
        }
    }
}

ostream& operator << (ostream& out, const MainMenuUI& main)
{
    out << "Turtles-Pizzeria" << endl;
    out << "****************" << endl;
    out << "Choose one of the following: (1, 2, 3, 4)" << endl;
    out << "-----------------------------------------" << endl;
    out << "1. if you are a administrator." << endl;
    out << "2. if you are a salesperson." << endl;
    out << "3. if you are a baker." << endl;
    out << "4. if you are a employee." << endl;
    out << "-------------------------------------" << endl;
    out << "Q/q: if you want to quit the program." << endl;

    return out;
}

istream& operator >> (istream& in, MainMenuUI& main)
{
    in >> main;
    return in;
}

