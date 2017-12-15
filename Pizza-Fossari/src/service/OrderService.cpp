#include "OrderService.h"

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
    int input = order.getName();

    for(unsigned int i = 0; i < topping.length(); i++)
    {
        if (!isalpha(topping[i]) || topping.length() > 15 || topping.length() < 2)
        {
            throw (InvalidToppingException("The name of topping is not valid!"));
        }
    }
    return true;
}*/
