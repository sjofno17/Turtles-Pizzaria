#include "AdminUI.h"

AdminUI::AdminUI()
{

}

void AdminUI::startAdmin()
{
    vector<ToppingService> toppings;
    char name[30];
    double price;
    char adminInput;
    cout << "Would you like to price a whole pizza or just toppings?" << endl;
    cout << "*******************************************************" << endl;
    cout << "1. for pizza." << endl;
    cout << "2. for toppings." << endl;
    cout << "'Q/q': to quit." << endl;

    cin >> adminInput;

    if (adminInput == '1')
    {
        //PizzaSerivce pizzaserv;
    }

    /*else if (adminInput == '2')
    {
        ToppingService toppingserv;
        toppingserv.fillTopping( toppings, name, price);
    }*/

    else if (adminInput == 'q' || adminInput == 'Q')
    {

    }

    else
    {

    }
}

ostream& operator << (ostream& out, const AdminUI& admin)
{
    out << admin;
    return out;
}

istream& operator >> (istream& in, AdminUI& admin)
{
    in >> admin;
    return in;
}
