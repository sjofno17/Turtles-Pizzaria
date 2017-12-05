#include "employee_service.h"

Employee_Service::Employee_Service()
{
    //ctor
}

void Employee_Service::add_model(const Salary_Model& model)
{
    //validate employee?
    model_repo.add_model(model);
    cout << model << endl;

}
