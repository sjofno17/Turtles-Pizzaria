#include "employee_ui.h"

Employee_UI::Employee_UI()
{

}

void Employee_UI::menu()
{

    while(true)
    {
        cout << "***********************************************************************************" << endl;
        cout << "                                                                                  " << endl;
        cout << " Hi there! Please select one of the choices from below (1, 2 , 3 or 4)            " << endl;
        cout << "                                                                                  " << endl;
        cout << " 1. Add a salary record.                                                          " << endl;
        cout << " 2. Get all salary records for a given SSN.                                       " << endl;
        cout << " 3. Get a total Salary for a given year and a given SSN.                          " << endl;
        cout << " 4. Get the name of the employee with the highest total salary for a given year.  " << endl;
        cout << "                                                                                  " << endl;
        cout << "***********************************************************************************" << endl;
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
        employe_service.add_model(create_model());
    }
    else if(input == '2')
    {
        cout << "Get all salary records for a given SSN. " << endl;
    }
    else if(input == '3')
    {
        cout << "Get a total Salary for a given year and a given SSN. " << endl;
    }
    else if(input == '4')
    {
        cout << "Get the name of the employee with the highest total salary for a given year. " << endl;
    }
    else
    {
        cout << "Please select a correct option!" << endl;
    }
}

Salary_Model Employee_UI::create_model()
{
    string name;
    cout << "Enter employee name: ";
    cin >> name;
    string ssn;
    cout << "Enter social security number: ";
    cin >> ssn;
    double salary;
    cout << "Enter salary: ";
    cin >> salary;
    int month;
    cout << "Enter month: ";
    cin >> month;
    int year;
    cout << "Enter year: ";
    cin >> year;

    Salary_Model model(name, ssn, salary, month, year);
    return model;

}

