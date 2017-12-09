#ifndef INVALIDSALARYEXCEPTION_H
#define INVALIDSALARYEXCEPTION_H

#include <string>

using namespace std;

class InvalidSalaryException
{
    public:
    InvalidSalaryException(string message);
    string getMessage();


private:
    string message;
};

#endif // INVALIDSALARYEXCEPTION_H
