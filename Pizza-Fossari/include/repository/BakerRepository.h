#ifndef BAKERREPOSITORY_H
#define BAKERREPOSITORY_H

#include "BakerModel.h"
#include "OrderModel.h"


class BakerRepository
{
public:
    BakerRepository();
    virtual ~BakerRepository();
    vector<BakerModel> retrieveOrder();
    void storeOrder(const BakerModel& baker);

private:
};

#endif // BAKERREPOSITORY_H
