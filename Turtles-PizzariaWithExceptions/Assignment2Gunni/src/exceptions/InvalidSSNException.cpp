#include "InvalidSSNException.h"

InvalidSSNException::InvalidSSNException(string message)
{
    this->message = message;
}

string InvalidSSNException::getMessage()
{
    return this->message;
}
