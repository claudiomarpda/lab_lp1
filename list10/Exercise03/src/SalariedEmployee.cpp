#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string &name, int id, double salary) : Employee(name, id), salary(salary) {}

double SalariedEmployee::calculateSalary() {
    return salary;
}
