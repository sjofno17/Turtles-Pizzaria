#include "EmployeeModel.h"

EmployeeModel::EmployeeModel()
{
    //ctor
}

/*void EmployeeModel::addToSale(BakerModel& bakerm)
{
    vector<OrderModel> orderVec;
    orderVec.push_back(bakerm);
}*/

void EmployeeModel::write(ofstream& fout) const
{
    int orderscount = orderVec.size();

    fout.write((char*)(&orderscount), sizeof(int));

    for(int i = 0; i < orderscount; i++)
    {
        orderVec[i].write(fout);
    }
}
void EmployeeModel::read(ifstream& fin)
{
    int ordercount = orderVec.size();
    BakerModel order;
    fin.read((char*)(&ordercount), sizeof(int));

    for(int i = 0; i < ordercount; i++)
    {
        order.read(fin);
        //order.addBaker(order);
    }
}

istream& operator >>(istream& in, EmployeeModel& employee)
{
    int ordercount;
    in >> ordercount;

    BakerModel order;
    for(unsigned int i = 0; i < employee.orderVec.size(); i++)
    {
        in >> order;
        //order.addOrder(employee);
    }
    return in;
}

ostream& operator <<(ostream& out, const EmployeeModel& employee)
{
    out << "Ready pizzas: " << endl;
    for (unsigned int i = 0; i < employee.orderVec.size(); i++)
    {
        out << employee.orderVec[i];
    }

    return out;
}
