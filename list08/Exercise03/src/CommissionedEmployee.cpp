#include "CommissionedEmployee.h"

CommissionedEmployee::CommissionedEmployee(const string &name, int id, double baseSalary, double weeklySales,
                                           double commissionPercentage) :
        Employee(name, id), baseSalary(baseSalary), weeklySales(weeklySales), commissionPercentage(commissionPercentage) {}

double CommissionedEmployee::calculateSalary() {
    return baseSalary + weeklySales * commissionPercentage / 100;
}
