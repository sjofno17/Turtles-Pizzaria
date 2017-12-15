#ifndef BAKERUI_H
#define BAKERUI_H

#include <iostream>

#include "OrderRepository.h"

using namespace std;

class BakerUI
{
    public:
        BakerUI();
        void baker_menu();

    private:
        void validate_input(char input);
        OrderModel retrieve_order();
        OrderRepository order_repo;

};

#endif // BAKERUI_H
