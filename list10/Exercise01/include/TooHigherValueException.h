#ifndef LIST10_1_TOOHIGHERVALUEEXCEPTION_H
#define LIST10_1_TOOHIGHERVALUEEXCEPTION_H

#include <stdexcept>

using namespace std;

class TooHigherValueException : public runtime_error {

public:
    TooHigherValueException() : runtime_error("Too Higher value found.") {}
};

#endif //LIST10_1_TOOHIGHERVALUEEXCEPTION_H
