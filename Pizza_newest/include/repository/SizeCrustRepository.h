#ifndef SIZECRUSTREPOSITORY_H
#define SIZECRUSTREPOSITORY_H

#include "SizeCrustModels.h"
#include <fstream>


class SizeCrustRepository
{
    public:
        SizeCrustRepository();
        void add_size_crust(const SizeCrustModels& sizecrust_info);

    private:
};

#endif // SIZECRUSTREPOSITORY_H
