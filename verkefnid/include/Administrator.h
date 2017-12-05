#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <iostream>
#include <stddef.h>
#include "Toppings.h"
using namespace std;

class Administrator
{
    public:
        Administrator();
        Administrator(int number_of_toppings);
        void start_admin();
        void add_topping(Toppings topping);

        friend ostream& operator << (ostream& out, const Administrator& admin);
        friend istream& operator >> (istream& in, Administrator& admin);

        ~Administrator();

    private:
        Toppings *topping;
        int topping_count;
        int current_topping_num;
};

#endif // ADMINISTRATOR_H
