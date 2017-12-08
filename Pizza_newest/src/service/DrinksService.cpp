#include "DrinksService.h"

DrinksService::DrinksService()
{
    //ctor
}

void DrinksService::add_drinks(const DrinksModel& drinks)
{
    drinks_repo.add_drinks(drinks);
    cout << drinks << endl;
}
