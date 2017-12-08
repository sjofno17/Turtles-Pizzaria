#ifndef SIZECRUSTSERVICE_H
#define SIZECRUSTSERVICE_H

#include "SizeCrustModels.h"
#include "SizeCrustRepository.h"

class SizeCrustService
{
    public:
        SizeCrustService();
        void add_size_crust(const SizeCrustModels& sizecrust_info);

    private:
        SizeCrustRepository sizecrust_info_repo;
};

#endif // SIZECRUSTSERVICE_H
