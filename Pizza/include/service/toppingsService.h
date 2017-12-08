#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
#include "toppingmodel.h"
#include "AdministratorUI.h"
using namespace std;

class toppingsService
{
    public:
        toppingsService();
        void add_topping_info(const toppingmodel& topping_info);

    private:
        ToppingsRepository toppings_info_repo;
};

#endif // TOPPINGSSERVICE_H
