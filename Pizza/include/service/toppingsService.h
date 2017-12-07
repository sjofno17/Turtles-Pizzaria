#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
#include "ToppingsRepository.h"
#include "AdministratorUI.h"
#include "toppingsService.h"
using namespace std;

class toppingsService
{
    public:
        toppingsService();
        void get_toppings_info(const toppingsService& topping);

    private:
};

#endif // TOPPINGSSERVICE_H
