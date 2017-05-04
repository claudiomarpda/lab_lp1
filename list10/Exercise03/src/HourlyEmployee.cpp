#include <iostream>
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const string &name, int id, double hourlySalary, double workedHours) :
        Employee(name, id), hourlySalary(hourlySalary), workedHours(workedHours) {}

double HourlyEmployee::calculateSalary() {
    double regularSalary = hourlySalary * REGULAR_HOURS;

    if (workedHours <= REGULAR_HOURS) {
        return regularSalary;
    } else {
        double extra = workedHours - REGULAR_HOURS;
        double extraPayment = hourlySalary * extra * EXTRA_BONUS / 100;
        return regularSalary + extraPayment;
    }
}
