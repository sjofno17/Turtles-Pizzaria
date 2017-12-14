#include "LocationRepository.h"
#include "LocationModel.h"
#include <fstream>

using namespace std;

LocationRepository::LocationRepository()
{
    //ctor
}

void LocationRepository::add_location(const LocationModel& location)
{
    ofstream fout;
    fout.open("locationIn.txt", ios::app);

    if(fout.is_open())
    {
        fout << location;
        fout.close();
    }
    else
    {
        //throw error
        cout << "Invalid" << endl;
    }
}
