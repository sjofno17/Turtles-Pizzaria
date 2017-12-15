#ifndef BAKERUI_H
#define BAKERUI_H
#include <vector>
#include <iostream>
#include "BakerModel.h"
#include "OrderRepository.h"

using namespace std;

class BakerUI
{
    public:
        BakerUI();
        void baker_menu();

    private:
        void validate_input(char input);
        void retrieve_order();
        OrderRepository order_repo;

};

#endif // BAKERUI_H
