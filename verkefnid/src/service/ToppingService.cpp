#include "ToppingService.h"

ToppingService::ToppingService()
{

}

ToppingService::ToppingService(vector<ToppingService>& toppings, char *name, double price)
{
    this->toppings = toppings;
    this->name[30] = name[30];
    this->price = price;
}

/*void ToppingService::fillTopping(vector<ToppingService>& toppings, char *name, double price)
{
    ToppingService toppingfill;
    cout << "How many toppings would you like to price?";
    cin >> toppingfill;

    for (int i = 0; i < toppingfill; i++)
    {
        cout << "Name and price: ";
        cin >> name >> price;
    }
*/

istream& operator >> (istream& in, ToppingService& toppings)
{
    cout << "How many toppings would you like to price?";
    in >> toppings;

    return in;
}

ostream& operator << (ostream& out, const ToppingService& toppings)
{
    out << "Your chosen toppings: " << endl;
    out << toppings.name << " " << toppings.price;

    return out;
}
