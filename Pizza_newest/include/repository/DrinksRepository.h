#ifndef DRINKSREPOSITORY_H
#define DRINKSREPOSITORY_H

#include "DrinksModel.h"
#include <fstream>

using namespace std;

class DrinksRepository
{
    public:
        DrinksRepository();
        void add_drinks(const DrinksModel& drinks_info);

    private:
};

#endif // DRINKSREPOSITORY_H
