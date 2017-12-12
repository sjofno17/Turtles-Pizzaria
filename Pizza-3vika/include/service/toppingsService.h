#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H

#include "ToppingsModel.h"
#include "ToppingsRepository.h"

#include "InvalidToppingException.h"

class toppingsService
{
public:
    toppingsService();
    void add_topping_info(const ToppingsModel& topping_info);

private:
    ToppingsRepository toppings_info_repo;

    bool isValidTopping(const ToppingsModel& topping_info);
    bool isValidPrice(const ToppingsModel& topping_info);
};

#endif // TOPPINGSSERVICE_H
