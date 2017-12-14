#include "LocationRepository.h"

LocationRepository::LocationRepository()
{
}

void LocationRepository::storeAllLocations(const vector<LocationModel>& locationVec)
{
    ofstream fout;
    fout.open("locations.bin", ios::binary|ios::app);

    int locationCount = locationVec.size();

    fout.write ((char*)(&locationCount), sizeof(int));

    for (int i = 0; i < locationCount; i++)
    {
        locationVec[i].write(fout);
    }

    fout.close();
}

vector<LocationModel> LocationRepository::retrieveAllLocations()
{
    vector<LocationModel> locationVec;
    LocationModel location;

    ifstream fin;
    fin.open("locations.bin", ios::binary);


    if (fin.is_open())
    {
        int locationCount;
        fin.read((char*)(&locationCount),sizeof(int));

        for (int i = 0; i < locationCount;i++)
        {
            location.read(fin);
            locationVec.push_back(location);
        }
        fin.close();
    }
    return locationVec;
}

