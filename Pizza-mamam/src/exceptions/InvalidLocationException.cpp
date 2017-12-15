#include "InvalidLocationException.h"

InvalidLocationException::InvalidLocationException(string message)
{
    this->message = message;
}

string InvalidLocationException::getMessage()
{
    return this->message;
}
