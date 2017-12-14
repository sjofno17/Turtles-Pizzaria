#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include "OrderModel.h"
class OrderRepository
{
    public:
        OrderRepository();

        void storePizza(const OrderModel& order);
        OrderModel retrievePizza();

    private:
};

#endif // ORDERREPOSITORY_H
