#ifndef LIST08_3_COMMISSIONEDEMPLOYEE_H
#define LIST08_3_COMMISSIONEDEMPLOYEE_H


#include "Employee.h"

class CommissionedEmployee : public Employee {

private:
    double baseSalary;
    double weeklySales;
    double commissionPercentage;

public:
    CommissionedEmployee(const string &name, int id, double baseSalary, double weeklySales,
                         double commissionPercentage);

    double calculateSalary() override;
};


#endif //LIST08_3_COMMISSIONEDEMPLOYEE_H
