#include "MenuPizzaRepository.h"

MenuPizzaRepository::MenuPizzaRepository()
{
}

void MenuPizzaRepository::storeAllMenuPizza(const vector<MenuPizzaModel>& menuPizzaVec)
{
    ofstream fout;
    fout.open("menuPizza.bin", ios::binary|ios::app);

    int menuPizzaCount = menuPizzaVec.size();

    fout.write((char*)(&menuPizzaCount), sizeof(int));

    for (int i = 0; i < menuPizzaCount; i++)
    {
        menuPizzaVec[i].write(fout);
    }

    fout.close();
}

vector<MenuPizzaModel> MenuPizzaRepository::retrieveAllMenuPizza()
{
    vector<MenuPizzaModel> menuPizzaVec;
    MenuPizzaModel menuPizza;

    ifstream fin;
    fin.open("menuPizza.bin", ios::binary);

    if (fin.is_open())
    {
        int MenupizzaCount;
        while (fin.read((char*)(&MenupizzaCount),sizeof(int)))
        {
            for (int i = 0; i < MenupizzaCount; i++)
            {
                menuPizza.read(fin);
                menuPizzaVec.push_back(menuPizza);
            }
        }
        fin.close();
    }
    return menuPizzaVec;
}
