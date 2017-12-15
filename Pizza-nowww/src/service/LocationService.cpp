#include "LocationService.h"

LocationService::LocationService()
{
}
void LocationService::add_location(const LocationModel& location, vector<LocationModel>& locationVec)
{
    if(isValidName(location))
    {
        location_repo.storeAllLocations(locationVec);
    }
}

bool LocationService::isValidName(const LocationModel& location)
{
    string name = location.get_name();

    for(unsigned int i = 0; i < name.length(); i++)
    {
        if (!isalpha(name[i]) || name.length() > 15 || name.length() < 2)
        {
            throw (InvalidLocationException("The name of location is not valid!"));
        }
    }
    return true;
}
