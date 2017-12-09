#include "InvalidYearException.h"

InvalidYearException::InvalidYearException(string message)
{
    this->message = message;
}

string InvalidYearException::getMessage()
{
    return this->message;
}
