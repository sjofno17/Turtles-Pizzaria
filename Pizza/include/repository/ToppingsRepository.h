#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H

#include "ToppingsModel.h"
#include <fstream>
<<<<<<< HEAD

=======
#include "toppingmodel.h"
#include "toppingsService.h"
>>>>>>> 11d99d77794b8d906c39832166952581b7a3e3d0
using namespace std;

class ToppingsRepository
{
    public:
        ToppingsRepository();
<<<<<<< HEAD
        void add_topping_info(const ToppingsModel& topping_info);
=======

        void add_info(const toppingsService& topping);
>>>>>>> 11d99d77794b8d906c39832166952581b7a3e3d0

    //private:
};

#endif // TOPPINGSREPOSITORY_H
