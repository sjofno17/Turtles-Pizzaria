#include "employee_ui.h"
#include "employee_info.h"

Employee_UI::Employee_UI()
{

}

void Employee_UI::menu()
{

    while(true)
    {
        cout << "***********************************************************************************" << endl;
        cout << "                                                                                   " << endl;
        cout << " Hi there! Please select one of the choices from below (1, 2 , 3 or 4)             " << endl;
        cout << "                                                                                   " << endl;
        cout << " 1. Add a salary record.                                                           " << endl;
        cout << " 2. Get all salary records for a given SSN.                                        " << endl;
        cout << " 3. Get a total Salary for a given year and a given SSN.                           " << endl;
        cout << " 4. Get the name of the employee with the highest total salary for a given year.   " << endl;
        cout << "                                                                                   " << endl;
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
        //Add a salary record.
        employe_service.add_info(create_info());
    }
    else if(input == '2')
    {
        //Get all salary records for a given SSN.
        get_All_Records_Salary_For_Ssn();
    }
    else if(input == '3')
    {
        cout << "Get a total Salary for a given year and a given SSN. " << endl;
        get_all_salary_for_ssn_year();
    }
    else if(input == '4')
    {
        cout << "Get the name of the employee with the highest total salary for a given year. " << endl;
        highest_salary();
    }
    else
    {
        cout << "Please select a correct option!" << endl;
    }
}

Employee_info Employee_UI::create_info()
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

    Employee_info info(name, ssn, salary, month, year);
    return info;

}

void Employee_UI::get_All_Records_Salary_For_Ssn(){
    long ssn;
    cout << "Employee's social security number: ";
    cin >>ssn;

}

void Employee_UI::get_all_salary_for_ssn_year(){
    long ssn;
    int year;
    string name;
    int month;
    double salary;
    cout << "Employee's social security number: ";
    cin >> ssn;
    cout << "Year: ";
    cin >> year;

    //Employee_info(name, ssn, salary, month, year);

}

void Employee_UI::highest_salary(){
/*double salary;
Employee_info info;
if(salary > info.salary)
Employee_info info(name, ssn, salary, month, year);
}
*/
}

//float Employee::getSalary(){
//return salary;
//}


