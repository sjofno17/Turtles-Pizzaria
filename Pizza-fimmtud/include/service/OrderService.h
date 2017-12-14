#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H
#include <vector>
#include "ToppingsModel.h"
#include "ToppingsRepository.h"
#include "OrderRepository.h"
using namespace std;

class OrderService
{
    public:
    OrderService();
    void addMakePizzaInfo(OrderModel& order_info, vector<OrderModel>& orderVec);

private:
    ToppingsRepository toppings_repo;
    OrderRepository order_repo;
};

#endif // ORDERSERVICE_H
