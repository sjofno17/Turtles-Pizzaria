#ifndef DRINKSREPOSITORY_H
#define DRINKSREPOSITORY_H
#include <vector>
#include <fstream>
#include "DrinksModel.h"
using namespace std;

class DrinksRepository
{
    public:
        DrinksRepository();
        void storeAllDrinks(const vector<DrinksModel>& drinksVec);
        vector<DrinksModel> retrieveAllDrinks();
};

#endif // DRINKSREPOSITORY_H
