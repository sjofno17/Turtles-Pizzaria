#include "PizzaUI.h"

PizzaUI::PizzaUI()
{
    //ctor
}

PizzaUI::~PizzaUI()
{
    //dtor
}

void PizzaUI::addPizza(){

    char selection = '\0';

    cout << "m: make pizza" << endl;
    cout << "r: read pizza" << endl;
    cout << "q: quit" << endl;

    cin >> selection;

    if(selection == 'm'){
        int topCnt;
        cout << "How many toppings: ";
        cin >> topCnt;

        PizzaUI pizzaui(topCnt);
        for(int i = 0; i < topCnt; i++){
            ToppingModel topping;
            cin >> topping;
            pizza.addTopping(topping);
        }
        pizzauiRepo.storePizzaUI(pizzaui);
        cout << endl;
    }

    if(selection == 'r'){
            PizzaUI pizzaui = pizzauiRepo.retrievePizzaUI();
            cout << pizzaui;
            cout << endl;
       }

    if(selection == 'q'){
            break;
    }
