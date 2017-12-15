#ifndef BAKERMODEL_H
#define BAKERMODEL_H
#include <iostream>
#include <fstream>
#include "BakerRepository.h"
using namespace std;

class BakerModel
{
    public:
        BakerModel();

        //void addTopping(ToppingsModel& topping);
        //void addMenuPizza(MenuPizzaModel& menuPizza);
        //void addSizeCrust(SizeCrustModels& sizeCrust);

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >>(istream& in, BakerModel& baker);
        friend ostream& operator <<(ostream& out, const BakerModel& baker);

    private:
       /* vector<ToppingsModel> toppingsVec;
        vector<SizeCrustModels> sizeCrustVec;
        vector<MenuPizzaModel> menuPizzaVec;*/
};

#endif // BAKERMODEL_H
