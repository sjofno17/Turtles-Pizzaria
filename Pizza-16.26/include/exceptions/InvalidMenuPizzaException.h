#ifndef INVALIDMENUPIZZAEXCEPTION_H
#define INVALIDMENUPIZZAEXCEPTION_H

#include <string>

using namespace std;

class InvalidMenuPizzaException
{
    public:
    InvalidMenuPizzaException(string message);
    string getMessage();

private:
    string message;
};

#endif // INVALIDMENUPIZZAEXCEPTION_H
