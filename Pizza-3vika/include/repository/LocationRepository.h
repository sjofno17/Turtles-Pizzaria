#ifndef LOCATIONREPOSITORY_H
#define LOCATIONREPOSITORY_H

#include "LocationModel.h"
#include <fstream>

using namespace std;

class LocationRepository
{
    public:
        LocationRepository();
        void add_location(const LocationModel& location);

    private:
};

#endif // LOCATIONREPOSITORY_H
