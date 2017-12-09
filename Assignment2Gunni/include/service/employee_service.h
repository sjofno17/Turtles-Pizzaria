#ifndef EMPLOYEE_SERVICE_H
#define EMPLOYEE_SERVICE_H

#include "employee_info.h"
#include "employee_repository.h"

#include "InvalidNameException.h"
#include "InvalidSalaryException.h"
#include "InvalidSSNException.h"
#include "InvalidMonthException.h"
#include "InvalidYearException.h"


class Employee_Service
{
public:
    Employee_Service();
    void add_info(const Employee_info& info);

private:
    Employee_Repository info_repo;

    bool isValidName(const Employee_info& info);
    bool isValidSSN(const Employee_info& info);
    bool isValidSalary(const Employee_info& info);
    bool isValidMonth(const Employee_info& info);
    bool isValidYear(const Employee_info& info);
};

#endif // EMPLOYEE_SERVICE_H
