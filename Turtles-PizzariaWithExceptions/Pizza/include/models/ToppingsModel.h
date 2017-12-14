#ifndef TOPPINGSMODEL_H
#define TOPPINGSMODEL_H
#include <string>
#include <iostream>

using namespace std;

class ToppingsModel
{
public:
    ToppingsModel(string name, int price);
    string get_name() const;
    int get_price() const;

    friend ostream& operator << (ostream& out, const ToppingsModel& topping_info);

private:
    string name;
    int price;
};

#endif // TOPPINGSMODEL_H
