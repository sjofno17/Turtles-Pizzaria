#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H

#include "ToppingsModel.h"
#include "ToppingsRepository.h"

class toppingsService
{
    public:
        toppingsService();
        void add_topping_info(const ToppingsModel& topping_info);

    private:
        ToppingsRepository toppings_info_repo;
};

#endif // TOPPINGSSERVICE_H
