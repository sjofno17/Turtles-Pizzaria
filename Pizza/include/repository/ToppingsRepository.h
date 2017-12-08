#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H
#include <fstream>
#include "toppingmodel.h"
#include "toppingsService.h"
using namespace std;

class ToppingsRepository
{
    public:
        ToppingsRepository();
        void add_topping_info(const ToppingsModel& topping_info);
        void add_info(const toppingsService& topping);

};

#endif // TOPPINGSREPOSITORY_H
