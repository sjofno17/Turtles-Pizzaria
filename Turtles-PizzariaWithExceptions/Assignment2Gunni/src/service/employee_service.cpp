#include "employee_service.h"

Employee_Service::Employee_Service()
{
    //ctor
}

void Employee_Service::add_info(const Employee_info& info)
{
    //validate employee
    if(isValidName(info) && isValidSSN(info) && isValidSalary(info) && isValidMonth(info))
    {
        info_repo.add_info(info);
    }
}

bool Employee_Service::isValidName(const Employee_info& info)
{
    string name = info.get_name();

    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (!isalpha(name[i]))
        {
            throw (InvalidNameException("The name is not valid!"));
        }
    }
    return true;
}

bool Employee_Service::isValidSSN(const Employee_info& info)
{
    string ssn = info.get_ssn();

    for(unsigned int i = 0; i < ssn.length(); i++)
    {
        if(!isdigit(ssn[i]))
        {
            throw InvalidSSNException("The social security number is not valid!");
        }
        else if(ssn.length() > 10 || ssn.length() < 10)
        {
            throw InvalidSSNException("The social security number is not valid!");
        }
    }
    return true;
}
bool Employee_Service::isValidSalary(const Employee_info& info)
{
    int salary = info.get_salary();

    if(salary < 0 || salary > 10000000)
    {
        throw InvalidSalaryException("The salary number is not valid!");
    }
    return true;
}
bool Employee_Service::isValidMonth(const Employee_info& info)
{
    int month = info.get_month();

    if(month < 1 || month > 12)
    {
        throw InvalidMonthException("Incorrect input for month!");
    }
    return true;
}
bool Employee_Service::isValidYear(const Employee_info& info)
{
    int year = info.get_year();

    if(year != 2017)
    {
        throw InvalidYearException("Incorrect input for month!");
    }
    return true;
}

