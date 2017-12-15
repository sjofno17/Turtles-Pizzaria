#ifndef ORDERREPOSITORY_H
#define ORDERREPOSITORY_H

#include "OrderModel.h"
#include <vector>

using namespace std;

class OrderModel;
class OrderRepository
{
public:
    OrderRepository();

    vector<OrderModel> retrievePizza();
    void storePizza(const OrderModel& order);
};

#endif // ORDERREPOSITORY_H
