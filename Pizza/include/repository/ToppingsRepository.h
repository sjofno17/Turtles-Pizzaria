#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H
#include <fstream>
<<<<<<< HEAD

=======
#include "toppingmodel.h"
#include "toppingsService.h"
>>>>>>> c2dd6672a6a5c60e9ac59e2d4f55e42e9f45a13e
using namespace std;

class ToppingsRepository
{
    public:
        ToppingsRepository();
        void add_topping_info(const ToppingsModel& topping_info);
<<<<<<< HEAD

    private:
=======
        void add_info(const toppingsService& topping);

>>>>>>> c2dd6672a6a5c60e9ac59e2d4f55e42e9f45a13e
};

#endif // TOPPINGSREPOSITORY_H
