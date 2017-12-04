#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <fstream>
#include <string>
#include <iostream>
#include "Toppings.h"
using namespace std;

class Administrator
{
    public:
        Administrator();
        Administrator(int number_of_toppings);
        void start_admin();
        void add_topping(Toppings toppings);

        ~Administrator();

    private:
        Toppings *topping;
        int topping_count;
        int current_topping_num;
};

#endif // ADMINISTRATOR_H
