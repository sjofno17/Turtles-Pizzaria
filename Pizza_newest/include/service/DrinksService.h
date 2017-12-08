#ifndef DRINKSSERVICE_H
#define DRINKSSERVICE_H

#include "DrinksModel.h"
#include "DrinksRepository.h"


class DrinksService
{
    public:
        DrinksService();
        void add_drinks(const DrinksModel& drinks);

    private:
        DrinksRepository drinks_repo;
};

#endif // DRINKSSERVICE_H
