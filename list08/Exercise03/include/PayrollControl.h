#ifndef LIST08_3_PAYROLLCONTROL_H
#define LIST08_3_PAYROLLCONTROL_H


#include <vector>
#include "Employee.h"

using namespace std;

class PayrollControl {

private:
    vector<Employee *> employees;

public:

    void setEmployees(const vector<Employee *> &employees);

    const vector<Employee *> &getEmployees() const;

    double calculateTotalPayroll();

    double checkEmployeeSalary(int id);
};


#endif //LIST08_3_PAYROLLCONTROL_H
