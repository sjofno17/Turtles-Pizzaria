#ifndef ORDERMODEL_H
#define ORDERMODEL_H
#include <iostream>
#include <vector>
#include "MenuPizzaModel.h"
#include "OrderModel.h"
using namespace std;

class OrderModel
{
public:
    OrderModel();

    void addOrder(MenuPizzaModel& menuPizza);

    void write(ofstream& fout) const;
    void read(ifstream& fin);


    friend istream& operator >>(istream& in, OrderModel& order);
    friend ostream& operator <<(ostream& out, const OrderModel& order);

private:
    vector<MenuPizzaModel> menuPizzaVec;
    string name;
    string pizza_size;
    int price;
};

#endif // ORDERMODEL_H
