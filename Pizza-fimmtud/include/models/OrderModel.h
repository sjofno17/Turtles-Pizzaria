#ifndef ORDERMODEL_H
#define ORDERMODEL_H
#include <iostream>
#include "ToppingsModel.h"
#include "SizeCrustModels.h"
using namespace std;

class OrderModel
{
    public:
        OrderModel();

        void addTopping(ToppingsModel topping);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >>(istream& in, OrderModel& order);
        friend ostream& operator <<(ostream& out, const OrderModel& order);

    private:
        vector<ToppingsModel> toppingsVec;
        vector<SizeCrustModels> sizeCrustVec;
};

#endif // ORDERMODEL_H
