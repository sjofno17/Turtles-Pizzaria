#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H
#include <vector>
#include "OrderRepository.h"
using namespace std;

class OrderService
{
    public:
    OrderService();
    void addMakePizzaInfo(OrderModel& order_info, vector<OrderModel>& orderVec);

private:
    OrderRepository order_repo;
};

#endif // ORDERSERVICE_H
