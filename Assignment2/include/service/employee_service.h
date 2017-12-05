#ifndef EMPLOYEE_SERVICE_H
#define EMPLOYEE_SERVICE_H

#include "salary_model.h"
#include "employee_repository.h"


class Employee_Service
{
public:
    Employee_Service();
    void add_model(const Salary_Model& model);

private:
    Employee_Repository model_repo;
};

#endif // EMPLOYEE_SERVICE_H
