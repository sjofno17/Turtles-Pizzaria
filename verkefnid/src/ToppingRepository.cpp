#include "ToppingRepository.h"

ToppingRepository::ToppingRepository()
{

}

void ToppingRepository::storeToppings(const Toppings& topping){

    ofstream fout;
    fout.open("toppings.txt");

    fout >> toppings;

    fout.close();
}

void ToppingRepository::retrieveToppings(const Toppings& topping){

    ifstream fin;
    fin.open("toppings.txt");

    Toppings topping;
    fin >> topping;

    fin.close();

    return topping'
}
