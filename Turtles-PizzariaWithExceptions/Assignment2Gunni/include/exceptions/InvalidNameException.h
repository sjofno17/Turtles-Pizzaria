#ifndef INVALIDNAMEEXCEPTION_H
#define INVALIDNAMEEXCEPTION_H

#include <string>

using namespace std;

class InvalidNameException
{
public:
    InvalidNameException( string message);
    string getMessage();

private:
    string message;


};


#endif // INVALIDNAMEEXCEPTION_H
