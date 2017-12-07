#include "toppingsService.h"

toppingsService::toppingsService()
{
    //ctor
}

void toppingsService::get_toppings_info(const toppingsService& topping)
{
    ToppingsRepository.get_toppings_info(topping);
    cout << topping << endl;
}
