#include "ToppingsService.h"

ToppingsService::ToppingsService()
{
}

void ToppingsService::addToppingInfo(ToppingsModel& topping_info, vector<ToppingsModel>& toppingsVec)
{

    if(isValidTopping(topping_info) && isValidPrice(topping_info))
    {
        toppings_repo.storeAllToppings(toppingsVec);
    }
}

void ToppingsService::getToppingsInfo(const vector<ToppingsModel>& toppingsVec)
{
    toppings_repo.retrieveAllToppings();
}

bool ToppingsService::isValidTopping(const ToppingsModel& topping_info)
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
bool ToppingsService::isValidPrice(const ToppingsModel& topping_info)
{
    int price = topping_info.getPrice();

    if (price < 0 || price > 1000000)
    {
        throw (InvalidToppingException("Price is not a valid input!"));
    }
    return true;
}

