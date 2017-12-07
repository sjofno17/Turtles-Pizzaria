#ifndef ADMINISTRATORINFO_H
#define ADMINISTRATORINFO_H

#include <string>
#include <vector>

using namespace std;

class AdministratorInfo
{
public:
    AdministratorInfo();

    string get_name();
    string get_pizza_size();
    double get_price();

private:
    string name;
    string pizza_size;
    double price;


};

#endif // ADMINISTRATORINFO_H
