#ifndef LOCATIONSERVICE_H
#define LOCATIONSERVICE_H

#include "LocationModel.h"
#include "LocationRepository.h"


class LocationService
{

public:
    LocationService();
    void add_location(const LocationModel& location);

private:
    LocationRepository location_repo;
};

#endif // LOCATIONSERVICE_H
