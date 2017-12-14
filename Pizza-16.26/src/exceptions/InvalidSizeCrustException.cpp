#include "InvalidSizeCrustException.h"

InvalidSizeCrustException::InvalidSizeCrustException(string message)
{
    this->message = message;
}

string InvalidSizeCrustException::getMessage()
{
    return this->message;
}
