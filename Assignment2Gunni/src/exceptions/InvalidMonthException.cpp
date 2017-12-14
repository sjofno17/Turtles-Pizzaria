#include "InvalidMonthException.h"

InvalidMonthException::InvalidMonthException(string message)
{
    this->message = message;
}

string InvalidMonthException::getMessage()
{
    return this->message;
}
