#include "employee_info.h"

Employee_info::Employee_info(string name, string ssn, int salary, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}


string Employee_info::get_name() const
{
    return this->name;
}
string Employee_info::get_ssn() const
{
    return this->ssn;
}
double Employee_info::get_salary() const
{
    return this->salary;
}
int Employee_info::get_month() const
{
    return this->month;
}
int Employee_info::get_year() const
{
    return this->year;
}

ostream& operator << (ostream& out, const Employee_info& info)
{
    out << info.name << "," << info.ssn << "," << info.salary << "," << info.month << "," << info.year << endl;;
    return out;
}
