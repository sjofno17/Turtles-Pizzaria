#ifndef BAKERMODEL_H
#define BAKERMODEL_H
#include "OrderModel.h"

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class BakerModel
{
public:
    BakerModel();
    void addOrder(OrderModel& order);
    void addBaker(OrderModel& order);

    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend istream& operator >>(istream& in, BakerModel& baker);
    friend ostream& operator <<(ostream& out, const BakerModel& baker);

private:
    vector<OrderModel> orderVec;

};

#endif // BAKERMODEL_H
