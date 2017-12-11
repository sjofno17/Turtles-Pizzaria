#ifndef SIZECRUSTMODELS_H
#define SIZECRUSTMODELS_H
#include <string>
#include <iostream>

using namespace std;

class SizeCrustModels
{
public:
    SizeCrustModels(string name, string pizza_size, int price);
    string get_name() const;
    string get_pizza_size() const;
    int get_price() const;

    friend ostream& operator << (ostream& out, const SizeCrustModels& sizecrust_info);

private:
    string name;
    string pizza_size;
    int price;
};

#endif // SIZECRUSTMODELS_H
