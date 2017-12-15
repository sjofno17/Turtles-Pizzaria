#include "DrinksModel.h"

DrinksModel::DrinksModel()
{
}

DrinksModel::DrinksModel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string DrinksModel::get_name() const
{
    return this->name;
}

int DrinksModel::get_price() const
{
    return this->price;
}

void DrinksModel::addDrinks(DrinksModel drink)
{
    vector<DrinksModel> drinksVec;
    drinksVec.push_back(drink);
}

void DrinksModel::write(ofstream& fout) const
{
    int stringlenght = name.length() + 1;

    fout.write((char*)(&stringlenght), sizeof(int));
    fout.write(name.c_str(), stringlenght);

    fout.write((char*)(&price), sizeof(double));
}

void DrinksModel::read(ifstream& fin)
{
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;
    fin.read((char*)(&price), sizeof(double));
    delete[] str;
}

ostream& operator << (ostream& out, const DrinksModel& drinks_info)
{
    out << drinks_info.name << "," << drinks_info.price << endl;
    return out;
}
