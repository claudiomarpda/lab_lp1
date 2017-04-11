#ifndef LIST07_2_CONSULTANT_H
#define LIST07_2_CONSULTANT_H

#include "Employee.h"

/**
 * A consultant employee that has a salary bonus.
 */
class Consultant : public Employee {

static const float BONUS = 10.0f; // in percentage

public:
    Consultant(int registration, const string &name, float salary);

    float getSalary() const override;

    float getSalary(float percentageIncrease) const;
};


#endif //LIST07_2_CONSULTANT_H
