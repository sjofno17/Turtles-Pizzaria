#include "SizeCrustService.h"

SizeCrustService::SizeCrustService()
{
    //ctor
}

void SizeCrustService::add_size_crust(const SizeCrustModels& sizecrust_info)
{
    if(isValidName(sizecrust_info) && isValidPizza_Size(sizecrust_info) && isValidPrice(sizecrust_info))
    {
        sizecrust_info_repo.add_size_crust(sizecrust_info);
        cout << sizecrust_info << endl;
    }
}

bool SizeCrustService::isValidName(const SizeCrustModels& sizecrust_info)
{
    string name = sizecrust_info.get_name();

    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (!isalpha(name[i]) || name.length() > 15 || name.length() < 2)
        {
            throw (InvalidSizeCrustException("The name of crust is not valid!"));
        }
    }
    return true;
}
bool SizeCrustService::isValidPizza_Size(const SizeCrustModels& sizecrust_info)
{
    string pizza_size = sizecrust_info.get_pizza_size();

        if (pizza_size != "small" && pizza_size != "medium" && pizza_size != "large")
        {
            throw (InvalidSizeCrustException("The name of size is not valid! Please write small, medium or large."));
        }
    return true;
}
bool SizeCrustService::isValidPrice(const SizeCrustModels& sizecrust_info)
{
    int price = sizecrust_info.get_price();

    if (price < 0 || price > 1000000)
    {
        throw (InvalidSizeCrustException("Price is not a valid input!"));
    }
    return true;
}

