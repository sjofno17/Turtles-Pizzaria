#include "toppingsService.h"

toppingsService::toppingsService()
{
    //ctor
}

void toppingsService::add_topping_info(const toppingmodel& topping_info)
{
    toppings_info_repo.add_topping_info(topping_info);
    cout << topping_info << endl;
}
