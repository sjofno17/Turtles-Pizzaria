#ifndef SIZECRUSTSERVICE_H
#define SIZECRUSTSERVICE_H

#include "SizeCrustRepository.h"

#include "InvalidSizeCrustException.h"

class SizeCrustService
{
    public:
        SizeCrustService();
        void add_size_crust(SizeCrustModels& sizecrust_info, vector<SizeCrustModels>& sizeCrustVec);

    private:
        SizeCrustRepository sizecrust_info_repo;

        bool isValidName(const SizeCrustModels& sizecrust_info);
        bool isValidPizza_Size(const SizeCrustModels& sizecrust_info);
        bool isValidPrice(const SizeCrustModels& sizecrust_info);
};

#endif // SIZECRUSTSERVICE_H
