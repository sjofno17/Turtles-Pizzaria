#ifndef SALARY_MODEL_H
#define SALARY_MODEL_H

#include <string>
#include <iostream>

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

<<<<<<< HEAD
 friend ostream& operator <<(ostream& out, const Salary_Model& salary);
=======
    friend ostream& operator << (ostream& out, const Salary_Model& model);
>>>>>>> c040d1276f6ecf8b87874cd673c66673a5e184e7

private:
    string name;
    string ssn;
    double salary;
    int month;
    int year;
};

#endif // SALARY_MODEL_H
