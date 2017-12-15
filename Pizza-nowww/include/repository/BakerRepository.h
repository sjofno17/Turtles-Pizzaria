#ifndef BAKERREPOSITORY_H
#define BAKERREPOSITORY_H

#include "BakerModel.h"
#include "OrderModel.h"

class BakerRepository
{
public:
    BakerRepository();

    void storeOrder(const BakerModel& baker);
    vector<BakerModel> retrieveOrder();
};

#endif // BAKERREPOSITORY_H
