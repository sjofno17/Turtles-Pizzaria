#ifndef MAINMENU_H
#define MAINMENU_H
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class MainMenu
{
    public:
        MainMenu();
        MainMenu(char main_menu);
        void start_menu();

        friend ostream& operator << (ostream& out, MainMenu& main);
        friend istream& operator >> (istream& in, MainMenu& main);

    private:
        char main_menu;
};

#endif // MAINMENU_H
