#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H

#include "ToppingsModel.h"
#include <fstream>

using namespace std;

class ToppingsRepository
{
    public:
        ToppingsRepository();
        void add_topping_info(const ToppingsModel& topping_info);


    private:
};

#endif // TOPPINGSREPOSITORY_H
