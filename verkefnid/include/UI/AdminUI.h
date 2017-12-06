#ifndef ADMINUI_H
#define ADMINUI_H
#include <iostream>
#include <stddef.h>
#include "ToppingService.h"
using namespace std;

class AdminUI
{
public:
    AdminUI();
    void startAdmin();

    friend ostream& operator << (ostream& out, const AdminUI& admin);
    friend istream& operator >> (istream& in, AdminUI& admin);

private:

};

#endif // ADMINUI_H
