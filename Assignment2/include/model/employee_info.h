#ifndef EMPLOYEE_INFO_H
#define EMPLOYEE_INFO_H

#include "employee_repository.h"
#include <string>
#include <iostream>

using namespace std;


class Employee_info
{
public:
    Employee_info(string name, string ssn, double salary, int month, int year);
    string get_name();
    string get_ssn();
    double get_salary();
    int get_month();
    int get_year();
    Employee_info info();

    friend ostream& operator << (ostream& out, const Employee_info& info);

private:
    string name;
    string ssn;
    double salary;
    int month;
    int year;
};

#endif // SALARY_MODEL_H

