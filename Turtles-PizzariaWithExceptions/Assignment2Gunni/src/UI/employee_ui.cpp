#include "employee_ui.h"
#include <stdlib.h>

Employee_UI::Employee_UI()
{

}

void Employee_UI::menu()
{

    while(true)
    {
        cout << "                 **********************************************                   " << endl;
        cout << " Hi there! Please select one of the choices from below (1, 2 , 3 or 4)            " << endl;
        cout << "                                                                                  " << endl;
        cout << " 1. Add a salary record.                                                          " << endl;
        cout << " 2. Get all salary records for a given SSN.                                       " << endl;
        cout << " 3. Get a total Salary for a given year and a given SSN.                          " << endl;
        cout << " 4. Get the name of the employee with the highest total salary for a given year.  " << endl;
        cout << "                 ***********************************************                  " << endl;
        cout << endl;

        char input;
        cin >> input;
        validate_user_input(input);

    }
}
void Employee_UI::validate_user_input(char input)
{
    if(input == '1')
    {
        system("cls");
        try {
            employe_service.add_info(create_info());
        }
        catch(InvalidNameException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
        catch(InvalidSSNException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
        catch(InvalidSalaryException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
        catch(InvalidMonthException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
        catch(InvalidYearException e)
        {
            system("cls");
            cout << e.getMessage() << endl;
        }
    }
    else if(input == '2')
    {
        system("cls");
        //Get all salary records for a given SSN.
    }
    else if(input == '3')
    {
        system("cls");
        //Get a total Salary for a given year and a given SSN.
    }
    else if(input == '4')
    {
        system("cls");
        //Get the name of the employee with the highest total salary for a given year.
    }
    else
    {
        system("cls");
        cout << "Please select a correct option (1, 2, 3 or 4)" << endl;
    }
}

Employee_info Employee_UI::create_info()
{
    string name;
    cout << "Enter employee name: ";
    cin >> name;
    string ssn;
    cout << "Enter social security 10 digit number: ";
    cin >> ssn;
    int salary;
    cout << "Enter salary: ";
    cin >> salary;
    int month;
    cout << "Enter month: ";
    cin >> month;
    int year;
    cout << "Enter year: ";
    cin >> year;

    Employee_info info(name, ssn, salary, month, year);
    return info;
}

