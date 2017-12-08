#include "SizeCrustService.h"

SizeCrustService::SizeCrustService()
{
    //ctor
}

void SizeCrustService::add_size_crust(const SizeCrustModels& sizecrust_info)
{
    sizecrust_info_repo.add_size_crust(sizecrust_info);
    cout << sizecrust_info << endl;
}
