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
void Employee_info::set_salary(double salary){
    this->salary = salary;
}
void Employee_info::set_month(int month){
    this->month = month;
}
void Employee_info::set_year(int year){
    this->year = year;
}
ostream& operator << (ostream& out, Employee_info& info)
{
    out << info.name << ", " << info.ssn << ", " << info.salary << ", " << info.month << ", " << info.year;
    return out;
}

istream& operator >> (istream& in, Employee_info& info){
    double salary;
    int month, year;
    cout << "Enter month: ";
    while(true){
        in >> month;
        if(month > 0 || month < 13){
            break;
        }else{
        cout << "Invalid! Please enter a valid month: ";
        }
            }
        cout << "Enter Year: ";
        while(true){
            in >> year;
            if(year >= 1999 || year <=2017){
                break;
            }
            else{
                cout << "Invalid! Please enter a valid year: ";
            }
        }
        cout << "Enter salary: ";
        while(true){
            in >> salary;
            if(salary >= 0){
                break;
            }
            else{
                cout << "Invalid! Please enter a valid value: ";
            }
        }
        info.set_month(month);
        info.set_year(year);
        info.set_salary(salary);

        return in;
}
