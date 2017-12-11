#ifndef MENUPIZZAMODEL_H
#define MENUPIZZAMODEL_H
#include <string>
#include <iostream>

using namespace std;

class MenuPizzaModel
{
public:
    MenuPizzaModel(string name, string pizza_size, int price);
    string get_name() const;
    string get_pizza_size() const;
    int get_price() const;

    friend ostream& operator << (ostream& out, const MenuPizzaModel& sizecrust_info);

private:
    string name;
    string pizza_size;
    int price;
};

#endif // MENUPIZZAMODEL_H
