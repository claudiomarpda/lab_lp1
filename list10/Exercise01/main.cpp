#include <iostream>
#include "NumberValidator.h"

int main() {

    NumberValidator validator;

    try {
        validator.validate(0);
    }
    catch (LowerValueException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    try {
        validator.validate(101);
    }
    catch (HigherValueException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    try {
        validator.validate(1000);
    }
    catch (runtime_error &e) {
        cout << "Exception: " << e.what() << endl;
    }


return 0;
}