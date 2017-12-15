#ifndef LOCATIONMODEL_H
#define LOCATIONMODEL_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class LocationModel
{
public:
    LocationModel();
    LocationModel(string name);
    string get_name() const;

    void addLocation(LocationModel location);
    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend ostream& operator << (ostream& out, const LocationModel& location);

private:
    string name;
    vector<LocationModel> locationVec;
};

#endif // LOCATIONMODEL_H
