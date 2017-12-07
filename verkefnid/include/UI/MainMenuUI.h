#ifndef MAINMENUUI_H
#define MAINMENUUI_H
#include <fstream>
#include <string>
#include <iostream>
#include "AdminUI.h"

using namespace std;

class MainMenuUI
{
    public:
        MainMenuUI();
        MainMenuUI(char main_menu);
        void start_menu();

        friend ostream& operator << (ostream& out, const MainMenuUI& main);
        friend istream& operator >> (istream& in, MainMenuUI& main);

    private:
        char main_menu;
};

#endif // MAINMENUUI_H
