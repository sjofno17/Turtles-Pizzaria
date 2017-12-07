#include "MainMenuUI.h"
#include "AdminUI.h"

void MainMenuUI::start_menu()
{
    char selection = '\0';
    cin >> selection;


    while (selection != 'q' && selection != 'Q')
    {
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
