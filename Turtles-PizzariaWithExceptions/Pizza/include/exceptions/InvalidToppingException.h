#ifndef INVALIDTOPPINGEXCEPTION_H
#define INVALIDTOPPINGEXCEPTION_H

#include <string>

using namespace std;

class InvalidToppingException
{
public:
    InvalidToppingException(string message);
    string getMessage();

private:
    string message;
};

#endif // INVALIDTOPPINGEXCEPTION_H
