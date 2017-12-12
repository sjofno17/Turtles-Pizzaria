#ifndef MENUPIZZAMODEL_H
#define MENUPIZZAMODEL_H
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class MenuPizzaModel
{
public:
    MenuPizzaModel();
    MenuPizzaModel(string name, string pizza_size, int price);
    string get_name() const;
    string get_pizza_size() const;
    int get_price() const;

    void addMenuPizza(MenuPizzaModel menuPizza);
    void write(ofstream& fout) const;
    void read(ifstream& fin);

    friend ostream& operator << (ostream& out, const MenuPizzaModel& sizecrust_info);

private:
    string name;
    string pizza_size;
    int price;
    vector<MenuPizzaModel> menuPizzaVec;
};

#endif // MENUPIZZAMODEL_H
