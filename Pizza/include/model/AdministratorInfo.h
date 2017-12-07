#ifndef ADMINISTRATORINFO_H
#define ADMINISTRATORINFO_H

#include <string>
#include <vector>

using namespace std;

class AdministratorInfo
{
public:
    AdministratorInfo();
    AdministratorInfo(vector<AdministratorInfo>&sizeandcrust, string name, string pizza_size, double price);
    vector<AdministratorInfo> get_sizeandcrust();
    string get_name();
    string get_pizza_size();
    double get_price();

private:
    string name;
    string pizza_size;
    double price;
    vector<AdministratorInfo> sizeandcrust;
    vector<AdministratorInfo> toppings;
    vector<AdministratorInfo> combo;
    vector<AdministratorInfo> pizza_from_menu;
    vector<AdministratorInfo> pizzalocations;

};

#endif // ADMINISTRATORINFO_H
