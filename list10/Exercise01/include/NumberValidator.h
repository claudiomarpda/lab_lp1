#ifndef LIST10_1_NUMBERVALIDATOR_H
#define LIST10_1_NUMBERVALIDATOR_H

#include <stdexcept>
#include "LowerValueException.h"
#include "HigherValueException.h"
#include "TooHigherValueException.h"

using namespace std;

class NumberValidator {

public:
    void validate(const int value) throw(LowerValueException, HigherValueException, TooHigherValueException);
};


#endif //LIST10_1_NUMBERVALIDATOR_H
