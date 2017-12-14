#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include "OrderModel.h"

using namespace std;

class OrderModel;
class OrderRepository
{
    public:
        OrderRepository();

        void storePizza(const OrderModel& order);
        OrderModel retrievePizza();

    private:
};

#endif // ORDERREPOSITORY_H
