#ifndef EMPLOYEE_SERVICE_H
#define EMPLOYEE_SERVICE_H

#include "employee_info.h"
#include "employee_repository.h"


class Employee_Service
{
public:
    Employee_Service();
    void add_info(const Employee_info& info);

private:
    Employee_Repository info_repo;
};

#endif // EMPLOYEE_SERVICE_H
