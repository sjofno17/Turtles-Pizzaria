#include "employee_repository.h"

Employee_Repository::Employee_Repository()
{
    //ctor
}

void Employee_Repository::add_info(const Employee_info& info)
{
    ofstream fout;
    fout.open("salary.txt", ios::app);

    if(fout.is_open())
    {
        fout << info;
        fout.close();
    }
    else
    {
        //throw error
    }
}
