#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
<<<<<<< HEAD

#include "ToppingsModel.h"
#include "ToppingsRepository.h"
=======
#include "toppingmodel.h"
#include "AdministratorUI.h"
using namespace std;
>>>>>>> c2dd6672a6a5c60e9ac59e2d4f55e42e9f45a13e

class toppingsService
{
    public:
        toppingsService();
        void add_topping_info(const toppingmodel& topping_info);

    private:
        ToppingsRepository toppings_info_repo;
};

#endif // TOPPINGSSERVICE_H
