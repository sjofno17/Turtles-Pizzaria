#include "employee_info.h"

Employee_info::Employee_info(string name, string ssn, double salary, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}


string Employee_info::get_name()
{
    return this->name;
}
string Employee_info::get_ssn()
{
    return this->ssn;
}
double Employee_info::get_salary()
{
    return this->salary;
}
int Employee_info::get_month()
{
    return this->month;
}
int Employee_info::get_year()
{
    return this->year;
}

ostream& operator << (ostream& out, const Employee_info& info)
{
    out << info.name << ", " << info.ssn << ", " << info.salary << ", " << info.month << ", " << info.year;
    return out;
}
