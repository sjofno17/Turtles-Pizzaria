#ifndef LOCATIONMODEL_H
#define LOCATIONMODEL_H

#include <string>
#include <iostream>

using namespace std;

class LocationModel
{
public:
    LocationModel(string name);
    string get_name();

    friend ostream& operator << (ostream& out, const LocationModel& location);

private:
    string name;
};

#endif // LOCATIONMODEL_H
