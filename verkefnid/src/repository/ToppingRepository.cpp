#include "ToppingRepository.h"


ToppingRepository::ToppingRepository()
{
    //ctor
}

void ToppingRepository::storeToppings(const ToppingService& topping){

    ofstream fout;
    fout.open("toppings.txt");

    fout << topping;

    fout.close();
}

void ToppingRepository::retrieveToppings(){

    ifstream fin;
    fin.open("toppings.txt");

    ToppingService topping;
    fin >> topping;

    fin.close();
}
