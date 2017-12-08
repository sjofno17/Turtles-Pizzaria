#ifndef TOPPINGSMODEL_H
#define TOPPINGSMODEL_H
#include <string>
#include <iostream>

using namespace std;

class ToppingsModel
{
public:
    ToppingsModel(string name, int price);
    string get_name();
    int get_price();

    friend ostream& operator << (ostream& out, const ToppingsModel& topping_info);

private:
    string name;
    int price;
};

#endif // TOPPINGSMODEL_H
