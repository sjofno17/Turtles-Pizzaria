#ifndef INVALIDMONTHEXCEPTION_H
#define INVALIDMONTHEXCEPTION_H

#include <string>

using namespace std;

class InvalidMonthException
{
public:
    InvalidMonthException(string message);
    string getMessage();

private:
    string message;


};

#endif // INVALIDMONTHEXCEPTION_H
