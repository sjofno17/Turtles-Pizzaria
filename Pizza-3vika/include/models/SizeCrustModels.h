#ifndef SIZECRUSTMODELS_H
#define SIZECRUSTMODELS_H
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class SizeCrustModels
{
public:
    SizeCrustModels();
    SizeCrustModels(string name, string pizza_size, int price);
    string get_name() const;
    string get_pizza_size() const;
    int get_price() const;

    void addSizeCrust(SizeCrustModels sizeCrust);
    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend ostream& operator << (ostream& out, const SizeCrustModels& sizecrust_info);

private:
    string name;
    string pizza_size;
    int price;
    vector<SizeCrustModels> sizeCrustVec;
};

#endif // SIZECRUSTMODELS_H
