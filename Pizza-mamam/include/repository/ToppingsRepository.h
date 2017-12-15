#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H
#include <vector>
#include <fstream>
#include "ToppingsModel.h"
using namespace std;

class ToppingsRepository
{
public:
    ToppingsRepository();
    void storeAllToppings(const vector<ToppingsModel>& toppings);
    vector<ToppingsModel> retrieveAllToppings();

};

#endif // TOPPINGSREPOSITORY_H
