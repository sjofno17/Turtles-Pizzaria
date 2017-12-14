#ifndef ORDERMODEL_H
#define ORDERMODEL_H
#include <iostream>
#include <vector>
#include "ToppingsModel.h"
#include "SizeCrustModels.h"
#include "OrderModel.h"
#include "MenuPizzaModel.h"
using namespace std;

class OrderModel
{
    public:
        OrderModel();

        void addTopping(ToppingsModel topping);

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
