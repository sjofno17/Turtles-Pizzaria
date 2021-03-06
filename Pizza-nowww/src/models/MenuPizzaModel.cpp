#include "MenuPizzaModel.h"

MenuPizzaModel::MenuPizzaModel()
{
}

MenuPizzaModel::MenuPizzaModel(string name, string pizza_size, int price)
{
    this->name = name;
    this->pizza_size = pizza_size;
    this->price = price;
}

string MenuPizzaModel::get_name() const
{
    return this->name;
}
string MenuPizzaModel::get_pizza_size() const
{
    return this->pizza_size;
}
int MenuPizzaModel::get_price() const
{
    return this->price;
}

void MenuPizzaModel::addMenuPizza(MenuPizzaModel menuPizza)
{
    vector<MenuPizzaModel> menuPizzaVec;
    menuPizzaVec.push_back(menuPizza);
}

void MenuPizzaModel::write(ofstream& fout) const
{
    int stringlenght = name.length() + 1;

    fout.write((char*)(&stringlenght), sizeof(int));
    fout.write(name.c_str(), stringlenght);

    int stringlenght2 = pizza_size.length() + 1;

    fout.write((char*)(&stringlenght2), sizeof(int));
    fout.write(pizza_size.c_str(), stringlenght2);

    fout.write((char*)(&price), sizeof(double));
}

void MenuPizzaModel::read(ifstream& fin)
{
    int stringlenght;
    fin.read((char*)(&stringlenght), sizeof(int));
    char *str = new char [stringlenght];

    fin.read(str, stringlenght);
    name = str;

    int stringlenght2;
    fin.read((char*)(&stringlenght2), sizeof(int));
    char *str2 = new char [stringlenght2];

    fin.read(str2, stringlenght2);
    pizza_size = str2;

    fin.read((char*)(&price), sizeof(double));
    delete[] str;
    delete[] str2;

}


ostream& operator << (ostream& out, const MenuPizzaModel& menupizza_info)
{
    out << menupizza_info.name << "\t" << menupizza_info.pizza_size << "\t" << menupizza_info.price << endl;
    return out;
}
