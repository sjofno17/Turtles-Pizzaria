#include "ToppingsModel.h"

ToppingsModel::ToppingsModel()
{
}

ToppingsModel::ToppingsModel(string name, int price)
{
    this->name = name;
    this->price = price;
}

string ToppingsModel::getName()const
{
    return this->name;
}

int ToppingsModel::getPrice()const
{
    return this->price;
}

void ToppingsModel::addTopping(ToppingsModel topping)
{
    toppingVec.push_back(topping);
}

void ToppingsModel::write(ofstream& fout) const
{
    int stringlenght = name.length() + 1;

    fout.write((char*)(&stringlenght), sizeof(int));
    fout.write(name.c_str(), stringlenght);

    fout.write((char*)(&price), sizeof(double));
}

void ToppingsModel::read(ifstream& fin)
{
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;
    fin.read((char*)(&price), sizeof(double));
    delete[] str;
}

istream& operator >> (istream& in, ToppingsModel& topping_info)
{
    cout << "Topping name: ";
    getline(in, topping_info.name);
    cout << "Topping price: ";
    in >> topping_info.price;
    return in;
}

ostream& operator << (ostream& out, const ToppingsModel& topping_info)
{
    out << "Topping name: ";
    out << topping_info.name << endl;
    out << "Topping price: ";
    out << topping_info.price << endl;
    return out;
}
