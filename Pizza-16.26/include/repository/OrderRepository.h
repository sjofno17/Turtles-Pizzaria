#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H
#include <vector>
#include "OrderModel.h"
using namespace std;

class OrderRepository
{
    public:
        OrderRepository();

    void storePizza(const OrderModel& order);
        OrderModel retrievePizza();

    private:
};

#endif // ORDERREPOSITORY_H
