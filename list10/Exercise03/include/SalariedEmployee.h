#ifndef LIST10_3_SALARIEDEMPLOYEE_H
#define LIST10_3_SALARIEDEMPLOYEE_H


#include "Employee.h"

class SalariedEmployee : public Employee {

private:
    double salary;
public:
    SalariedEmployee(const string &name, int id, double salary);

    double calculateSalary() override;
};


#endif //LIST10_3_SALARIEDEMPLOYEE_H
