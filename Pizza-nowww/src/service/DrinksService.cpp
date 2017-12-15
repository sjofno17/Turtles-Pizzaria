#include "DrinksService.h"

DrinksService::DrinksService()
{
    //ctor
}
void DrinksService::add_drinks(const DrinksModel& drinks, vector<DrinksModel>& drinksVec)
{
    if(isValidName(drinks) && isValidPrice(drinks))
    {
        drinks_repo.storeAllDrinks(drinksVec);
    }
}
bool DrinksService::isValidName(const DrinksModel& drinks)
{
    string name = drinks.get_name();

    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (!isalpha(name[i]) || name.length() > 15 || name.length() < 2)
        {
            throw (InvalidDrinksException("The name of drink is not valid!"));
        }
    }
    return true;
}
bool DrinksService::isValidPrice(const DrinksModel& drinks)
{
    int price = drinks.get_price();

    if (price < 0 || price > 1000000)
    {
        throw (InvalidDrinksException("Price is not a valid input!"));
    }
    return true;
}
