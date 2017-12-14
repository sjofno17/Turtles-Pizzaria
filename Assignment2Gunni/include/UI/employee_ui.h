#ifndef EMPLOYEE_UI_H
#define EMPLOYEE_UI_H

#include "employee_info.h"
#include "employee_service.h"


class Employee_UI
{
public:
    Employee_UI();
    void menu();

private:
    void validate_user_input(char input);

    Employee_info create_info();
    Employee_Service employe_service;

};

#endif // EMPLOYEE_UI_H
