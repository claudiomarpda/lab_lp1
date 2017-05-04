#ifndef LIST10_1_HIGHERVALUEEXCEPTION_H
#define LIST10_1_HIGHERVALUEEXCEPTION_H

#include <stdexcept>

using namespace std;

class HigherValueException : public runtime_error {

public:
    HigherValueException() : runtime_error("Higher value found.") {}
};

#endif //LIST10_1_HIGHERVALUEEXCEPTION_H
