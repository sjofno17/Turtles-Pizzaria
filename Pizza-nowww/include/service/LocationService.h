#ifndef LOCATIONSERVICE_H
#define LOCATIONSERVICE_H

#include "LocationRepository.h"

#include "InvalidLocationException.h"

class LocationService
{
public:
    LocationService();
    void add_location(const LocationModel& location, vector<LocationModel>& locationVec);

private:
    LocationRepository location_repo;

    bool isValidName(const LocationModel& location);
};

#endif // LOCATIONSERVICE_H
