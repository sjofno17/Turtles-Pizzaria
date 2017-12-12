#ifndef TOPPINGSMODEL_H
#define TOPPINGSMODEL_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class ToppingsModel
{
public:
    ToppingsModel();
    ToppingsModel(string name, int price);
    string getName() const;
    int getPrice() const;
    void addTopping(ToppingsModel topping);

    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend istream& operator >> (istream& in, ToppingsModel& topping_info);
    friend ostream& operator << (ostream& out, const ToppingsModel& topping_info);

private:
    string name;
    int price;
    vector<ToppingsModel> toppingVec;
};

#endif // TOPPINGSMODEL_H
