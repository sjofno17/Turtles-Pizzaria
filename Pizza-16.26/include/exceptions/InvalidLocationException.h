#ifndef INVALIDLOCATIONEXCEPTION_H
#define INVALIDLOCATIONEXCEPTION_H

#include <string>

using namespace std;

class InvalidLocationException
{
    public:
    InvalidLocationException(string message);
    string getMessage();

private:
    string message;
};

#endif // INVALIDLOCATIONEXCEPTION_H
