#ifndef DRINKSMODEL_H
#define DRINKSMODEL_H

#include <string>
#include <iostream>

using namespace std;

class DrinksModel
{
public:
    DrinksModel(string name, int price);
    string get_name() const;
    int get_price() const;

    friend ostream& operator << (ostream& out, const DrinksModel& drinks_info);

private:
    string name;
    int price;
};

#endif // DRINKSMODEL_H
