#include "InvalidSalaryException.h"

InvalidSalaryException::InvalidSalaryException(string message)
{
    this->message = message;
}

string InvalidSalaryException::getMessage()
{
    return this->message;
}
