#include "employee_repository.h"

Employee_Repository::Employee_Repository()
{
    //ctor
}

void Employee_Repository::add_model(const Salary_Model& model)
{
    ofstream fout;
    fout.open("salary.txt", ios::app);

    if(fout.is_open())
    {
        fout << model;
        fout.close();
    }
    else
    {
        //throw error
    }
}
