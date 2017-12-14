#ifndef EMPLOYEE_INFO_H
#define EMPLOYEE_INFO_H


#include <string>
#include <iostream>

using namespace std;


class Employee_info
{
public:
    Employee_info(string name, string ssn, int salary, int month, int year);
    string get_name() const;
    string get_ssn() const;
    double get_salary() const;
    int get_month() const;
    int get_year() const;

    friend ostream& operator << (ostream& out, const Employee_info& info);

private:
    string name;
    string ssn;
    int salary;
    int month;
    int year;
};

#endif // SALARY_MODEL_H

