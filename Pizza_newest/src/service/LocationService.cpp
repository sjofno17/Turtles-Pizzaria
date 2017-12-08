#include "LocationService.h"

LocationService::LocationService()
{
    //ctor
}

void LocationService::add_location(const LocationModel& location)
{
    location_repo.add_location(location);
    cout << location << endl;
}
