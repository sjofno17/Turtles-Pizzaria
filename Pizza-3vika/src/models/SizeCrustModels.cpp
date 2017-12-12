#include "SizeCrustModels.h"

SizeCrustModels::SizeCrustModels()
{

}

SizeCrustModels::SizeCrustModels(string name, string pizza_size, int price)
{
    this->name = name;
    this->pizza_size = pizza_size;
    this->price = price;
}

string SizeCrustModels::get_name() const
{
    return this->name;
}

string SizeCrustModels::get_pizza_size() const
{
    return this->pizza_size;
}

int SizeCrustModels::get_price() const
{
    return this->price;
}

void SizeCrustModels::addSizeCrust(SizeCrustModels sizeCrust)
{
    sizeCrustVec.push_back(sizeCrust);
}

void SizeCrustModels::write(ofstream& fout) const
{
    int stringlenght = name.length() + 1;

    fout.write((char*)(&stringlenght), sizeof(int));
    fout.write(name.c_str(), stringlenght);

    fout.write((char*)(&price), sizeof(double));
}
void SizeCrustModels::read(ifstream& fin)
{
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;
    fin.read((char*)(&price), sizeof(double));
    delete[] str;
}

ostream& operator << (ostream& out, const SizeCrustModels& sizecrust_info)
{
    out << sizecrust_info.name << ", " << sizecrust_info.pizza_size << ", " << sizecrust_info.price << endl;
    return out;
}
