#include "employee_repository.h"
#include "employee_info.h"
#include <iostream>
#include <fstream>
using namespace std;


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


