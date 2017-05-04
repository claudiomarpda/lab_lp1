#ifndef LIST10_3_PAYROLLCONTROL_H
#define LIST10_3_PAYROLLCONTROL_H


#include <vector>
#include "Employee.h"
#include "EmployeeNotFoundException.h"
#include "BudgetExceededException.h"

using namespace std;

class PayrollControl {

private:
    vector<Employee *> employees;
    double availableCash;

public:

    void setAvailableCash(double availableCash);

    void setEmployees(const vector<Employee *> &employees);

    double calculateTotalPayroll() throw(BudgetExceededException);

    double checkEmployeeSalary(int id) throw(EmployeeNotFoundException);
};


#endif //LIST10_3_PAYROLLCONTROL_H
