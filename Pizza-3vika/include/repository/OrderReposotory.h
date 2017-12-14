#ifndef ORDERREPOSOTORY_H
#define ORDERREPOSOTORY_H

#include <fstream>

#include "OrderModel.h"

class FileNotFoundException{};

class OrderReposotory
{
    public:
        OrderReposotory();
        virtual ~OrderReposotory();

        void storePizza(const OrderModel& order);
        OrderModel retrievePizza();

    private:
};

#endif // ORDERREPOSOTORY_H
