#ifndef INVALIDSIZECRUSTEXCEPTION_H
#define INVALIDSIZECRUSTEXCEPTION_H

#include <string>

using namespace std;

class InvalidSizeCrustException
{
public:
    InvalidSizeCrustException(string message);
    string getMessage();

private:
    string message;
};

#endif // INVALIDSIZECRUSTEXCEPTION_H
