#ifndef SALARY_MODEL_H
#define SALARY_MODEL_H
#include <string>
#include <fstream>

using namespace std;


class Salary_Model
{
    public:
        Salary_Model(string name, string ssn, double salary, int month, int year);
        string get_name();
        string get_ssn();
        double get_salary();
        int get_month();
        int get_year();


    private:
        string name;
        string ssn;
        double salary;
        int month;
        int year;
};

#endif // SALARY_MODEL_H