#include "NumberValidator.h"

void NumberValidator::validate(const int value) throw(LowerValueException, HigherValueException, TooHigherValueException){
    if(value <= 0) {
        throw LowerValueException();
    }
    else if(value > 100 && value < 1000) {
        throw HigherValueException();
    }
    else if(value >= 1000) {
        throw TooHigherValueException();
    }
}
