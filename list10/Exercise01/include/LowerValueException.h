#ifndef LIST10_1_LOWERVALUEEXCEPTION_H
#define LIST10_1_LOWERVALUEEXCEPTION_H

#include <stdexcept>

using namespace std;

class LowerValueException : public runtime_error {

public:
    LowerValueException() : runtime_error("Lower value found.") {}

};

#endif //LIST10_1_LOWERVALUEEXCEPTION_H
