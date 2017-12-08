#include "AdministratorUI.h"

AdministratorUI::AdministratorUI()
{
}

///Menu which the user can add products to sell at the pizza place and pricing them.
void AdministratorUI::administrator_menu()
{
    while(true)
    {
        cout << "Administrator                                        " << endl;
        cout << "*************                                        " << endl;
        cout << "Choose one of the following: (1, 2, 3 or 4)          " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "1. Register toppings.                                " << endl;
        cout << "2. Register different types of pizza (size/crust).   " << endl;
        cout << "3. Register specific combinations by name (menu).    " << endl;
        cout << "4. Register other products, e.g. soda & bread sticks." << endl;
        cout << "5. Register locations / pick-up points.              " << endl;
        cout << "6. Back to main menu.                                " << endl;
        cout << "-----------------------------------------------------" << endl;

        char input;
        cin >> input;
        validate_input(input);
    }
}

void AdministratorUI::validate_input(char input)
{
    ///Checking how many toppings the administrator wants to price and pricing it.
    else if(input == '1')
    {

        model_service.add_topping_info(create_toppings());
    }

    ///Checking how many sizes and crusts to price and price them.
    else if(input == '2')
    {
        //Register different types of pizza (size/crust).
        model_services.add_size_crust(create_size_crust());
    }

    ///Checking how many ready pizzas to put on menu and pricing them.
    else if(input == '3')
    {
        //Register specific combinations by name (menu).
    }

    ///Naming other products to sell and pricing them.
    else if(input == '4')
    {
        //Register other products, e.g. soda & bread sticks.
    }

    ///Choosing locations for the pizza place.
    else if(input == '5')
    {
        //Register locations / pick-up points.
    }
    else if(input == '6')
    {
        system("cls");
        MainMenuUI ui;
        ui.main_menu();
    }
    else
    {
        cout << "Invalid input please try again. " << endl;
    }
}

ToppingsModel AdministratorUI::create_toppings()
{
    system("cls");
    string name;
    int price;

    cout << "How many toppings? ";
    char input_num;
    cin >> input_num;

    double price;

    for(int i = 0; i < input_num; i++)
    {
        cout << "Name of topping: ";
        cin >> name;
        cout << endl;
        cout << "Price: ";
        cin >> price;
    }
    ToppingsModel toppings_info(name, price);
    return toppings_info;
}

SizeCrustModels AdministratorUI::create_size_crust()
{
    system("cls");
    string name;
    string pizza_size;
    int price;
    int input_num;
    int input_num2;

<<<<<<< HEAD
    cout << "Enter name for pizza crust: ";
    cin >> name;
    cout << "Is it a small, medium or large " << name << "? ";
    cin >> pizza_size;
    cout << "Enter a price for " << name << " " << pizza_size << ": ";
    cin >> price;
=======
    cout << "How many types of sizes?";
    cin >> input_num;
    for (int i = 0; i < input_num; i++)
    {
        cout << "Name of size: ";
        cin >> name;
        cout << "Price of size: ";
        cin >> price;
    }
    cout << endl;
    cout << "How many crusts?";
    cin >> input_num2;
    for (int i = 0; i < input_num2; i++)
    {
        cout << "Name of crust: ";
        cin >> name;
        cout << "Price of crust: ";
        cin >> price;
    }
    cout << endl;
>>>>>>> c2dd6672a6a5c60e9ac59e2d4f55e42e9f45a13e

    SizeCrustModels sizecrust_info(name, pizza_size, price);
    cout << "THIS" << sizecrust_info;
    return sizecrust_info;
}

PizzaMenuModel AdministratorUI::create_pizza_menu()
{
    cout << "How many pizza do you want to make?";
    int input_num;

    for (int i = 0; i < input_num; i++)
    {
        cout << "Name of pizza: ";
        cin >> name;
        cout << "Price of pizza: ";
        cin >> price;
    }
    PizzaMenuModel sizecrust_info(name, price);
    cout << "THIS" << pizza_menu_info;
    return pizza_menu_info;
}

OtherModels AdministratorUI::create_other()
{

}

