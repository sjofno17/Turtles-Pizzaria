#ifndef SIZECRUSTREPOSITORY_H
#define SIZECRUSTREPOSITORY_H
#include <vector>
#include "SizeCrustModels.h"
#include <fstream>
using namespace std;

class SizeCrustRepository
{
public:
    SizeCrustRepository();
    void storeAllSizeCrust(const vector<SizeCrustModels>& sizeCrust);
    vector<SizeCrustModels> retrieveAllSizeCrust();
};

#endif // SIZECRUSTREPOSITORY_H
