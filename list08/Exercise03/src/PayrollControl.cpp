#include "PayrollControl.h"
#include "EmployeeNotFoundException.h"


void PayrollControl::setEmployees(const vector<Employee *> &employees) {
    PayrollControl::employees = employees;
}

const vector<Employee *> &PayrollControl::getEmployees() const {
    return employees;
}

double PayrollControl::calculateTotalPayroll() {
    if(employees.size() == 0) {
        return 0;
    }

    double total = 0;
    for (auto item : employees) {
        total += item->calculateSalary();
    }
    return total;
}

double PayrollControl::checkEmployeeSalary(int id) {
    for (auto item : employees) {
        if(item->getId() == id) {
            return item->calculateSalary();
        }
    }
//    throw EmployeeNotFoundException("Employee not found.");
    throw EmployeeNotFoundException();
}

