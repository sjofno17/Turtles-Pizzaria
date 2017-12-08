#ifndef SIZECRUSTMODELS_H
#define SIZECRUSTMODELS_H
#include <string>
#include <iostream>

using namespace std;

class SizeCrustModels
{
public:
    SizeCrustModels(string name, string pizza_size, int price);
    string get_name();
    string get_pizza_size();
    int get_price();

    friend ostream& operator << (ostream& out, const SizeCrustModels& sizecrust_info);

private:
    string name;
    string pizza_size;
    int price;
};

#endif // SIZECRUSTMODELS_H
