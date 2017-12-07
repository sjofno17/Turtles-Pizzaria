#ifndef TOPPINGSREPOSITORY_H
#define TOPPINGSREPOSITORY_H
#include <fstream>
#include "toppingmodel.h"
using namespace std;

class ToppingsRepository
{
    public:
        ToppingsRepository();
        void add_info(const toppingsService& topping);

    private:
};

#endif // TOPPINGSREPOSITORY_H
