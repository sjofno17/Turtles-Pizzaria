#ifndef ORDERMODEL_H
#define ORDERMODEL_H
#include "ToppingsModel.h"
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
        vector<ToppingsModel> toppings;
};

#endif // ORDERMODEL_H
