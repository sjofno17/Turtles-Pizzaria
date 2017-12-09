#include "InvalidNameException.h"

InvalidNameException::InvalidNameException(string message)
{
    this->message = message;
}

string InvalidNameException::getMessage()
{
    return this->message;
}

