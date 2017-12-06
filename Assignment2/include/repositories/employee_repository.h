#ifndef EMPLOYEE_REPOSITORY_H
#define EMPLOYEE_REPOSITORY_H

#include "salary_model.h"
#include <fstream>

class Employee_Repository
{
public:
    Employee_Repository();
    void add_model(const Salary_Model& model);

private:
};

#endif // EMPLOYEE_REPOSITORY_H
