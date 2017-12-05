#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#include "salary_model.h"

Salary_Model::Salary_Model(string name, string ssn, double salary, int month, int year)
{
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}


string Salary_Model::get_name()
{
    return this->name;
}
string Salary_Model::get_ssn()
{
    return this->ssn;
}
double Salary_Model::get_salary()
{
    return this->salary;
}
int Salary_Model::get_month()
{
    return this->month;
}
int Salary_Model::get_year()
{
    return this->year;
}
void Salary_Model::set_eName(string name){
    Name = name;
}
void Salary_Model::set_ssn(string ssn){
    kennitala = kennitala;
}
void Salary_Model::set_month(int month){
    month = month;
}
void Salary_Model::set_year(int year){
    year = year;
}
    ostream& operator <<(ostream& out, const Salary_Model& salary){

    out << salary.Name << " / " << salary.ssn << " / " << salary.month << " / " << salary.year << endl;

    return out;

}
