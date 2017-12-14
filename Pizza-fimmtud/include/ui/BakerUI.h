#ifndef BAKERUI_H
#define BAKERUI_H

#include <iostream>
#include <MainMenuUI.h>

using namespace std;

class BakerUI
{
    public:
        BakerUI();
        void baker_menu();


    private:
        void validate_input(char input);
};

#endif // BAKERUI_H
