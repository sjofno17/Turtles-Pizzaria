#include "InvalidDrinksException.h"

InvalidDrinksException::InvalidDrinksException(string message)
{
    this->message = message;
}

string InvalidDrinksException::getMessage()
{
    return this->message;
}
