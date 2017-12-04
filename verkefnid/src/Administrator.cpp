#include "Administrator.h"

Administrator::Administrator()
{
    topping_count = 0;
    topping = 0;
    current_topping_num = 0;
}

Administrator::Administrator(int number_of_toppings)
{
    topping_count = number_of_toppings;
    topping = new Toppings[topping_count];
    current_topping_num = 0;
}

void Administrator::add_topping(Toppings toppings)
{
    for (int i = current_topping_num; i < topping_count; i++)
    {
        topping[current_topping_num] = toppings;
    }
}

///in this function the admin can choose a size of pizza to price the topping of.
///we should wait with this function till we have more of a program
/*void Administrator::start_admin()
{
    int size_of_pizza = 0;
    cout << "Of which size of pizza do you wish to price toppings?";
    cout << "8: for a small pizza." << endl;
    cout << "12: for a medium pizza." << endl;
    cout << "16: for a large pizza." << endl;
    cin >> size_of_pizza;

    while (size_of_pizza == 8 || size_of_pizza == 10 || size_of_pizza == 12)
    {

        if (size_of_pizza == 8)
        {
            cout << "You chose 8 which is a small pizza";
        }

        else if (size_of_pizza == 12)
        {
            cout << "You chose 12 which is a medium pizza";
        }

        else
        {
            cout << "You chose 16 which is a large pizza";
        }
    }
}*/

Administrator::~Administrator()
{
    if (topping_count != 0)
    {
        delete[] topping;
    }
}
