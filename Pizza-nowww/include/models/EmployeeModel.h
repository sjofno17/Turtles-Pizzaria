#ifndef EMPLOYEEMODEL_H
#define EMPLOYEEMODEL_H
#include <vector>
#include <iostream>
#include <fstream>
#include "OrderModel.h"
#include "BakerModel.h"
using namespace std;

class EmployeeModel
{
    public:
        EmployeeModel();

        void addToSale(BakerModel& bakerm);
        void read(ifstream& fin);

        void write(ofstream& fout) const;
        friend istream& operator >>(istream& in, EmployeeModel& employee);
        friend ostream& operator <<(ostream& out, const EmployeeModel& employee);


    private:
        vector<OrderModel> orderVec;
};

#endif // EMPLOYEEMODEL_H
