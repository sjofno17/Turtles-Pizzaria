#include "MainMenu.h"

MainMenu::MainMenu()
{
    char main_menu = '\0';
}


MainMenu::MainMenu(char main_menu)
{
    this->main_menu = main_menu;
}

void MainMenu::start_menu()
{
    char selection = '\0';

    while (selection != 'q' && selection != 'Q')
    {
        cout << "Turtles-Pizzeria" << endl;
        cout << "'A/a': if you are an administrator." << endl;
        cout << "'S/s': if you are a salesperson." << endl;
        cout << "'B/b': if you are a baker." << endl;
        cout << "'E/e': if you are a employee." << endl;
        cout << "'Q/q': if you want to quit the program." << endl;

        cin >> selection;

        if (selection == 'A' || selection == 'a')
        {

        }

        else if (selection == 'S' || selection == 's')
        {

        }

        else if (selection == 'B' || selection == 'b')
        {

        }

        else if (selection == 'E' || selection == 'e')
        {

        }

        else
        {

        }
    }
}

ostream& operator << (ostream& out, MainMenu& main)
{
    out << "Turtles-Pizzaria" << endl;
    out << "'A/a': if you are an administrator." << endl;
    out << "'S/s': if you are a salesperson." << endl;
    out << "'B/b': if you are a baker." << endl;
    out << "'E/e': if you are a employee." << endl;
    out << "'Q/q': if you want to quit the program." << endl;

    return out;
}

istream& operator >> (istream& in, MainMenu& main)
{
    in >> main;
    return in;
}

