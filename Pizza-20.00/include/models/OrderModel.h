#ifndef ORDERMODEL_H
#define ORDERMODEL_H
#include <iostream>
#include <vector>
#include "ToppingsModel.h"
#include "SizeCrustModels.h"
#include "MenuPizzaModel.h"
#include "OrderModel.h"
using namespace std;

class OrderModel
{
    public:
        OrderModel();

        void addTopping(ToppingsModel& topping);
        void addMenuPizza(MenuPizzaModel& menuPizza);
        void addSizeCrust(SizeCrustModels& sizeCrust);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >>(istream& in, OrderModel& order);
        friend ostream& operator <<(ostream& out, const OrderModel& order);

    private:
        vector<ToppingsModel> toppingsVec;
        vector<SizeCrustModels> sizeCrustVec;
        vector<MenuPizzaModel> menuPizzaVec;
};

#endif // ORDERMODEL_H
