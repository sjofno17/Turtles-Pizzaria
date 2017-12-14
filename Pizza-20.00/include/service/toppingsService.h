#ifndef TOPPINGSSERVICE_H
#define TOPPINGSSERVICE_H
#include "ToppingsRepository.h"
#include "InvalidToppingException.h"
using namespace std;

class ToppingsService
{
public:
    ToppingsService();
    void addToppingInfo(ToppingsModel& topping_info, vector<ToppingsModel>& toppingVec);
    void getToppingsInfo(const vector<ToppingsModel>& toppingsVec);

private:
    ToppingsRepository toppings_repo;

    bool isValidTopping(const ToppingsModel& topping_info);
    bool isValidPrice(const ToppingsModel& topping_info);
};

#endif // TOPPINGSSERVICE_H
