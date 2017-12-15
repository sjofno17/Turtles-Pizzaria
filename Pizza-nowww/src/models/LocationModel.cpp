#include "LocationModel.h"

LocationModel::LocationModel()
{
}

LocationModel::LocationModel(string name)
{
    this->name = name;
}

string LocationModel::get_name() const
{
    return this->name;
}

void LocationModel::addLocation(LocationModel location)
{
    vector<LocationModel> locationVec;
    locationVec.push_back(location);
}

void LocationModel::write(ofstream& fout) const
{
    int stringlenght = name.length() + 1;

    fout.write((char*)(&stringlenght), sizeof(int));
    fout.write(name.c_str(), stringlenght);

}
void LocationModel::read(ifstream& fin)
{
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;
    delete[] str;
}


ostream& operator << (ostream& out, const LocationModel& location)
{
    out << location.name << endl;
    return out;
}
