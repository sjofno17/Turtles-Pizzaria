#include "InvalidToppingException.h"

InvalidToppingException::InvalidToppingException(string message)
{
    this->message = message;
}

string InvalidToppingException::getMessage()
{
    return this->message;
}
