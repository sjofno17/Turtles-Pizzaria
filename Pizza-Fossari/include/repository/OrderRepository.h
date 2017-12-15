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

    void storePizza(const OrderModel& order);
    vector<OrderModel> retrievePizza();
};

#endif // ORDERREPOSITORY_H
