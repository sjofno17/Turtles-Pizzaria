#include "toppingsService.h"

toppingsService::toppingsService()
{
    //ctor
}

void toppingsService::add_topping_info(const ToppingsModel& topping_info)
{
    if(isValidTopping(topping_info) && isValidPrice(topping_info))
    {
        add_topping_info(topping_info);
        cout << topping_info << endl;
    }
}

bool toppingsService::isValidTopping(const ToppingsModel& topping_info)
{
    string topping = topping_info.getName();

    for(unsigned int i = 0; i < topping.length(); i++)
    {
        if (!isalpha(topping[i]) || topping.length() > 15 || topping.length() < 2)
        {
            throw (InvalidToppingException("The name of topping is not valid!"));
        }
    }
    return true;
}
bool toppingsService::isValidPrice(const ToppingsModel& topping_info)
{
    int price = topping_info.getPrice();

    if (price < 0 || price > 100000)
    {
        throw (InvalidToppingException("Price is not a valid input!"));
    }
    return true;
}
