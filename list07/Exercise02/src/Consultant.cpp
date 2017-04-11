#include "Consultant.h"

Consultant::Consultant(int registration, const string &name, float salary) :
        Employee(registration, name, salary) {}

float Consultant::getSalary() const {
    return salary + (salary * BONUS / 100); // adds 10%
}

float Consultant::getSalary(float percentageIncrease) const {
    return salary + (salary * percentageIncrease / 100);
}
