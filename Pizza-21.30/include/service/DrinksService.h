#ifndef DRINKSSERVICE_H
#define DRINKSSERVICE_H

#include "DrinksRepository.h"

#include "InvalidDrinksException.h"

class DrinksService
{
public:
    DrinksService();
    void add_drinks(const DrinksModel& drinks);

private:
    DrinksRepository drinks_repo;

    bool isValidName(const DrinksModel& drinks);
    bool isValidPrice(const DrinksModel& drinks);
};

#endif // DRINKSSERVICE_H
