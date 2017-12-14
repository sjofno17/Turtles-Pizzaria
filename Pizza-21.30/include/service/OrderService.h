#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H
#include <vector>
#include "OrderModel.h"
#include "OrderRepository.h"
using namespace std;

class OrderService
{
    public:
    OrderService();
    void addPizzaInfo(OrderModel& order_info, vector<OrderModel>& orderVec);

private:
    OrderRepository order_repo;
};

#endif // ORDERSERVICE_H
