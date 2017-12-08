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

Employee_info Employee_info::info(Employee_Repository location, long ssn){

    this-> location = location;
    this->kennitala = kennitala;
    ifstream employees_info;
    employees_info.open(location.getEmployeesLocation());
    this->_employee = true;
    this->name = "n/a";
    while(employees_info.is_open() || !employees_info.eof()){
        string _name;
        long _ssn = -1;
        employees_info >> _name >> _ssn;
        if(_ssn = ssn){
            this->ssn = ssn;
            this->name = _name;
            this->_employee = false;
            ifstream allSalaries;
            allSalaries.open(location.getSalariesLocation());
            while(allSalaries.is_open() && !allSalaries.eof()){
                long ssn_ = -1;
                int month_ = -1;
                int year_ = -1;
                double _salary;
                allSalaries >> ssn_ >> month_ >> year_ >> _salary;
            }
            allSalaries.close();
            break;
        }
    }
    employees_info.close();
}

    }

ostream& operator << (ostream& out, const Employee_info& info)
{
    out << info.name << ", " << info.ssn << ", " << info.salary << ", " << info.month << ", " << info.year;
    return out;
}

