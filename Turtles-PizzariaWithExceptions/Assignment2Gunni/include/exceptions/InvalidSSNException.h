#ifndef INVALIDSSNEXCEPTION_H
#define INVALIDSSNEXCEPTION_H

#include <string>

using namespace std;

class InvalidSSNException
{
public:
    InvalidSSNException(string message);
    string getMessage();


private:
    string message;
};

#endif // INVALIDSSNEXCEPTION_H
