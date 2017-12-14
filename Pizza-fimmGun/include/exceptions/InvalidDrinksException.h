#ifndef INVALIDDRINKSEXCEPTION_H
#define INVALIDDRINKSEXCEPTION_H

#include <string>

using namespace std;

class InvalidDrinksException
{
    public:
    InvalidDrinksException(string message);
    string getMessage();

private:
    string message;
};

#endif // INVALIDDRINKSEXCEPTION_H
