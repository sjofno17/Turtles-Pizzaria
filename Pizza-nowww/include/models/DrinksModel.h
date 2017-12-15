#ifndef DRINKSMODEL_H
#define DRINKSMODEL_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class DrinksModel
{
public:
    DrinksModel();
    DrinksModel(string name, int price);
    string get_name() const;
    int get_price() const;

    void addDrinks(DrinksModel drinks);
    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend ostream& operator << (ostream& out, const DrinksModel& drinks_info);

private:
    string name;
    int price;
};

#endif // DRINKSMODEL_H
