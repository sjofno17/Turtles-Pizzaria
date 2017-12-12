#include "LocationModel.h"

LocationModel::LocationModel(string name)
{
    this->name = name;
}

string LocationModel::get_name() const
{
    return this->name;
}



ostream& operator << (ostream& out, const LocationModel& location)
{
    out << location.name << endl;
    return out;
}
