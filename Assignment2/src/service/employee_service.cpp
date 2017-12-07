#include "employee_service.h"

Employee_Service::Employee_Service()
{
    //ctor
}

void Employee_Service::add_info(const Employee_info& info)
{
    //validate employee?
    info_repo.add_info(info);
    cout << info << endl;

}
