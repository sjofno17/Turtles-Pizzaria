#ifndef EMPLOYEE_INFO_H
#define EMPLOYEE_INFO_H


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
    void set_salary(double salary);
    void set_month(int month);
    void set_year(int year);

    friend ostream& operator << (ostream& out, Employee_info& info);
    friend istream& operator >> (istream& in, Employee_info& info);

private:
    string name;
    string ssn;
    double salary;
    int month;
    int year;
};

#endif // SALARY_MODEL_H

