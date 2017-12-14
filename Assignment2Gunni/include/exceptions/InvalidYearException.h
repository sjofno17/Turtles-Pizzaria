#ifndef INVALIDYEAREXCEPTION_H
#define INVALIDYEAREXCEPTION_H

#include <string>

using namespace std;

class InvalidYearException
{
public:
    InvalidYearException(string message);
    string getMessage();

private:
    string message;


};


#endif // INVALIDYEAREXCEPTION_H
