#include "InvalidMenuPizzaException.h"

InvalidMenuPizzaException::InvalidMenuPizzaException(string message)
{
    this->message = message;
}

string InvalidMenuPizzaException::getMessage()
{
    return this->message;
}
