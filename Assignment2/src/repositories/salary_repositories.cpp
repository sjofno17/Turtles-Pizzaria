#include "SalaryRepository.h"

SalaryRepository::SalaryRepository()
{
    //ctor
}

SalaryRepository::~SalaryRepository()
{
    //dtor
}
void SalaryRepository::addEmployee(const EmployeeSalary& salary){
    ofstream fout;
    fout.open("employeesalary.txt", ios::app);
    if (fout.is_open()){
        fout << salary;
        fout.close();
    }
}
