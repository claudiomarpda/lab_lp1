#include "PayrollControl.h"
#include "BudgetExceededException.h"

void PayrollControl::setEmployees(const vector<Employee *> &employees) {
    PayrollControl::employees = employees;
}

double PayrollControl::calculateTotalPayroll() throw (BudgetExceededException) {
    if(employees.size() == 0) {
        return 0;
    }

    double totalPayroll = 0;
    for (auto item : employees) {
        totalPayroll += item->calculateSalary();
    }

    if(availableCash < totalPayroll) {
        throw BudgetExceededException(totalPayroll);
    }
    return totalPayroll;
}

void PayrollControl::setAvailableCash(double availableCash) {
    PayrollControl::availableCash = availableCash;
}

double PayrollControl::checkEmployeeSalary(int id) throw (EmployeeNotFoundException) {
    for (auto item : employees) {
        if(item->getId() == id) {
            return item->calculateSalary();
        }
    }
    throw EmployeeNotFoundException();
}

