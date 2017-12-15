#include "OrderService.h"
#include "iostream"

OrderService::OrderService()
{
}

void OrderService::addPizzaInfo(OrderModel& order_info, vector<OrderModel>& orderVec)
{

    //if(isValidInput(order_info))
    //{
    order_repo.storePizza(order_info);
    //}
}

/*bool OrderService::isValidInput(const OrderModel& order_info)
{

    return true;
}*/
