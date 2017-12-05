#ifndef EMPLOYEE_UI_H
#define EMPLOYEE_UI_H

#include "salary_model.h"
#include "employee_service.h"


class Employee_UI
{
public:
    Employee_UI();
    void menu();

private:
    void validate_user_input(char input);
    Salary_Model create_model();
    Employee_Service employe_service;

};

#endif // EMPLOYEE_UI_H
