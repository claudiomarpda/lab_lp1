#ifndef LIST08_3_HOURLYEMPLOYEE_H
#define LIST08_3_HOURLYEMPLOYEE_H


#include "Employee.h"

const static float REGULAR_HOURS = 40.0f;
const static float EXTRA_BONUS = 50.0f;

class HourlyEmployee : public Employee {

private:
    double hourlySalary;
    double workedHours;

public:

    HourlyEmployee(const string &name, int id, double hourlySalary, double workedHours);

    double calculateSalary() override;
};


#endif //LIST08_3_HOURLYEMPLOYEE_H
