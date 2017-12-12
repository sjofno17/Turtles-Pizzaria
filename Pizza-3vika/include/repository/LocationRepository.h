#ifndef LOCATIONREPOSITORY_H
#define LOCATIONREPOSITORY_H
#include <vector>
#include "LocationModel.h"
#include <fstream>
using namespace std;

class LocationRepository
{
    public:
        LocationRepository();
        void storeAllLocations(const vector<LocationModel>& locationVec);
        vector<LocationModel> retrieveAllLocations();
};

#endif // LOCATIONREPOSITORY_H
