#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
<<<<<<< HEAD

#include "ToppingsModel.h"
#include "ToppingsRepository.h"
=======
//#include "ToppingsRepository.h"
#include "AdministratorUI.h"
#include "toppingsService.h"
using namespace std;
>>>>>>> 11d99d77794b8d906c39832166952581b7a3e3d0

class toppingsService
{
    public:
        toppingsService();
        void add_topping_info(const ToppingsModel& topping_info);

    private:
        ToppingsRepository toppings_info_repo;
};

#endif // TOPPINGSSERVICE_H
