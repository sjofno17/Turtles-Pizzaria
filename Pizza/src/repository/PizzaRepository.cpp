#include "PizzaRepository.h"
#include <fstream>
#include <iostream>
using namespace std;
#include "PizzaUI.h"


PizzaRepository::PizzaRepository()
{
    //ctor
}

PizzaRepository::~PizzaRepository()
{
    //dtor
}

void PizzaRepository::storePizzaUI(const PizzaUI& pizzaui){

    ofstream fout;
    fout.open("pizza.txt");
    fout << pizzaui;
    fout.close();
}

Pizza PizzaRepository::retrievePizzaUI(){

    ifstream fin;
    fin.open("pizza.txt");

    PizzaUI pizzaui;
    fin >> pizzaui;
    fin.close();

    return pizzaui;
}
