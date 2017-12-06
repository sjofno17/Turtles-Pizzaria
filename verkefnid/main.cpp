#include <iostream>
#include "MainMenuUI.h"
#include "AdminUI.h"
#include "ToppingService.h"
using namespace std;


int main()
{
    MainMenuUI main;
    main.start_menu();
    cout << main;

    AdminUI admin;
    admin.startAdmin();
    cin >> admin;

    return 0;
}
