#ifndef ORDERMODEL_H
#define ORDERMODEL_H

#include <iostream>
#include "ToppingsModel.h"

#include <fstream>
#include <vector>

using namespace std;

class OrderModel
{
    public:
        OrderModel();
        virtual ~OrderModel();

        void addTopping(ToppingsModel topping);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >>(istream& in, OrderModel& order);
        friend ostream& operator <<(ostream& out, const OrderModel& order);

    private:
        vector<ToppingsModel> toppings;
};

#endif // ORDERMODEL_H
