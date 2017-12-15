#ifndef EMPLOYEEUI_H
#define EMPLOYEEUI_H

#include <iostream>
using namespace std;

class EmployeeUI
{
public:
    EmployeeUI();
    void employee_menu();

private:
    void validate_input(char input);
};

#endif // EMPLOYEEUI_H
